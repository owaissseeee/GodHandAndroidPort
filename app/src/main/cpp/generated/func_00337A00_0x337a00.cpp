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

// Function: func_00337A00
// Address: 0x337a00 - 0x337ac8
void func_00337A00_0x337a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00337A00_0x337a00");
#endif

    switch (ctx->pc) {
        case 0x337a3cu: goto label_337a3c;
        case 0x337a8cu: goto label_337a8c;
        default: break;
    }

    ctx->pc = 0x337a00u;

    // 0x337a00: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x337a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x337a04: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x337a04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x337a08: 0x8c430710  lw          $v1, 0x710($v0)
    ctx->pc = 0x337a08u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3E0710u));
    // 0x337a0c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x337a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x337a10: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x337a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x337a14: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x337A14u;
    {
        const bool branch_taken_0x337a14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x337A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337A14u;
        // 0x337a18: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337a14) {
            ctx->pc = 0x337A2Cu;
            goto label_337a2c;
        }
    }
    ctx->pc = 0x337A1Cu;
    // 0x337a1c: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x337a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x337a20: 0x8c430708  lw          $v1, 0x708($v0)
    ctx->pc = 0x337a20u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3E0708u));
    // 0x337a24: 0x18600025  blez        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x337A24u;
    {
        const bool branch_taken_0x337a24 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x337A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337A24u;
        // 0x337a28: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337a24) {
            ctx->pc = 0x337ABCu;
            goto label_337abc;
        }
    }
    ctx->pc = 0x337A2Cu;
label_337a2c:
    // 0x337a2c: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x337a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x337a30: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x337a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x337a34: 0xc0cff5c  jal         func_33FD70
    ctx->pc = 0x337A34u;
    SET_GPR_U32(ctx, 31, 0x337A3Cu);
    ctx->pc = 0x337A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337A34u;
    // 0x337a38: 0x24845668  addiu       $a0, $a0, 0x5668 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FD70u, 0x337A34u, 0x337A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337A3Cu;
label_337a3c:
    // 0x337a3c: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x337a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x337a40: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x337a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x337a44: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x337a44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337a48: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x337a48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x337a4c: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x337a4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x337a50: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x337a50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x337a54: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x337A54u;
    {
        const bool branch_taken_0x337a54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x337A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337A54u;
        // 0x337a58: 0x24700750  addiu       $s0, $v1, 0x750 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1872));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337a54) {
            ctx->pc = 0x337A68u;
            goto label_337a68;
        }
    }
    ctx->pc = 0x337A5Cu;
    // 0x337a5c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x337A5Cu;
    {
        const bool branch_taken_0x337a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337A5Cu;
        // 0x337a60: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337a5c) {
            ctx->pc = 0x337A6Cu;
            goto label_337a6c;
        }
    }
    ctx->pc = 0x337A64u;
    // 0x337a64: 0x0  nop
    ctx->pc = 0x337a64u;
    // NOP
label_337a68:
    // 0x337a68: 0x3402bb80  ori         $v0, $zero, 0xBB80
    ctx->pc = 0x337a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48000);
label_337a6c:
    // 0x337a6c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x337a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x337a70: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x337a70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x337a74: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x337a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x337a78: 0x94490764  lhu         $t1, 0x764($v0)
    ctx->pc = 0x337a78u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)FAST_READ16(0x3E0764u));
    // 0x337a7c: 0x94620766  lhu         $v0, 0x766($v1)
    ctx->pc = 0x337a7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x3E0766u));
    // 0x337a80: 0xafa90004  sw          $t1, 0x4($sp)
    ctx->pc = 0x337a80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 9));
    // 0x337a84: 0xc0cc99c  jal         func_332670
    ctx->pc = 0x337A84u;
    SET_GPR_U32(ctx, 31, 0x337A8Cu);
    ctx->pc = 0x337A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337A84u;
    // 0x337a88: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332670u, 0x337A84u, 0x337A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337A8Cu;
label_337a8c:
    // 0x337a8c: 0x8fa70014  lw          $a3, 0x14($sp)
    ctx->pc = 0x337a8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x337a90: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x337a90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x337a94: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x337a94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x337a98: 0x24630748  addiu       $v1, $v1, 0x748
    ctx->pc = 0x337a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1864));
    // 0x337a9c: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x337a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x337aa0: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x337aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x337aa4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x337aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x337aa8: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x337aa8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x3E074Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E074Cu, _value); } while (0);
    // 0x337aac: 0xac80073c  sw          $zero, 0x73C($a0)
    ctx->pc = 0x337aacu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3E073Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E073Cu, _value); } while (0);
    // 0x337ab0: 0xaca00740  sw          $zero, 0x740($a1)
    ctx->pc = 0x337ab0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3E0740u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E0740u, _value); } while (0);
    // 0x337ab4: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x337ab4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x3E0748u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E0748u, _value); } while (0);
    // 0x337ab8: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x337ab8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_337abc:
    // 0x337abc: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x337abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x337ac0: 0x3e00008  jr          $ra
    ctx->pc = 0x337AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337AC0u;
        // 0x337ac4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337AC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337AC8u;
}
