#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include "r022_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r022
{
// Function: R022Fin__Fv
// Address: 0x799370 - 0x799440
void R022Fin__Fv_0x799370(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R022Fin__Fv_0x799370");
#endif

    if (__builtin_expect(ctx->pc != 0x799370u, 0)) {
        switch (ctx->pc) {
            case 0x79941cu: goto label_79941c;
            case 0x799428u: goto label_799428;
            case 0x799434u: goto label_799434;
            default: break;
        }
    }



    // 0x799370: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x799374: 0x3c080074  lui         $t0, 0x74
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)116 << 16));
    // 0x799378: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79937c: 0x25097a78  addiu       $t1, $t0, 0x7A78
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 31352));
    // 0x799380: 0x3c06fbff  lui         $a2, 0xFBFF
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64511 << 16));
    // 0x799384: 0x3c04fdff  lui         $a0, 0xFDFF
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65023 << 16));
    // 0x799388: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x799388u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A80u));
    // 0x79938c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x799390: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x799394: 0x8d057a78  lw          $a1, 0x7A78($t0)
    ctx->pc = 0x799394u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x747A78u));
    // 0x799398: 0x461024  and         $v0, $v0, $a2
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x79939c: 0x3c03bfff  lui         $v1, 0xBFFF
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x7993a0: 0x441024  and         $v0, $v0, $a0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x7993a4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x7993a8: 0x3c047fff  lui         $a0, 0x7FFF
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32767 << 16));
    // 0x7993ac: 0x431024  and         $v0, $v0, $v1
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x7993b0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x7993b4: 0xa32824  and         $a1, $a1, $v1
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x7993b8: 0x441024  and         $v0, $v0, $a0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x7993bc: 0xa42824  and         $a1, $a1, $a0
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x7993c0: 0x3c07dfff  lui         $a3, 0xDFFF
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)57343 << 16));
    // 0x7993c4: 0x3c03ffdf  lui         $v1, 0xFFDF
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65503 << 16));
    // 0x7993c8: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x7993cc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x7993d0: 0x3c04efff  lui         $a0, 0xEFFF
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61439 << 16));
    // 0x7993d4: 0x431024  and         $v0, $v0, $v1
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x7993d8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x7993dc: 0xa72824  and         $a1, $a1, $a3
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x7993e0: 0x3c06f7ff  lui         $a2, 0xF7FF
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63487 << 16));
    // 0x7993e4: 0xa42824  and         $a1, $a1, $a0
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x7993e8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x7993ec: 0x3c03fffb  lui         $v1, 0xFFFB
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65531 << 16));
    // 0x7993f0: 0xa62824  and         $a1, $a1, $a2
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x7993f4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x7993f8: 0x471024  and         $v0, $v0, $a3
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x7993fc: 0xa32824  and         $a1, $a1, $v1
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x799400: 0x3c07007a  lui         $a3, 0x7A
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
    // 0x799404: 0x441024  and         $v0, $v0, $a0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x799408: 0x8ce4cd8c  lw          $a0, -0x3274($a3)
    ctx->pc = 0x799408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294954380)));
    // 0x79940c: 0x461024  and         $v0, $v0, $a2
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x799410: 0xad057a78  sw          $a1, 0x7A78($t0)
    ctx->pc = 0x799410u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 31352), GPR_U32(ctx, 5));
    // 0x799414: 0xc1e6660  jal         func_799980
    SET_GPR_U32(ctx, 31, 0x79941Cu);
    ctx->pc = 0x799418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799414u;
    // 0x799418: 0xad220008  sw          $v0, 0x8($t1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799980u, 0x799414u, 0x79941Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_79941c:
    // 0x79941c: 0x3c040057  lui         $a0, 0x57
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x799420: 0xc07e6c4  jal         func_1F9B10
    SET_GPR_U32(ctx, 31, 0x799428u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799420u;
    // 0x799424: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9B10u;
    if (!runtime->callDirectStatic(rdram, ctx, &cCoreSave_stageInit_0x1f9b10, 0x1F9B10u, 0x799428u)) {
        return;
    }
label_799428:
    // 0x799428: 0x3c04005f  lui         $a0, 0x5F
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x79942c: 0xc0afae0  jal         func_2BEB80
    SET_GPR_U32(ctx, 31, 0x799434u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79942Cu;
    // 0x799430: 0x24848658  addiu       $a0, $a0, -0x79A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BEB80u;
    if (!runtime->callDirectStatic(rdram, ctx, &cRoomSave_systemInit_0x2beb80, 0x2BEB80u, 0x799434u)) {
        return;
    }
label_799434:
    // 0x799434: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799438: 0x3e00008  jr          $ra
    ctx->pc = 0x799438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799438u;
        // 0x79943c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799440u;
}
} // namespace gh_r022
