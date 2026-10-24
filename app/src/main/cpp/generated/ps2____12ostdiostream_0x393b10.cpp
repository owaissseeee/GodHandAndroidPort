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

// Function: _$_12ostdiostream
// Address: 0x393b10 - 0x393bf8
void ps2____12ostdiostream_0x393b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2____12ostdiostream_0x393b10");
#endif

    switch (ctx->pc) {
        case 0x393b74u: goto label_393b74;
        case 0x393bd0u: goto label_393bd0;
        case 0x393be4u: goto label_393be4;
        default: break;
    }

    ctx->pc = 0x393b10u;

    // 0x393b10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x393b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x393b14: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x393b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x393b18: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x393b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x393b1c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x393b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x393b20: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x393b20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393b24: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x393b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x393b28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x393b28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393b2c: 0x2444dac8  addiu       $a0, $v0, -0x2538
    ctx->pc = 0x393b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957768));
    // 0x393b30: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x393b30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x393b34: 0x1620000c  bnez        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x393B34u;
    {
        const bool branch_taken_0x393b34 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x393B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393B34u;
        // 0x393b38: 0xace40028  sw          $a0, 0x28($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393b34) {
            ctx->pc = 0x393B68u;
            goto label_393b68;
        }
    }
    ctx->pc = 0x393B3Cu;
    // 0x393b3c: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x393b3cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x393b40: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x393b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x393b44: 0xdc46dac8  ld          $a2, -0x2538($v0)
    ctx->pc = 0x393b44u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 4294957768)));
    // 0x393b48: 0xdc840008  ld          $a0, 0x8($a0)
    ctx->pc = 0x393b48u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x393b4c: 0x24e2ff98  addiu       $v0, $a3, -0x68
    ctx->pc = 0x393b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967192));
    // 0x393b50: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x393b50u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x393b54: 0xffa60010  sd          $a2, 0x10($sp)
    ctx->pc = 0x393b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 6));
    // 0x393b58: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x393b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x393b5c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x393b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x393b60: 0xace50028  sw          $a1, 0x28($a3)
    ctx->pc = 0x393b60u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 5));
    // 0x393b64: 0xa7a30018  sh          $v1, 0x18($sp)
    ctx->pc = 0x393b64u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 24), (uint16_t)GPR_U32(ctx, 3));
label_393b68:
    // 0x393b68: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x393b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x393b6c: 0xc0e4d74  jal         func_3935D0
    ctx->pc = 0x393B6Cu;
    SET_GPR_U32(ctx, 31, 0x393B74u);
    ctx->pc = 0x393B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393B6Cu;
    // 0x393b70: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3935D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3935D0u, 0x393B6Cu, 0x393B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393B74u;
label_393b74:
    // 0x393b74: 0x8e090000  lw          $t1, 0x0($s0)
    ctx->pc = 0x393b74u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x393b78: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x393b78u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x393b7c: 0x24e3d178  addiu       $v1, $a3, -0x2E88
    ctx->pc = 0x393b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955384));
    // 0x393b80: 0x32280002  andi        $t0, $s1, 0x2
    ctx->pc = 0x393b80u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
    // 0x393b84: 0xad230028  sw          $v1, 0x28($t1)
    ctx->pc = 0x393b84u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 3));
    // 0x393b88: 0x2522fff8  addiu       $v0, $t1, -0x8
    ctx->pc = 0x393b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967288));
    // 0x393b8c: 0x94640008  lhu         $a0, 0x8($v1)
    ctx->pc = 0x393b8cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x45D180u));
    // 0x393b90: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x393b90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x393b94: 0xdc660008  ld          $a2, 0x8($v1)
    ctx->pc = 0x393b94u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x393b98: 0xdce5d178  ld          $a1, -0x2E88($a3)
    ctx->pc = 0x393b98u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 7), 4294955384)));
    // 0x393b9c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x393b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x393ba0: 0xffa60008  sd          $a2, 0x8($sp)
    ctx->pc = 0x393ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 6));
    // 0x393ba4: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x393ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
    // 0x393ba8: 0xa7a40008  sh          $a0, 0x8($sp)
    ctx->pc = 0x393ba8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x393bac: 0x11000008  beqz        $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x393BACu;
    {
        const bool branch_taken_0x393bac = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x393BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393BACu;
        // 0x393bb0: 0xad3d0028  sw          $sp, 0x28($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393bac) {
            ctx->pc = 0x393BD0u;
            goto label_393bd0;
        }
    }
    ctx->pc = 0x393BB4u;
    // 0x393bb4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x393bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x393bb8: 0x8d240020  lw          $a0, 0x20($t1)
    ctx->pc = 0x393bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x393bbc: 0x2442d340  addiu       $v0, $v0, -0x2CC0
    ctx->pc = 0x393bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955840));
    // 0x393bc0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x393BC0u;
    {
        const bool branch_taken_0x393bc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x393BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393BC0u;
        // 0x393bc4: 0xad220028  sw          $v0, 0x28($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393bc0) {
            ctx->pc = 0x393BD0u;
            goto label_393bd0;
        }
    }
    ctx->pc = 0x393BC8u;
    // 0x393bc8: 0xc0c3d72  jal         func_30F5C8
    ctx->pc = 0x393BC8u;
    SET_GPR_U32(ctx, 31, 0x393BD0u);
    ctx->pc = 0x30F5C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F5C8u, 0x393BC8u, 0x393BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393BD0u;
label_393bd0:
    // 0x393bd0: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x393bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x393bd4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x393BD4u;
    {
        const bool branch_taken_0x393bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x393BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393BD4u;
        // 0x393bd8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393bd4) {
            ctx->pc = 0x393BE8u;
            goto label_393be8;
        }
    }
    ctx->pc = 0x393BDCu;
    // 0x393bdc: 0xc0c3d68  jal         func_30F5A0
    ctx->pc = 0x393BDCu;
    SET_GPR_U32(ctx, 31, 0x393BE4u);
    ctx->pc = 0x393BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393BDCu;
    // 0x393be0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30F5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F5A0u, 0x393BDCu, 0x393BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393BE4u;
label_393be4:
    // 0x393be4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x393be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_393be8:
    // 0x393be8: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x393be8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x393bec: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x393becu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x393bf0: 0x3e00008  jr          $ra
    ctx->pc = 0x393BF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x393BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393BF0u;
        // 0x393bf4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x393BF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x393BF8u;
}
