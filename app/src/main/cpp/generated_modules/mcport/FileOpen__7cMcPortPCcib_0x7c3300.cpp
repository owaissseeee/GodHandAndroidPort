#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: FileOpen__7cMcPortPCcib
// Address: 0x7c3300 - 0x7c3380
void FileOpen__7cMcPortPCcib_0x7c3300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FileOpen__7cMcPortPCcib_0x7c3300");
#endif

    switch (ctx->pc) {
        case 0x7c3338u: goto label_7c3338;
        case 0x7c334cu: goto label_7c334c;
        case 0x7c3364u: goto label_7c3364;
        default: break;
    }

    ctx->pc = 0x7c3300u;

    // 0x7c3300: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x7c3300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x7c3304: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7c3304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7c3308: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x7c3308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x7c330c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x7c330cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x7c3310: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x7c3310u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c3314: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x7c3314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x7c3318: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x7c3318u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c331c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x7c331cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c3320: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x7c3320u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c3324: 0x24450b58  addiu       $a1, $v0, 0xB58
    ctx->pc = 0x7c3324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2904));
    // 0x7c3328: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x7c3328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c332c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x7c332cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x7c3330: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x7C3330u;
    SET_GPR_U32(ctx, 31, 0x7C3338u);
    ctx->pc = 0x7C3334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C3330u;
    // 0x7c3334: 0x26460014  addiu       $a2, $s2, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x7C3330u, 0x7C3338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C3338u;
label_7c3338:
    // 0x7c3338: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x7c3338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x7c333c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x7c333cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c3340: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x7c3340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x7c3344: 0xc1f35ee  jal         func_7CD7B8
    ctx->pc = 0x7C3344u;
    SET_GPR_U32(ctx, 31, 0x7C334Cu);
    ctx->pc = 0x7C3348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C3344u;
    // 0x7c3348: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CD7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CD7B8u, 0x7C3344u, 0x7C334Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C334Cu;
label_7c334c:
    // 0x7c334c: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x7C334Cu;
    {
        const bool branch_taken_0x7c334c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C3350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C334Cu;
        // 0x7c3350: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c334c) {
            ctx->pc = 0x7C3368u;
            goto label_7c3368;
        }
    }
    ctx->pc = 0x7C3354u;
    // 0x7c3354: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C3354u;
    {
        const bool branch_taken_0x7c3354 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x7C3358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C3354u;
        // 0x7c3358: 0x7bb10060  lq          $s1, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c3354) {
            ctx->pc = 0x7C336Cu;
            goto label_7c336c;
        }
    }
    ctx->pc = 0x7C335Cu;
    // 0x7c335c: 0xc1f0e60  jal         func_7C3980
    ctx->pc = 0x7C335Cu;
    SET_GPR_U32(ctx, 31, 0x7C3364u);
    ctx->pc = 0x7C3360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C335Cu;
    // 0x7c3360: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3980u, 0x7C335Cu, 0x7C3364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C3364u;
label_7c3364:
    // 0x7c3364: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x7c3364u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_7c3368:
    // 0x7c3368: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x7c3368u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_7c336c:
    // 0x7c336c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x7c336cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7c3370: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x7c3370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7c3374: 0x3e00008  jr          $ra
    ctx->pc = 0x7C3374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C3378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C3374u;
        // 0x7c3378: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C3374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C337Cu;
    // 0x7c337c: 0x0  nop
    ctx->pc = 0x7c337cu;
    // NOP
    ctx->pc = 0x7c3380u;
}
} // namespace gh_mcport
