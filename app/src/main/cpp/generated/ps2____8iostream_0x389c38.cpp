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

// Function: _$_8iostream
// Address: 0x389c38 - 0x389d50
void ps2____8iostream_0x389c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2____8iostream_0x389c38");
#endif

    switch (ctx->pc) {
        case 0x389d24u: goto label_389d24;
        case 0x389d38u: goto label_389d38;
        default: break;
    }

    ctx->pc = 0x389c38u;

    // 0x389c38: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x389c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x389c3c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x389c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x389c40: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x389c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x389c44: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x389c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x389c48: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x389c48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389c4c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x389c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x389c50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x389c50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389c54: 0x2444d158  addiu       $a0, $v0, -0x2EA8
    ctx->pc = 0x389c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955352));
    // 0x389c58: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x389c58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x389c5c: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x389c5cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389c60: 0x1620000c  bnez        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x389C60u;
    {
        const bool branch_taken_0x389c60 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x389C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389C60u;
        // 0x389c64: 0xace40028  sw          $a0, 0x28($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389c60) {
            ctx->pc = 0x389C94u;
            goto label_389c94;
        }
    }
    ctx->pc = 0x389C68u;
    // 0x389c68: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x389c68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x389c6c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x389c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x389c70: 0xdc46d158  ld          $a2, -0x2EA8($v0)
    ctx->pc = 0x389c70u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 4294955352)));
    // 0x389c74: 0xdc840008  ld          $a0, 0x8($a0)
    ctx->pc = 0x389c74u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x389c78: 0x24e2fff0  addiu       $v0, $a3, -0x10
    ctx->pc = 0x389c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
    // 0x389c7c: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x389c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x389c80: 0xffa60010  sd          $a2, 0x10($sp)
    ctx->pc = 0x389c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 6));
    // 0x389c84: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x389c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x389c88: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x389c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x389c8c: 0xace50028  sw          $a1, 0x28($a3)
    ctx->pc = 0x389c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 5));
    // 0x389c90: 0xa7a30018  sh          $v1, 0x18($sp)
    ctx->pc = 0x389c90u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 24), (uint16_t)GPR_U32(ctx, 3));
label_389c94:
    // 0x389c94: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x389c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x389c98: 0x3c080046  lui         $t0, 0x46
    ctx->pc = 0x389c98u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)70 << 16));
    // 0x389c9c: 0x2503d178  addiu       $v1, $t0, -0x2E88
    ctx->pc = 0x389c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294955384));
    // 0x389ca0: 0x3c090046  lui         $t1, 0x46
    ctx->pc = 0x389ca0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)70 << 16));
    // 0x389ca4: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x389ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
    // 0x389ca8: 0x2525d168  addiu       $a1, $t1, -0x2E98
    ctx->pc = 0x389ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 4294955368));
    // 0x389cac: 0x94660008  lhu         $a2, 0x8($v1)
    ctx->pc = 0x389cacu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)FAST_READ16(0x45D180u));
    // 0x389cb0: 0x2041023  subu        $v0, $s0, $a0
    ctx->pc = 0x389cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x389cb4: 0xdd07d178  ld          $a3, -0x2E88($t0)
    ctx->pc = 0x389cb4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 4294955384)));
    // 0x389cb8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x389cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x389cbc: 0xdc680008  ld          $t0, 0x8($v1)
    ctx->pc = 0x389cbcu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x389cc0: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x389cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x389cc4: 0xffa70000  sd          $a3, 0x0($sp)
    ctx->pc = 0x389cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 7));
    // 0x389cc8: 0x2543fff8  addiu       $v1, $t2, -0x8
    ctx->pc = 0x389cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967288));
    // 0x389ccc: 0xffa80008  sd          $t0, 0x8($sp)
    ctx->pc = 0x389cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 8));
    // 0x389cd0: 0x2031823  subu        $v1, $s0, $v1
    ctx->pc = 0x389cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x389cd4: 0xac9d0028  sw          $sp, 0x28($a0)
    ctx->pc = 0x389cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 29));
    // 0x389cd8: 0x32280002  andi        $t0, $s1, 0x2
    ctx->pc = 0x389cd8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
    // 0x389cdc: 0xad450028  sw          $a1, 0x28($t2)
    ctx->pc = 0x389cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 40), GPR_U32(ctx, 5));
    // 0x389ce0: 0x94a20008  lhu         $v0, 0x8($a1)
    ctx->pc = 0x389ce0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x389ce4: 0xdca40008  ld          $a0, 0x8($a1)
    ctx->pc = 0x389ce4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x389ce8: 0xa7a60008  sh          $a2, 0x8($sp)
    ctx->pc = 0x389ce8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 6));
    // 0x389cec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x389cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x389cf0: 0xdd27d168  ld          $a3, -0x2E98($t1)
    ctx->pc = 0x389cf0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 9), 4294955368)));
    // 0x389cf4: 0xffa40008  sd          $a0, 0x8($sp)
    ctx->pc = 0x389cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 4));
    // 0x389cf8: 0xffa70000  sd          $a3, 0x0($sp)
    ctx->pc = 0x389cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 7));
    // 0x389cfc: 0xa7a20008  sh          $v0, 0x8($sp)
    ctx->pc = 0x389cfcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x389d00: 0x11000008  beqz        $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x389D00u;
    {
        const bool branch_taken_0x389d00 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x389D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389D00u;
        // 0x389d04: 0xad5d0028  sw          $sp, 0x28($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 40), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389d00) {
            ctx->pc = 0x389D24u;
            goto label_389d24;
        }
    }
    ctx->pc = 0x389D08u;
    // 0x389d08: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x389d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x389d0c: 0x8d440020  lw          $a0, 0x20($t2)
    ctx->pc = 0x389d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 32)));
    // 0x389d10: 0x2442d340  addiu       $v0, $v0, -0x2CC0
    ctx->pc = 0x389d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955840));
    // 0x389d14: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x389D14u;
    {
        const bool branch_taken_0x389d14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x389D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389D14u;
        // 0x389d18: 0xad420028  sw          $v0, 0x28($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389d14) {
            ctx->pc = 0x389D24u;
            goto label_389d24;
        }
    }
    ctx->pc = 0x389D1Cu;
    // 0x389d1c: 0xc0c3d72  jal         func_30F5C8
    ctx->pc = 0x389D1Cu;
    SET_GPR_U32(ctx, 31, 0x389D24u);
    ctx->pc = 0x30F5C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F5C8u, 0x389D1Cu, 0x389D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389D24u;
label_389d24:
    // 0x389d24: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x389d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x389d28: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x389D28u;
    {
        const bool branch_taken_0x389d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x389D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389D28u;
        // 0x389d2c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389d28) {
            ctx->pc = 0x389D3Cu;
            goto label_389d3c;
        }
    }
    ctx->pc = 0x389D30u;
    // 0x389d30: 0xc0c3d68  jal         func_30F5A0
    ctx->pc = 0x389D30u;
    SET_GPR_U32(ctx, 31, 0x389D38u);
    ctx->pc = 0x389D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389D30u;
    // 0x389d34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30F5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F5A0u, 0x389D30u, 0x389D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389D38u;
label_389d38:
    // 0x389d38: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x389d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_389d3c:
    // 0x389d3c: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x389d3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x389d40: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x389d40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x389d44: 0x3e00008  jr          $ra
    ctx->pc = 0x389D44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x389D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389D44u;
        // 0x389d48: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389D44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x389D4Cu;
    // 0x389d4c: 0x0  nop
    ctx->pc = 0x389d4cu;
    // NOP
    ctx->pc = 0x389d50u;
}
