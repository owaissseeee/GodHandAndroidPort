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

// Function: func_003AF310
// Address: 0x3af310 - 0x3af3d8
void func_003AF310_0x3af310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003AF310_0x3af310");
#endif

    ctx->pc = 0x3af310u;

    // 0x3af310: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x3af310u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x3af314: 0x3c027ff0  lui         $v0, 0x7FF0
    ctx->pc = 0x3af314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32752 << 16));
    // 0x3af318: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x3af318u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x3af31c: 0x3c03fcc0  lui         $v1, 0xFCC0
    ctx->pc = 0x3af31cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64704 << 16));
    // 0x3af320: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3af320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3af324: 0x1880000a  blez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x3AF324u;
    {
        const bool branch_taken_0x3af324 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x3AF328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF324u;
        // 0x3af328: 0x41023  negu        $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af324) {
            ctx->pc = 0x3AF350u;
            goto label_3af350;
        }
    }
    ctx->pc = 0x3AF32Cu;
    // 0x3af32c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3af32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3af330: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3af330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3af334: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x3af334u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3af338: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x3af338u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x3af33c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3af33cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3af340: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3af340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3af344: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x3af344u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x3af348: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x3AF348u;
    {
        const bool branch_taken_0x3af348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF348u;
        // 0x3af34c: 0xa32824  and         $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af348) {
            ctx->pc = 0x3AF3D0u;
            goto label_3af3d0;
        }
    }
    ctx->pc = 0x3AF350u;
label_3af350:
    // 0x3af350: 0x22503  sra         $a0, $v0, 20
    ctx->pc = 0x3af350u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 20));
    // 0x3af354: 0x28830014  slti        $v1, $a0, 0x14
    ctx->pc = 0x3af354u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x3af358: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x3AF358u;
    {
        const bool branch_taken_0x3af358 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF358u;
        // 0x3af35c: 0x3c020008  lui         $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af358) {
            ctx->pc = 0x3AF388u;
            goto label_3af388;
        }
    }
    ctx->pc = 0x3AF360u;
    // 0x3af360: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3af360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3af364: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3af364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3af368: 0x821007  srav        $v0, $v0, $a0
    ctx->pc = 0x3af368u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x3af36c: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x3af36cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x3af370: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3af370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3af374: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3af374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3af378: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3af378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3af37c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x3af37cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x3af380: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3AF380u;
    {
        const bool branch_taken_0x3af380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF380u;
        // 0x3af384: 0xa32824  and         $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af380) {
            ctx->pc = 0x3AF3D0u;
            goto label_3af3d0;
        }
    }
    ctx->pc = 0x3AF388u;
label_3af388:
    // 0x3af388: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3af388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3af38c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3af38cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3af390: 0x2484ffec  addiu       $a0, $a0, -0x14
    ctx->pc = 0x3af390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
    // 0x3af394: 0x2882001f  slti        $v0, $a0, 0x1F
    ctx->pc = 0x3af394u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x3af398: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3AF398u;
    {
        const bool branch_taken_0x3af398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF398u;
        // 0x3af39c: 0xa32824  and         $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af398) {
            ctx->pc = 0x3AF3B4u;
            goto label_3af3b4;
        }
    }
    ctx->pc = 0x3AF3A0u;
    // 0x3af3a0: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x3af3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x3af3a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3af3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3af3a8: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x3af3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3af3ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3AF3ACu;
    {
        const bool branch_taken_0x3af3ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF3ACu;
        // 0x3af3b0: 0x431004  sllv        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af3ac) {
            ctx->pc = 0x3AF3B8u;
            goto label_3af3b8;
        }
    }
    ctx->pc = 0x3AF3B4u;
label_3af3b4:
    // 0x3af3b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3af3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3af3b8:
    // 0x3af3b8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3af3b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3af3bc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3af3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3af3c0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3af3c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3af3c4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3af3c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3af3c8: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x3af3c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x3af3cc: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x3af3ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_3af3d0:
    // 0x3af3d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3AF3D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AF3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF3D0u;
        // 0x3af3d4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AF3D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AF3D8u;
}
