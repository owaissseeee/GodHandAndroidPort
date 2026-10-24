#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _$_12istdiostream
// Address: 0x393e28 - 0x393f10
void ps2____12istdiostream_0x393e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2____12istdiostream_0x393e28");
#endif

    switch (ctx->pc) {
        case 0x393e8cu: goto label_393e8c;
        case 0x393ee8u: goto label_393ee8;
        case 0x393efcu: goto label_393efc;
        default: break;
    }

    ctx->pc = 0x393e28u;

    // 0x393e28: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x393e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x393e2c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x393e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x393e30: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x393e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x393e34: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x393e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x393e38: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x393e38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393e3c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x393e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x393e40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x393e40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393e44: 0x2444dad8  addiu       $a0, $v0, -0x2528
    ctx->pc = 0x393e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957784));
    // 0x393e48: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x393e48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x393e4c: 0x1620000c  bnez        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x393E4Cu;
    {
        const bool branch_taken_0x393e4c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x393E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393E4Cu;
        // 0x393e50: 0xace40028  sw          $a0, 0x28($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393e4c) {
            ctx->pc = 0x393E80u;
            goto label_393e80;
        }
    }
    ctx->pc = 0x393E54u;
    // 0x393e54: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x393e54u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x393e58: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x393e58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x393e5c: 0xdc46dad8  ld          $a2, -0x2528($v0)
    ctx->pc = 0x393e5cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 4294957784)));
    // 0x393e60: 0xdc840008  ld          $a0, 0x8($a0)
    ctx->pc = 0x393e60u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x393e64: 0x24e2ff98  addiu       $v0, $a3, -0x68
    ctx->pc = 0x393e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967192));
    // 0x393e68: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x393e68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x393e6c: 0xffa60010  sd          $a2, 0x10($sp)
    ctx->pc = 0x393e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 6));
    // 0x393e70: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x393e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x393e74: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x393e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x393e78: 0xace50028  sw          $a1, 0x28($a3)
    ctx->pc = 0x393e78u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 5));
    // 0x393e7c: 0xa7a30018  sh          $v1, 0x18($sp)
    ctx->pc = 0x393e7cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 24), (uint16_t)GPR_U32(ctx, 3));
label_393e80:
    // 0x393e80: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x393e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x393e84: 0xc0e4d74  jal         func_3935D0
    ctx->pc = 0x393E84u;
    SET_GPR_U32(ctx, 31, 0x393E8Cu);
    ctx->pc = 0x393E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393E84u;
    // 0x393e88: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3935D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3935D0u, 0x393E84u, 0x393E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393E8Cu;
label_393e8c:
    // 0x393e8c: 0x8e090000  lw          $t1, 0x0($s0)
    ctx->pc = 0x393e8cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x393e90: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x393e90u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x393e94: 0x24e3d168  addiu       $v1, $a3, -0x2E98
    ctx->pc = 0x393e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955368));
    // 0x393e98: 0x32280002  andi        $t0, $s1, 0x2
    ctx->pc = 0x393e98u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
    // 0x393e9c: 0xad230028  sw          $v1, 0x28($t1)
    ctx->pc = 0x393e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 3));
    // 0x393ea0: 0x2522fff8  addiu       $v0, $t1, -0x8
    ctx->pc = 0x393ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967288));
    // 0x393ea4: 0x94640008  lhu         $a0, 0x8($v1)
    ctx->pc = 0x393ea4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x45D170u));
    // 0x393ea8: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x393ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x393eac: 0xdc660008  ld          $a2, 0x8($v1)
    ctx->pc = 0x393eacu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x393eb0: 0xdce5d168  ld          $a1, -0x2E98($a3)
    ctx->pc = 0x393eb0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 7), 4294955368)));
    // 0x393eb4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x393eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x393eb8: 0xffa60008  sd          $a2, 0x8($sp)
    ctx->pc = 0x393eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 6));
    // 0x393ebc: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x393ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
    // 0x393ec0: 0xa7a40008  sh          $a0, 0x8($sp)
    ctx->pc = 0x393ec0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x393ec4: 0x11000008  beqz        $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x393EC4u;
    {
        const bool branch_taken_0x393ec4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x393EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393EC4u;
        // 0x393ec8: 0xad3d0028  sw          $sp, 0x28($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393ec4) {
            ctx->pc = 0x393EE8u;
            goto label_393ee8;
        }
    }
    ctx->pc = 0x393ECCu;
    // 0x393ecc: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x393eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x393ed0: 0x8d240020  lw          $a0, 0x20($t1)
    ctx->pc = 0x393ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x393ed4: 0x2442d340  addiu       $v0, $v0, -0x2CC0
    ctx->pc = 0x393ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955840));
    // 0x393ed8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x393ED8u;
    {
        const bool branch_taken_0x393ed8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x393EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393ED8u;
        // 0x393edc: 0xad220028  sw          $v0, 0x28($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393ed8) {
            ctx->pc = 0x393EE8u;
            goto label_393ee8;
        }
    }
    ctx->pc = 0x393EE0u;
    // 0x393ee0: 0xc0c3d72  jal         func_30F5C8
    ctx->pc = 0x393EE0u;
    SET_GPR_U32(ctx, 31, 0x393EE8u);
    ctx->pc = 0x30F5C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F5C8u, 0x393EE0u, 0x393EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393EE8u;
label_393ee8:
    // 0x393ee8: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x393ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x393eec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x393EECu;
    {
        const bool branch_taken_0x393eec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x393EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393EECu;
        // 0x393ef0: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393eec) {
            ctx->pc = 0x393F00u;
            goto label_393f00;
        }
    }
    ctx->pc = 0x393EF4u;
    // 0x393ef4: 0xc0c3d68  jal         func_30F5A0
    ctx->pc = 0x393EF4u;
    SET_GPR_U32(ctx, 31, 0x393EFCu);
    ctx->pc = 0x393EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393EF4u;
    // 0x393ef8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30F5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F5A0u, 0x393EF4u, 0x393EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393EFCu;
label_393efc:
    // 0x393efc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x393efcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_393f00:
    // 0x393f00: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x393f00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x393f04: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x393f04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x393f08: 0x3e00008  jr          $ra
    ctx->pc = 0x393F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x393F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393F08u;
        // 0x393f0c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x393F08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x393F10u;
}
