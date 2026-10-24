#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r021_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r021
{
// Function: R021Fin__Fv
// Address: 0x799398 - 0x799468
void R021Fin__Fv_0x799398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R021Fin__Fv_0x799398");
#endif

    switch (ctx->pc) {
        case 0x799444u: goto label_799444;
        case 0x799450u: goto label_799450;
        case 0x79945cu: goto label_79945c;
        default: break;
    }

    ctx->pc = 0x799398u;

    // 0x799398: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x799398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x79939c: 0x3c080074  lui         $t0, 0x74
    ctx->pc = 0x79939cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)116 << 16));
    // 0x7993a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7993a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7993a4: 0x25097a78  addiu       $t1, $t0, 0x7A78
    ctx->pc = 0x7993a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 31352));
    // 0x7993a8: 0x3c06fbff  lui         $a2, 0xFBFF
    ctx->pc = 0x7993a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64511 << 16));
    // 0x7993ac: 0x3c04fdff  lui         $a0, 0xFDFF
    ctx->pc = 0x7993acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65023 << 16));
    // 0x7993b0: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x7993b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A80u));
    // 0x7993b4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x7993b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x7993b8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x7993b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x7993bc: 0x8d057a78  lw          $a1, 0x7A78($t0)
    ctx->pc = 0x7993bcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x747A78u));
    // 0x7993c0: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x7993c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x7993c4: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x7993c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x7993c8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x7993c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x7993cc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x7993ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x7993d0: 0x3c047fff  lui         $a0, 0x7FFF
    ctx->pc = 0x7993d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32767 << 16));
    // 0x7993d4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x7993d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x7993d8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x7993d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x7993dc: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x7993dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x7993e0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x7993e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x7993e4: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x7993e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x7993e8: 0x3c07dfff  lui         $a3, 0xDFFF
    ctx->pc = 0x7993e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)57343 << 16));
    // 0x7993ec: 0x3c03ffdf  lui         $v1, 0xFFDF
    ctx->pc = 0x7993ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65503 << 16));
    // 0x7993f0: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x7993f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x7993f4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x7993f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x7993f8: 0x3c04efff  lui         $a0, 0xEFFF
    ctx->pc = 0x7993f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61439 << 16));
    // 0x7993fc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x7993fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x799400: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x799400u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x799404: 0xa72824  and         $a1, $a1, $a3
    ctx->pc = 0x799404u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x799408: 0x3c06f7ff  lui         $a2, 0xF7FF
    ctx->pc = 0x799408u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63487 << 16));
    // 0x79940c: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x79940cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x799410: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x799410u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x799414: 0x3c03fffb  lui         $v1, 0xFFFB
    ctx->pc = 0x799414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65531 << 16));
    // 0x799418: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x799418u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x79941c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x79941cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x799420: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x799420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x799424: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x799424u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x799428: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x799428u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
    // 0x79942c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x79942cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x799430: 0x8ce4c2cc  lw          $a0, -0x3D34($a3)
    ctx->pc = 0x799430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294951628)));
    // 0x799434: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x799434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x799438: 0xad057a78  sw          $a1, 0x7A78($t0)
    ctx->pc = 0x799438u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 31352), GPR_U32(ctx, 5));
    // 0x79943c: 0xc1e6648  jal         func_799920
    ctx->pc = 0x79943Cu;
    SET_GPR_U32(ctx, 31, 0x799444u);
    ctx->pc = 0x799440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79943Cu;
    // 0x799440: 0xad220008  sw          $v0, 0x8($t1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799920u, 0x79943Cu, 0x799444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799444u;
label_799444:
    // 0x799444: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x799444u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x799448: 0xc07e6c4  jal         func_1F9B10
    ctx->pc = 0x799448u;
    SET_GPR_U32(ctx, 31, 0x799450u);
    ctx->pc = 0x79944Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799448u;
    // 0x79944c: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9B10u, 0x799448u, 0x799450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799450u;
label_799450:
    // 0x799450: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x799450u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x799454: 0xc0afae0  jal         func_2BEB80
    ctx->pc = 0x799454u;
    SET_GPR_U32(ctx, 31, 0x79945Cu);
    ctx->pc = 0x799458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799454u;
    // 0x799458: 0x24848658  addiu       $a0, $a0, -0x79A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BEB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BEB80u, 0x799454u, 0x79945Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79945Cu;
label_79945c:
    // 0x79945c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79945cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799460: 0x3e00008  jr          $ra
    ctx->pc = 0x799460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799460u;
        // 0x799464: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799468u;
}
} // namespace gh_r021
