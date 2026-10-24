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

// Function: sceVu0CameraMatrix
// Address: 0x30a8c8 - 0x30a978
void sceVu0CameraMatrix_0x30a8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceVu0CameraMatrix_0x30a8c8");
#endif

    switch (ctx->pc) {
        case 0x30a8fcu: goto label_30a8fc;
        case 0x30a910u: goto label_30a910;
        case 0x30a91cu: goto label_30a91c;
        case 0x30a92cu: goto label_30a92c;
        case 0x30a93cu: goto label_30a93c;
        case 0x30a94cu: goto label_30a94c;
        case 0x30a958u: goto label_30a958;
        default: break;
    }

    ctx->pc = 0x30a8c8u;

    // 0x30a8c8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x30a8c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x30a8cc: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x30a8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x30a8d0: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x30a8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x30a8d4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x30a8d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a8d8: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x30a8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x30a8dc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x30a8dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a8e0: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x30a8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x30a8e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x30a8e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a8e8: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x30a8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x30a8ec: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x30a8ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a8f0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x30a8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x30a8f4: 0xc0c2968  jal         func_30A5A0
    ctx->pc = 0x30A8F4u;
    SET_GPR_U32(ctx, 31, 0x30A8FCu);
    ctx->pc = 0x30A8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A8F4u;
    // 0x30a8f8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A5A0u, 0x30A8F4u, 0x30A8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A8FCu;
label_30a8fc:
    // 0x30a8fc: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x30a8fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x30a900: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x30a900u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a904: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x30a904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a908: 0xc0c28ca  jal         func_30A328
    ctx->pc = 0x30A908u;
    SET_GPR_U32(ctx, 31, 0x30A910u);
    ctx->pc = 0x30A90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A908u;
    // 0x30a90c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A328u, 0x30A908u, 0x30A910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A910u;
label_30a910:
    // 0x30a910: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x30a910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a914: 0xc0c28dc  jal         func_30A370
    ctx->pc = 0x30A914u;
    SET_GPR_U32(ctx, 31, 0x30A91Cu);
    ctx->pc = 0x30A918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A914u;
    // 0x30a918: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A370u, 0x30A914u, 0x30A91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A91Cu;
label_30a91c:
    // 0x30a91c: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x30a91cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30a920: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x30a920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a924: 0xc0c28dc  jal         func_30A370
    ctx->pc = 0x30A924u;
    SET_GPR_U32(ctx, 31, 0x30A92Cu);
    ctx->pc = 0x30A928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A924u;
    // 0x30a928: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A370u, 0x30A924u, 0x30A92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A92Cu;
label_30a92c:
    // 0x30a92c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x30a92cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x30a930: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x30a930u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a934: 0xc0c28ca  jal         func_30A328
    ctx->pc = 0x30A934u;
    SET_GPR_U32(ctx, 31, 0x30A93Cu);
    ctx->pc = 0x30A938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A934u;
    // 0x30a938: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A328u, 0x30A934u, 0x30A93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A93Cu;
label_30a93c:
    // 0x30a93c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x30a93cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a940: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x30a940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a944: 0xc0c2942  jal         func_30A508
    ctx->pc = 0x30A944u;
    SET_GPR_U32(ctx, 31, 0x30A94Cu);
    ctx->pc = 0x30A948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A944u;
    // 0x30a948: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A508u, 0x30A944u, 0x30A94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A94Cu;
label_30a94c:
    // 0x30a94c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x30a94cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a950: 0xc0c28fe  jal         func_30A3F8
    ctx->pc = 0x30A950u;
    SET_GPR_U32(ctx, 31, 0x30A958u);
    ctx->pc = 0x30A954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A950u;
    // 0x30a954: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A3F8u, 0x30A950u, 0x30A958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A958u;
label_30a958:
    // 0x30a958: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x30a958u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x30a95c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x30a95cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x30a960: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x30a960u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x30a964: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x30a964u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x30a968: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x30a968u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30a96c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x30a96cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30a970: 0x3e00008  jr          $ra
    ctx->pc = 0x30A970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30A974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A970u;
        // 0x30a974: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30A970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30A978u;
}
