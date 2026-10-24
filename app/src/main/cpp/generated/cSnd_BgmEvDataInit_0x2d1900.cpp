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

// Function: cSnd_BgmEvDataInit
// Address: 0x2d1900 - 0x2d1958
void cSnd_BgmEvDataInit_0x2d1900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_BgmEvDataInit_0x2d1900");
#endif

    switch (ctx->pc) {
        case 0x2d1920u: goto label_2d1920;
        case 0x2d1928u: goto label_2d1928;
        case 0x2d1934u: goto label_2d1934;
        case 0x2d1944u: goto label_2d1944;
        default: break;
    }

    ctx->pc = 0x2d1900u;

    // 0x2d1900: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d1900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d1904: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2d1904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2d1908: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d1908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d190c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d190cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1910: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2d1910u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1914: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d1914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d1918: 0xc0b4b66  jal         func_2D2D98
    ctx->pc = 0x2D1918u;
    SET_GPR_U32(ctx, 31, 0x2D1920u);
    ctx->pc = 0x2D191Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1918u;
    // 0x2d191c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2D98u, 0x2D1918u, 0x2D1920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1920u;
label_2d1920:
    // 0x2d1920: 0xc0b3fe4  jal         func_2CFF90
    ctx->pc = 0x2D1920u;
    SET_GPR_U32(ctx, 31, 0x2D1928u);
    ctx->pc = 0x2D1924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1920u;
    // 0x2d1924: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFF90u, 0x2D1920u, 0x2D1928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1928u;
label_2d1928:
    // 0x2d1928: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d1928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d192c: 0xc0b4b66  jal         func_2D2D98
    ctx->pc = 0x2D192Cu;
    SET_GPR_U32(ctx, 31, 0x2D1934u);
    ctx->pc = 0x2D1930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D192Cu;
    // 0x2d1930: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2D98u, 0x2D192Cu, 0x2D1934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1934u;
label_2d1934:
    // 0x2d1934: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2d1934u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1938: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d1938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d193c: 0xc0b404a  jal         func_2D0128
    ctx->pc = 0x2D193Cu;
    SET_GPR_U32(ctx, 31, 0x2D1944u);
    ctx->pc = 0x2D1940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D193Cu;
    // 0x2d1940: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0128u, 0x2D193Cu, 0x2D1944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1944u;
label_2d1944:
    // 0x2d1944: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2d1944u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d1948: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d1948u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d194c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d194cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d1950: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1950u;
        // 0x2d1954: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1958u;
}
