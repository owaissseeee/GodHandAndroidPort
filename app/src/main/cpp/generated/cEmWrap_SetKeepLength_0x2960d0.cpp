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

// Function: cEmWrap_SetKeepLength
// Address: 0x2960d0 - 0x296130
void cEmWrap_SetKeepLength_0x2960d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmWrap_SetKeepLength_0x2960d0");
#endif

    switch (ctx->pc) {
        case 0x2960ecu: goto label_2960ec;
        case 0x296104u: goto label_296104;
        case 0x296118u: goto label_296118;
        default: break;
    }

    ctx->pc = 0x2960d0u;

    // 0x2960d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2960d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2960d4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2960d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2960d8: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x2960d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2960dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2960dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2960e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2960e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2960e4: 0xc0a565e  jal         func_295978
    ctx->pc = 0x2960E4u;
    SET_GPR_U32(ctx, 31, 0x2960ECu);
    ctx->pc = 0x2960E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2960E4u;
    // 0x2960e8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x295978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295978u, 0x2960E4u, 0x2960ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2960ECu;
label_2960ec:
    // 0x2960ec: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2960ECu;
    {
        const bool branch_taken_0x2960ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2960F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2960ECu;
        // 0x2960f0: 0x3c040045  lui         $a0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2960ec) {
            ctx->pc = 0x296118u;
            goto label_296118;
        }
    }
    ctx->pc = 0x2960F4u;
    // 0x2960f4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2960f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2960f8: 0x2484a870  addiu       $a0, $a0, -0x5790
    ctx->pc = 0x2960f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944880));
    // 0x2960fc: 0xc0e959e  jal         func_3A5678
    ctx->pc = 0x2960FCu;
    SET_GPR_U32(ctx, 31, 0x296104u);
    ctx->pc = 0x296100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2960FCu;
    // 0x296100: 0x8c4504ac  lw          $a1, 0x4AC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5678u, 0x2960FCu, 0x296104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296104u;
label_296104:
    // 0x296104: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x296104u;
    {
        const bool branch_taken_0x296104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x296104) {
            ctx->pc = 0x296108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x296104u;
            // 0x296108: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29611Cu;
            goto label_29611c;
        }
    }
    ctx->pc = 0x29610Cu;
    // 0x29610c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x29610cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x296110: 0xc09b9e8  jal         func_26E7A0
    ctx->pc = 0x296110u;
    SET_GPR_U32(ctx, 31, 0x296118u);
    ctx->pc = 0x296114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296110u;
    // 0x296114: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26E7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E7A0u, 0x296110u, 0x296118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296118u;
label_296118:
    // 0x296118: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x296118u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29611c:
    // 0x29611c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29611cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296120: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x296120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x296124: 0x3e00008  jr          $ra
    ctx->pc = 0x296124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296124u;
        // 0x296128: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29612Cu;
    // 0x29612c: 0x0  nop
    ctx->pc = 0x29612cu;
    // NOP
    ctx->pc = 0x296130u;
}
