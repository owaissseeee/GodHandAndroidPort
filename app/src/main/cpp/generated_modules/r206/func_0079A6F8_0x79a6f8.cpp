#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r206_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r206
{
// Function: func_0079A6F8
// Address: 0x79a6f8 - 0x79a780
void func_0079A6F8_0x79a6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A6F8_0x79a6f8");
#endif

    switch (ctx->pc) {
        case 0x79a73cu: goto label_79a73c;
        case 0x79a74cu: goto label_79a74c;
        case 0x79a760u: goto label_79a760;
        case 0x79a76cu: goto label_79a76c;
        default: break;
    }

    ctx->pc = 0x79a6f8u;

    // 0x79a6f8: 0x3c060074  lui         $a2, 0x74
    ctx->pc = 0x79a6f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)116 << 16));
    // 0x79a6fc: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x79a6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x79a700: 0x8cc37a8c  lw          $v1, 0x7A8C($a2)
    ctx->pc = 0x79a700u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A8Cu));
    // 0x79a704: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x79a704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x79a708: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79a708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x79a70c: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x79a70cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x79a710: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x79a710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x79a714: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x79a714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x79a718: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a71c: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x79a71cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x79a720: 0xacc37a8c  sw          $v1, 0x7A8C($a2)
    ctx->pc = 0x79a720u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 31372), GPR_U32(ctx, 3));
    // 0x79a724: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x79a724u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x79a728: 0x8c858658  lw          $a1, -0x79A8($a0)
    ctx->pc = 0x79a728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294936152)));
    // 0x79a72c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x79a72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x79a730: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x79a730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x79a734: 0xc1e6924  jal         func_79A490
    ctx->pc = 0x79A734u;
    SET_GPR_U32(ctx, 31, 0x79A73Cu);
    ctx->pc = 0x79A738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A734u;
    // 0x79a738: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A490u, 0x79A734u, 0x79A73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A73Cu;
label_79a73c:
    // 0x79a73c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79a73cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79a740: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x79a740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x79a744: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x79A744u;
    SET_GPR_U32(ctx, 31, 0x79A74Cu);
    ctx->pc = 0x79A748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A744u;
    // 0x79a748: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x79A744u, 0x79A74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A74Cu;
label_79a74c:
    // 0x79a74c: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x79a74cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79a750: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79a750u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79a754: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x79a754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a758: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x79A758u;
    SET_GPR_U32(ctx, 31, 0x79A760u);
    ctx->pc = 0x79A75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A758u;
    // 0x79a75c: 0x24a598d0  addiu       $a1, $a1, -0x6730 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x79A758u, 0x79A760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A760u;
label_79a760:
    // 0x79a760: 0x8e032f84  lw          $v1, 0x2F84($s0)
    ctx->pc = 0x79a760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79a764: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A764u;
    SET_GPR_U32(ctx, 31, 0x79A76Cu);
    ctx->pc = 0x79A768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A764u;
    // 0x79a768: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A764u, 0x79A76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A76Cu;
label_79a76c:
    // 0x79a76c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x79a76cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a770: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a774: 0x3e00008  jr          $ra
    ctx->pc = 0x79A774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A774u;
        // 0x79a778: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A77Cu;
    // 0x79a77c: 0x0  nop
    ctx->pc = 0x79a77cu;
    // NOP
    ctx->pc = 0x79a780u;
}
} // namespace gh_r206
