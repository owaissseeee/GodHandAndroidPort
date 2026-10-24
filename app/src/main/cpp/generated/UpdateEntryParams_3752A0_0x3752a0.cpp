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

// Function: UpdateEntryParams_3752A0
// Address: 0x3752a0 - 0x375318
void UpdateEntryParams_3752A0_0x3752a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpdateEntryParams_3752A0_0x3752a0");
#endif

    switch (ctx->pc) {
        case 0x3752d8u: goto label_3752d8;
        default: break;
    }

    ctx->pc = 0x3752a0u;

    // 0x3752a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3752a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3752a4: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x3752a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x3752a8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3752a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3752ac: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3752acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3752b0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3752b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3752b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3752b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3752b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3752b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3752bc: 0x9602000e  lhu         $v0, 0xE($s0)
    ctx->pc = 0x3752bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x3752c0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3752c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3752c4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3752C4u;
    {
        const bool branch_taken_0x3752c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3752C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3752C4u;
        // 0x3752c8: 0x58c03  sra         $s1, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3752c4) {
            ctx->pc = 0x3752ECu;
            goto label_3752ec;
        }
    }
    ctx->pc = 0x3752CCu;
    // 0x3752cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3752ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3752d0: 0xc0de060  jal         func_378180
    ctx->pc = 0x3752D0u;
    SET_GPR_U32(ctx, 31, 0x3752D8u);
    ctx->pc = 0x3752D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3752D0u;
    // 0x3752d4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x378180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378180u, 0x3752D0u, 0x3752D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3752D8u;
label_3752d8:
    // 0x3752d8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3752d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3752dc: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3752DCu;
    {
        const bool branch_taken_0x3752dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3752dc) {
            ctx->pc = 0x3752E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3752DCu;
            // 0x3752e0: 0x9602000e  lhu         $v0, 0xE($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3752F0u;
            goto label_3752f0;
        }
    }
    ctx->pc = 0x3752E4u;
    // 0x3752e4: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x3752e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3752e8: 0xa6020014  sh          $v0, 0x14($s0)
    ctx->pc = 0x3752e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 2));
label_3752ec:
    // 0x3752ec: 0x9602000e  lhu         $v0, 0xE($s0)
    ctx->pc = 0x3752ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
label_3752f0:
    // 0x3752f0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3752f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x3752f4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3752F4u;
    {
        const bool branch_taken_0x3752f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3752f4) {
            ctx->pc = 0x3752F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3752F4u;
            // 0x3752f8: 0xa6110016  sh          $s1, 0x16($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3752FCu;
            goto label_3752fc;
        }
    }
    ctx->pc = 0x3752FCu;
label_3752fc:
    // 0x3752fc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3752fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x375300: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x375300u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375304: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x375304u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x375308: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x375308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37530c: 0x3e00008  jr          $ra
    ctx->pc = 0x37530Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37530Cu;
        // 0x375310: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37530Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375314u;
    // 0x375314: 0x0  nop
    ctx->pc = 0x375314u;
    // NOP
    ctx->pc = 0x375318u;
}
