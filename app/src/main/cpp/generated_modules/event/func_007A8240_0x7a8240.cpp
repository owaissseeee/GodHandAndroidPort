#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: func_007A8240
// Address: 0x7a8240 - 0x7a8300
void func_007A8240_0x7a8240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007A8240_0x7a8240");
#endif

    switch (ctx->pc) {
        case 0x7a8274u: goto label_7a8274;
        case 0x7a828cu: goto label_7a828c;
        case 0x7a82a4u: goto label_7a82a4;
        case 0x7a82d8u: goto label_7a82d8;
        default: break;
    }

    ctx->pc = 0x7a8240u;

    // 0x7a8240: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x7a8240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x7a8244: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x7a8244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x7a8248: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x7a8248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x7a824c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x7a824cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7a8250: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x7a8250u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7a8254: 0x12200024  beqz        $s1, . + 4 + (0x24 << 2)
    ctx->pc = 0x7A8254u;
    {
        const bool branch_taken_0x7a8254 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A8258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8254u;
        // 0x7a8258: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8254) {
            ctx->pc = 0x7A82E8u;
            goto label_7a82e8;
        }
    }
    ctx->pc = 0x7A825Cu;
    // 0x7a825c: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
    ctx->pc = 0x7A825Cu;
    {
        const bool branch_taken_0x7a825c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A8260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A825Cu;
        // 0x7a8260: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a825c) {
            ctx->pc = 0x7A82E8u;
            goto label_7a82e8;
        }
    }
    ctx->pc = 0x7A8264u;
    // 0x7a8264: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x7a8264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7a8268: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x7a8268u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7a826c: 0xc1ea060  jal         func_7A8180
    ctx->pc = 0x7A826Cu;
    SET_GPR_U32(ctx, 31, 0x7A8274u);
    ctx->pc = 0x7A8270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7A826Cu;
    // 0x7a8270: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7A8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7A8180u, 0x7A826Cu, 0x7A8274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A8274u;
label_7a8274:
    // 0x7a8274: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x7A8274u;
    {
        const bool branch_taken_0x7a8274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A8278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8274u;
        // 0x7a8278: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8274) {
            ctx->pc = 0x7A82E8u;
            goto label_7a82e8;
        }
    }
    ctx->pc = 0x7A827Cu;
    // 0x7a827c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x7a827cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x7a8280: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x7a8280u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7a8284: 0xc1ea060  jal         func_7A8180
    ctx->pc = 0x7A8284u;
    SET_GPR_U32(ctx, 31, 0x7A828Cu);
    ctx->pc = 0x7A8288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7A8284u;
    // 0x7a8288: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7A8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7A8180u, 0x7A8284u, 0x7A828Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A828Cu;
label_7a828c:
    // 0x7a828c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x7A828Cu;
    {
        const bool branch_taken_0x7a828c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A8290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A828Cu;
        // 0x7a8290: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a828c) {
            ctx->pc = 0x7A82E8u;
            goto label_7a82e8;
        }
    }
    ctx->pc = 0x7A8294u;
    // 0x7a8294: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x7a8294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x7a8298: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x7a8298u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7a829c: 0xc1ea060  jal         func_7A8180
    ctx->pc = 0x7A829Cu;
    SET_GPR_U32(ctx, 31, 0x7A82A4u);
    ctx->pc = 0x7A82A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7A829Cu;
    // 0x7a82a0: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7A8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7A8180u, 0x7A829Cu, 0x7A82A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A82A4u;
label_7a82a4:
    // 0x7a82a4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x7A82A4u;
    {
        const bool branch_taken_0x7a82a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A82A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A82A4u;
        // 0x7a82a8: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a82a4) {
            ctx->pc = 0x7A82E8u;
            goto label_7a82e8;
        }
    }
    ctx->pc = 0x7A82ACu;
    // 0x7a82ac: 0x24427b00  addiu       $v0, $v0, 0x7B00
    ctx->pc = 0x7a82acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31488));
    // 0x7a82b0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x7a82b0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x7a82b4: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x7a82b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x7a82b8: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x7a82b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x7a82bc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x7a82bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x7a82c0: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x7a82c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x7a82c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7a82c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7a82c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7a82c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7a82cc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x7a82ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7a82d0: 0xc0ae162  jal         func_2B8588
    ctx->pc = 0x7A82D0u;
    SET_GPR_U32(ctx, 31, 0x7A82D8u);
    ctx->pc = 0x7A82D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7A82D0u;
    // 0x7a82d4: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8588u, 0x7A82D0u, 0x7A82D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A82D8u;
label_7a82d8:
    // 0x7a82d8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x7a82d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7a82dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7a82dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7a82e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x7A82E0u;
    {
        const bool branch_taken_0x7a82e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A82E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A82E0u;
        // 0x7a82e4: 0xae2330a4  sw          $v1, 0x30A4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12452), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a82e0) {
            ctx->pc = 0x7A82ECu;
            goto label_7a82ec;
        }
    }
    ctx->pc = 0x7A82E8u;
label_7a82e8:
    // 0x7a82e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x7a82e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7a82ec:
    // 0x7a82ec: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x7a82ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7a82f0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x7a82f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7a82f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x7a82f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7a82f8: 0x3e00008  jr          $ra
    ctx->pc = 0x7A82F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7A82FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A82F8u;
        // 0x7a82fc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7A82F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7A8300u;
}
} // namespace gh_event
