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

// Function: Em_construct278068
// Address: 0x278068 - 0x2780c0
void Em_construct278068_0x278068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em_construct278068_0x278068");
#endif

    switch (ctx->pc) {
        case 0x27807cu: goto label_27807c;
        default: break;
    }

    ctx->pc = 0x278068u;

    // 0x278068: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x278068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27806c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27806cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x278070: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x278070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x278074: 0xc0a3ac0  jal         func_28EB00
    ctx->pc = 0x278074u;
    SET_GPR_U32(ctx, 31, 0x27807Cu);
    ctx->pc = 0x278078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278074u;
    // 0x278078: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EB00u, 0x278074u, 0x27807Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27807Cu;
label_27807c:
    // 0x27807c: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x27807cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
    // 0x278080: 0x24637d48  addiu       $v1, $v1, 0x7D48
    ctx->pc = 0x278080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32072));
    // 0x278084: 0xae030214  sw          $v1, 0x214($s0)
    ctx->pc = 0x278084u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 3));
    // 0x278088: 0xfa001530  sqc2        $vf0, 0x1530($s0)
    ctx->pc = 0x278088u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 5424), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x27808c: 0xfa001540  sqc2        $vf0, 0x1540($s0)
    ctx->pc = 0x27808cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 5440), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x278090: 0xfa001550  sqc2        $vf0, 0x1550($s0)
    ctx->pc = 0x278090u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 5456), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x278094: 0xfa001590  sqc2        $vf0, 0x1590($s0)
    ctx->pc = 0x278094u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 5520), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x278098: 0xfa0015a0  sqc2        $vf0, 0x15A0($s0)
    ctx->pc = 0x278098u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 5536), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x27809c: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x27809cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
    // 0x2780a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2780a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2780a4: 0x24637cb0  addiu       $v1, $v1, 0x7CB0
    ctx->pc = 0x2780a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31920));
    // 0x2780a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2780a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2780ac: 0xae0304ac  sw          $v1, 0x4AC($s0)
    ctx->pc = 0x2780acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1196), GPR_U32(ctx, 3));
    // 0x2780b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2780b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2780b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2780B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2780B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2780B4u;
        // 0x2780b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2780B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2780BCu;
    // 0x2780bc: 0x0  nop
    ctx->pc = 0x2780bcu;
    // NOP
    ctx->pc = 0x2780c0u;
}
