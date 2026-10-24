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

// Function: cSndMemHeap_OpenSub
// Address: 0x2cd6d0 - 0x2cd740
void cSndMemHeap_OpenSub_0x2cd6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSndMemHeap_OpenSub_0x2cd6d0");
#endif

    switch (ctx->pc) {
        case 0x2cd700u: goto label_2cd700;
        case 0x2cd70cu: goto label_2cd70c;
        case 0x2cd71cu: goto label_2cd71c;
        default: break;
    }

    ctx->pc = 0x2cd6d0u;

    // 0x2cd6d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2cd6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2cd6d4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2cd6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2cd6d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cd6d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd6dc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2cd6dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2cd6e0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2cd6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2cd6e4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2cd6e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd6e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cd6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cd6ec: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2cd6ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd6f0: 0xae100380  sw          $s0, 0x380($s0)
    ctx->pc = 0x2cd6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 896), GPR_U32(ctx, 16));
    // 0x2cd6f4: 0x24060380  addiu       $a2, $zero, 0x380
    ctx->pc = 0x2cd6f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 896));
    // 0x2cd6f8: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2CD6F8u;
    SET_GPR_U32(ctx, 31, 0x2CD700u);
    ctx->pc = 0x2CD6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD6F8u;
    // 0x2cd6fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2CD6F8u, 0x2CD700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD700u;
label_2cd700:
    // 0x2cd700: 0xae120384  sw          $s2, 0x384($s0)
    ctx->pc = 0x2cd700u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 900), GPR_U32(ctx, 18));
    // 0x2cd704: 0xc0b35d0  jal         func_2CD740
    ctx->pc = 0x2CD704u;
    SET_GPR_U32(ctx, 31, 0x2CD70Cu);
    ctx->pc = 0x2CD708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD704u;
    // 0x2cd708: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD740u, 0x2CD704u, 0x2CD70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD70Cu;
label_2cd70c:
    // 0x2cd70c: 0xae11038c  sw          $s1, 0x38C($s0)
    ctx->pc = 0x2cd70cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 908), GPR_U32(ctx, 17));
    // 0x2cd710: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cd710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd714: 0xc0b35f2  jal         func_2CD7C8
    ctx->pc = 0x2CD714u;
    SET_GPR_U32(ctx, 31, 0x2CD71Cu);
    ctx->pc = 0x2CD718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD714u;
    // 0x2cd718: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD7C8u, 0x2CD714u, 0x2CD71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD71Cu;
label_2cd71c:
    // 0x2cd71c: 0x8e030380  lw          $v1, 0x380($s0)
    ctx->pc = 0x2cd71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 896)));
    // 0x2cd720: 0xae020388  sw          $v0, 0x388($s0)
    ctx->pc = 0x2cd720u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 904), GPR_U32(ctx, 2));
    // 0x2cd724: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2cd724u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cd728: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2cd728u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cd72c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2cd72cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cd730: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cd730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cd734: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x2cd734u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x2cd738: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD738u;
        // 0x2cd73c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CD740u;
}
