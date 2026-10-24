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

// Function: func_003932B8
// Address: 0x3932b8 - 0x393368
void func_003932B8_0x3932b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003932B8_0x3932b8");
#endif

    switch (ctx->pc) {
        case 0x3932f0u: goto label_3932f0;
        case 0x393318u: goto label_393318;
        default: break;
    }

    ctx->pc = 0x3932b8u;

    // 0x3932b8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3932b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3932bc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x3932bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x3932c0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x3932c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x3932c4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3932c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3932c8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3932c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3932cc: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x3932ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3932d0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3932d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3932d4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3932d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3932d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3932d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3932dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3932dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3932e0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3932e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3932e4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3932E4u;
    {
        const bool branch_taken_0x3932e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3932E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3932E4u;
        // 0x3932e8: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3932e4) {
            ctx->pc = 0x3932FCu;
            goto label_3932fc;
        }
    }
    ctx->pc = 0x3932ECu;
    // 0x3932ec: 0x0  nop
    ctx->pc = 0x3932ecu;
    // NOP
label_3932f0:
    // 0x3932f0: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x3932f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3932f4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3932f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3932f8: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x3932f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_3932fc:
    // 0x3932fc: 0x5a00000d  blezl       $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x3932FCu;
    {
        const bool branch_taken_0x3932fc = (GPR_S64(ctx, 16) <= 0);
        if (branch_taken_0x3932fc) {
            ctx->pc = 0x393300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3932FCu;
            // 0x393300: 0xde220040  ld          $v0, 0x40($s1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x393334u;
            goto label_393334;
        }
    }
    ctx->pc = 0x393304u;
    // 0x393304: 0x8e240038  lw          $a0, 0x38($s1)
    ctx->pc = 0x393304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x393308: 0x10303c  dsll32      $a2, $s0, 0
    ctx->pc = 0x393308u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) << (32 + 0));
    // 0x39330c: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x39330cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x393310: 0xc0ec09a  jal         func_3B0268
    ctx->pc = 0x393310u;
    SET_GPR_U32(ctx, 31, 0x393318u);
    ctx->pc = 0x393314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393310u;
    // 0x393314: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0268u, 0x393310u, 0x393318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393318u;
label_393318:
    // 0x393318: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x393318u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39331c: 0x5474fff4  bnel        $v1, $s4, . + 4 + (-0xC << 2)
    ctx->pc = 0x39331Cu;
    {
        const bool branch_taken_0x39331c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        if (branch_taken_0x39331c) {
            ctx->pc = 0x393320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39331Cu;
            // 0x393320: 0x203802f  dsubu       $s0, $s0, $v1 (Delay Slot)
            SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) - GPR_U64(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3932F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3932f0;
        }
    }
    ctx->pc = 0x393324u;
    // 0x393324: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x393324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x393328: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x393328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x39332c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x39332cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x393330: 0xde220040  ld          $v0, 0x40($s1)
    ctx->pc = 0x393330u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 64)));
label_393334:
    // 0x393334: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x393334u;
    {
        const bool branch_taken_0x393334 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x393338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393334u;
        // 0x393338: 0x270982f  dsubu       $s3, $s3, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) - GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393334) {
            ctx->pc = 0x393344u;
            goto label_393344;
        }
    }
    ctx->pc = 0x39333Cu;
    // 0x39333c: 0x53102d  daddu       $v0, $v0, $s3
    ctx->pc = 0x39333cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 19));
    // 0x393340: 0xfe220040  sd          $v0, 0x40($s1)
    ctx->pc = 0x393340u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 64), GPR_U64(ctx, 2));
label_393344:
    // 0x393344: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x393344u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393348: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x393348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x39334c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x39334cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x393350: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x393350u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x393354: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x393354u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x393358: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x393358u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39335c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39335cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x393360: 0x3e00008  jr          $ra
    ctx->pc = 0x393360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x393364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393360u;
        // 0x393364: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x393360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x393368u;
}
