#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r701_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r701
{
// Function: func_0079A490
// Address: 0x79a490 - 0x79a510
void func_0079A490_0x79a490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A490_0x79a490");
#endif

    switch (ctx->pc) {
        case 0x79a4f4u: goto label_79a4f4;
        case 0x79a500u: goto label_79a500;
        default: break;
    }

    ctx->pc = 0x79a490u;

    // 0x79a490: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79a490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x79a494: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x79a494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x79a498: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x79a498u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x79a49c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79a49cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79a4a0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x79a4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x79a4a4: 0x24050704  addiu       $a1, $zero, 0x704
    ctx->pc = 0x79a4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1796));
    // 0x79a4a8: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x79a4a8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x79a4ac: 0x3c014188  lui         $at, 0x4188
    ctx->pc = 0x79a4acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16776 << 16));
    // 0x79a4b0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79a4b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79a4b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79a4b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79a4b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79a4b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79a4bc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x79a4bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a4c0: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x79a4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79a4c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a4c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a4c8: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x79a4c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x79a4cc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x79a4ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x79a4d0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79a4d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79a4d4: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x79a4d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a4d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79a4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x79a4dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79a4dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a4e0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x79a4e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x79a4e4: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x79a4e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x79a4e8: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x79a4e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x79a4ec: 0xc0b1152  jal         func_2C4548
    ctx->pc = 0x79A4ECu;
    SET_GPR_U32(ctx, 31, 0x79A4F4u);
    ctx->pc = 0x79A4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A4ECu;
    // 0x79a4f0: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4548u, 0x79A4ECu, 0x79A4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A4F4u;
label_79a4f4:
    // 0x79a4f4: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x79a4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79a4f8: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A4F8u;
    SET_GPR_U32(ctx, 31, 0x79A500u);
    ctx->pc = 0x79A4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A4F8u;
    // 0x79a4fc: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A4F8u, 0x79A500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A500u;
label_79a500:
    // 0x79a500: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x79a500u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79a504: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79a504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a508: 0x3e00008  jr          $ra
    ctx->pc = 0x79A508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A508u;
        // 0x79a50c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A510u;
}
} // namespace gh_r701
