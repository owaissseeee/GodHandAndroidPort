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

// Function: cEm66_construct
// Address: 0x27dd88 - 0x27de18
void cEm66_construct_0x27dd88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEm66_construct_0x27dd88");
#endif

    switch (ctx->pc) {
        case 0x27dd9cu: goto label_27dd9c;
        case 0x27ddd0u: goto label_27ddd0;
        default: break;
    }

    ctx->pc = 0x27dd88u;

    // 0x27dd88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27dd88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27dd8c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27dd8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x27dd90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27dd90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27dd94: 0xc0a3ac0  jal         func_28EB00
    ctx->pc = 0x27DD94u;
    SET_GPR_U32(ctx, 31, 0x27DD9Cu);
    ctx->pc = 0x27DD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DD94u;
    // 0x27dd98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EB00u, 0x27DD94u, 0x27DD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DD9Cu;
label_27dd9c:
    // 0x27dd9c: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x27dd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x27dda0: 0x246383a8  addiu       $v1, $v1, -0x7C58
    ctx->pc = 0x27dda0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935464));
    // 0x27dda4: 0xae030214  sw          $v1, 0x214($s0)
    ctx->pc = 0x27dda4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 3));
    // 0x27dda8: 0xfa001530  sqc2        $vf0, 0x1530($s0)
    ctx->pc = 0x27dda8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 5424), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x27ddac: 0xfa001540  sqc2        $vf0, 0x1540($s0)
    ctx->pc = 0x27ddacu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 5440), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x27ddb0: 0xfa001550  sqc2        $vf0, 0x1550($s0)
    ctx->pc = 0x27ddb0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 5456), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x27ddb4: 0xfa001590  sqc2        $vf0, 0x1590($s0)
    ctx->pc = 0x27ddb4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 5520), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x27ddb8: 0xfa0015a0  sqc2        $vf0, 0x15A0($s0)
    ctx->pc = 0x27ddb8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 5536), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x27ddbc: 0xfa001610  sqc2        $vf0, 0x1610($s0)
    ctx->pc = 0x27ddbcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 5648), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x27ddc0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x27ddc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27ddc4: 0x26021630  addiu       $v0, $s0, 0x1630
    ctx->pc = 0x27ddc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 5680));
    // 0x27ddc8: 0x2403002b  addiu       $v1, $zero, 0x2B
    ctx->pc = 0x27ddc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x27ddcc: 0x0  nop
    ctx->pc = 0x27ddccu;
    // NOP
label_27ddd0:
    // 0x27ddd0: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x27ddd0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x27ddd4: 0xf8400010  sqc2        $vf0, 0x10($v0)
    ctx->pc = 0x27ddd4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x27ddd8: 0xf8400030  sqc2        $vf0, 0x30($v0)
    ctx->pc = 0x27ddd8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x27dddc: 0xf8400040  sqc2        $vf0, 0x40($v0)
    ctx->pc = 0x27dddcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x27dde0: 0xf8400050  sqc2        $vf0, 0x50($v0)
    ctx->pc = 0x27dde0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x27dde4: 0xf8400080  sqc2        $vf0, 0x80($v0)
    ctx->pc = 0x27dde4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 128), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x27dde8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x27dde8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x27ddec: 0x1464fff8  bne         $v1, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x27DDECu;
    {
        const bool branch_taken_0x27ddec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x27DDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DDECu;
        // 0x27ddf0: 0x244200a0  addiu       $v0, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ddec) {
            ctx->pc = 0x27DDD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27ddd0;
        }
    }
    ctx->pc = 0x27DDF4u;
    // 0x27ddf4: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x27ddf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x27ddf8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x27ddf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ddfc: 0x246382b0  addiu       $v1, $v1, -0x7D50
    ctx->pc = 0x27ddfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935216));
    // 0x27de00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27de00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27de04: 0xae0304ac  sw          $v1, 0x4AC($s0)
    ctx->pc = 0x27de04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1196), GPR_U32(ctx, 3));
    // 0x27de08: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27de08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27de0c: 0x3e00008  jr          $ra
    ctx->pc = 0x27DE0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27DE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DE0Cu;
        // 0x27de10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27DE0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27DE14u;
    // 0x27de14: 0x0  nop
    ctx->pc = 0x27de14u;
    // NOP
    ctx->pc = 0x27de18u;
}
