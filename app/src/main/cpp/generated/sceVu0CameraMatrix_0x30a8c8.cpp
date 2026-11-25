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

    if (__builtin_expect(ctx->pc != 0x30a8c8u, 0)) {
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
    }


    // 0x30a8c8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x30a8cc: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x30a8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x30a8d0: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x30a8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x30a8d4: 0x80a02d  daddu       $s4, $a0, $zero
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a8d8: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x30a8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x30a8dc: 0xe0882d  daddu       $s1, $a3, $zero
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a8e0: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x30a8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x30a8e4: 0x3a0202d  daddu       $a0, $sp, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a8e8: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x30a8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x30a8ec: 0xa0982d  daddu       $s3, $a1, $zero
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a8f0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x30a8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x30a8f4: 0xc0c2968  jal         func_30A5A0
    SET_GPR_U32(ctx, 31, 0x30A8FCu);
    ctx->pc = 0x30A8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A8F4u;
    // 0x30a8f8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &sceVu0UnitMatrix_0x30a5a0, 0x30a5a0u, 0x30a8fcu)) {
        return;
    }
    ctx->pc = 0x30A8FCu;
label_30a8fc:
    // 0x30a8fc: 0x27b00040  addiu       $s0, $sp, 0x40
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x30a900: 0x240302d  daddu       $a2, $s2, $zero
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a904: 0x220282d  daddu       $a1, $s1, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a908: 0xc0c28ca  jal         func_30A328
    SET_GPR_U32(ctx, 31, 0x30A910u);
    ctx->pc = 0x30A90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A908u;
    // 0x30a90c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &sceVu0OuterProduct_0x30a328, 0x30a328u, 0x30a910u)) {
        return;
    }
    ctx->pc = 0x30A910u;
label_30a910:
    // 0x30a910: 0x3a0202d  daddu       $a0, $sp, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a914: 0xc0c28dc  jal         func_30A370
    SET_GPR_U32(ctx, 31, 0x30A91Cu);
    ctx->pc = 0x30A918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A914u;
    // 0x30a918: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &sceVu0Normalize_0x30a370, 0x30a370u, 0x30a91cu)) {
        return;
    }
    ctx->pc = 0x30A91Cu;
label_30a91c:
    // 0x30a91c: 0x27b00020  addiu       $s0, $sp, 0x20
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30a920: 0x240282d  daddu       $a1, $s2, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a924: 0xc0c28dc  jal         func_30A370
    SET_GPR_U32(ctx, 31, 0x30A92Cu);
    ctx->pc = 0x30A928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A924u;
    // 0x30a928: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &sceVu0Normalize_0x30a370, 0x30a370u, 0x30a92cu)) {
        return;
    }
    ctx->pc = 0x30A92Cu;
label_30a92c:
    // 0x30a92c: 0x27a40010  addiu       $a0, $sp, 0x10
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x30a930: 0x3a0302d  daddu       $a2, $sp, $zero
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a934: 0xc0c28ca  jal         func_30A328
    SET_GPR_U32(ctx, 31, 0x30A93Cu);
    ctx->pc = 0x30A938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A934u;
    // 0x30a938: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &sceVu0OuterProduct_0x30a328, 0x30a328u, 0x30a93cu)) {
        return;
    }
    ctx->pc = 0x30A93Cu;
label_30a93c:
    // 0x30a93c: 0x260302d  daddu       $a2, $s3, $zero
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a940: 0x3a0202d  daddu       $a0, $sp, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a944: 0xc0c2942  jal         func_30A508
    SET_GPR_U32(ctx, 31, 0x30A94Cu);
    ctx->pc = 0x30A948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A944u;
    // 0x30a948: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &sceVu0TransMatrix_0x30a508, 0x30a508u, 0x30a94cu)) {
        return;
    }
    ctx->pc = 0x30A94Cu;
label_30a94c:
    // 0x30a94c: 0x280202d  daddu       $a0, $s4, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a950: 0xc0c28fe  jal         func_30A3F8
    SET_GPR_U32(ctx, 31, 0x30A958u);
    ctx->pc = 0x30A954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A950u;
    // 0x30a954: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &sceVu0InversMatrix_0x30a3f8, 0x30a3f8u, 0x30a958u)) {
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