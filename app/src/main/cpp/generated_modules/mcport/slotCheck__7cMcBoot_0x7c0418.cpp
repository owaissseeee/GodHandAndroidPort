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
// Function: slotCheck__7cMcBoot
// Address: 0x7c0418 - 0x7c0650
void slotCheck__7cMcBoot_0x7c0418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("slotCheck__7cMcBoot_0x7c0418");
#endif

    switch (ctx->pc) {
        case 0x7c047cu: goto label_7c047c;
        case 0x7c0498u: goto label_7c0498;
        case 0x7c04c8u: goto label_7c04c8;
        case 0x7c04d0u: goto label_7c04d0;
        case 0x7c04e0u: goto label_7c04e0;
        case 0x7c04f4u: goto label_7c04f4;
        case 0x7c051cu: goto label_7c051c;
        case 0x7c052cu: goto label_7c052c;
        case 0x7c0560u: goto label_7c0560;
        case 0x7c0578u: goto label_7c0578;
        case 0x7c05e4u: goto label_7c05e4;
        case 0x7c0620u: goto label_7c0620;
        default: break;
    }

    ctx->pc = 0x7c0418u;

    // 0x7c0418: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x7c0418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x7c041c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x7c041cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x7c0420: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x7c0420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x7c0424: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7c0424u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c0428: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x7c0428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x7c042c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x7c042cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c0430: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x7c0430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x7c0434: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x7c0434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x7c0438: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x7c0438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x7c043c: 0x8e3200f4  lw          $s2, 0xF4($s1)
    ctx->pc = 0x7c043cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x7c0440: 0x12540032  beq         $s2, $s4, . + 4 + (0x32 << 2)
    ctx->pc = 0x7C0440u;
    {
        const bool branch_taken_0x7c0440 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 20));
        ctx->pc = 0x7C0444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0440u;
        // 0x7c0444: 0x2a420002  slti        $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0440) {
            ctx->pc = 0x7C050Cu;
            goto label_7c050c;
        }
    }
    ctx->pc = 0x7C0448u;
    // 0x7c0448: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C0448u;
    {
        const bool branch_taken_0x7c0448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c0448) {
            ctx->pc = 0x7C044Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C0448u;
            // 0x7c044c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C0460u;
            goto label_7c0460;
        }
    }
    ctx->pc = 0x7C0450u;
    // 0x7c0450: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x7C0450u;
    {
        const bool branch_taken_0x7c0450 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C0454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0450u;
        // 0x7c0454: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0450) {
            ctx->pc = 0x7C0470u;
            goto label_7c0470;
        }
    }
    ctx->pc = 0x7C0458u;
    // 0x7c0458: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x7C0458u;
    {
        const bool branch_taken_0x7c0458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C045Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0458u;
        // 0x7c045c: 0x7bb10050  lq          $s1, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0458) {
            ctx->pc = 0x7C0634u;
            goto label_7c0634;
        }
    }
    ctx->pc = 0x7C0460u;
label_7c0460:
    // 0x7c0460: 0x1242003a  beq         $s2, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x7C0460u;
    {
        const bool branch_taken_0x7c0460 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C0464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0460u;
        // 0x7c0464: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0460) {
            ctx->pc = 0x7C054Cu;
            goto label_7c054c;
        }
    }
    ctx->pc = 0x7C0468u;
    // 0x7c0468: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x7C0468u;
    {
        const bool branch_taken_0x7c0468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C046Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0468u;
        // 0x7c046c: 0x7bb10050  lq          $s1, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0468) {
            ctx->pc = 0x7C0634u;
            goto label_7c0634;
        }
    }
    ctx->pc = 0x7C0470u;
label_7c0470:
    // 0x7c0470: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c0470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c0474: 0xc1f1eb8  jal         func_7C7AE0
    ctx->pc = 0x7C0474u;
    SET_GPR_U32(ctx, 31, 0x7C047Cu);
    ctx->pc = 0x7C0478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C0474u;
    // 0x7c0478: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C7AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C7AE0u, 0x7C0474u, 0x7C047Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C047Cu;
label_7c047c:
    // 0x7c047c: 0x3c120074  lui         $s2, 0x74
    ctx->pc = 0x7c047cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)116 << 16));
    // 0x7c0480: 0xae300078  sw          $s0, 0x78($s1)
    ctx->pc = 0x7c0480u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 16));
    // 0x7c0484: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x7c0484u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c0488: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x7c0488u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x7c048c: 0x26220088  addiu       $v0, $s1, 0x88
    ctx->pc = 0x7c048cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 136));
    // 0x7c0490: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x7c0490u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x7c0494: 0x0  nop
    ctx->pc = 0x7c0494u;
    // NOP
label_7c0498:
    // 0x7c0498: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x7c0498u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x7c049c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x7c049cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x7c04a0: 0x0  nop
    ctx->pc = 0x7c04a0u;
    // NOP
    // 0x7c04a4: 0x0  nop
    ctx->pc = 0x7c04a4u;
    // NOP
    // 0x7c04a8: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x7C04A8u;
    {
        const bool branch_taken_0x7c04a8 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x7C04ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C04A8u;
        // 0x7c04ac: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c04a8) {
            ctx->pc = 0x7C0498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c0498;
        }
    }
    ctx->pc = 0x7C04B0u;
    // 0x7c04b0: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x7c04b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x7c04b4: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x7C04B4u;
    {
        const bool branch_taken_0x7c04b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C04B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C04B4u;
        // 0x7c04b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c04b4) {
            ctx->pc = 0x7C04ECu;
            goto label_7c04ec;
        }
    }
    ctx->pc = 0x7C04BCu;
    // 0x7c04bc: 0x24065000  addiu       $a2, $zero, 0x5000
    ctx->pc = 0x7c04bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20480));
    // 0x7c04c0: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x7C04C0u;
    SET_GPR_U32(ctx, 31, 0x7C04C8u);
    ctx->pc = 0x7C04C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C04C0u;
    // 0x7c04c4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x7C04C0u, 0x7C04C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C04C8u;
label_7c04c8:
    // 0x7c04c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7c04c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c04cc: 0x0  nop
    ctx->pc = 0x7c04ccu;
    // NOP
label_7c04d0:
    // 0x7c04d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c04d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c04d4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x7c04d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c04d8: 0xc1f23de  jal         func_7C8F78
    ctx->pc = 0x7C04D8u;
    SET_GPR_U32(ctx, 31, 0x7C04E0u);
    ctx->pc = 0x7C04DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C04D8u;
    // 0x7c04dc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8F78u, 0x7C04D8u, 0x7C04E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C04E0u;
label_7c04e0:
    // 0x7c04e0: 0x2a020014  slti        $v0, $s0, 0x14
    ctx->pc = 0x7c04e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x7c04e4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x7C04E4u;
    {
        const bool branch_taken_0x7c04e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C04E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C04E4u;
        // 0x7c04e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c04e4) {
            ctx->pc = 0x7C04D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c04d0;
        }
    }
    ctx->pc = 0x7C04ECu;
label_7c04ec:
    // 0x7c04ec: 0xc1f2336  jal         func_7C8CD8
    ctx->pc = 0x7C04ECu;
    SET_GPR_U32(ctx, 31, 0x7C04F4u);
    ctx->pc = 0x7C04F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C04ECu;
    // 0x7c04f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8CD8u, 0x7C04ECu, 0x7C04F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C04F4u;
label_7c04f4:
    // 0x7c04f4: 0x8e427a24  lw          $v0, 0x7A24($s2)
    ctx->pc = 0x7c04f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 31268)));
    // 0x7c04f8: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x7c04f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x7c04fc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x7c04fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x7c0500: 0xae427a24  sw          $v0, 0x7A24($s2)
    ctx->pc = 0x7c0500u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 31268), GPR_U32(ctx, 2));
    // 0x7c0504: 0xa22000f8  sb          $zero, 0xF8($s1)
    ctx->pc = 0x7c0504u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 248), (uint8_t)GPR_U32(ctx, 0));
    // 0x7c0508: 0xae200084  sw          $zero, 0x84($s1)
    ctx->pc = 0x7c0508u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 0));
label_7c050c:
    // 0x7c050c: 0x3c04007d  lui         $a0, 0x7D
    ctx->pc = 0x7c050cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)125 << 16));
    // 0x7c0510: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7c0510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c0514: 0xc1f0e1c  jal         func_7C3870
    ctx->pc = 0x7C0514u;
    SET_GPR_U32(ctx, 31, 0x7C051Cu);
    ctx->pc = 0x7C0518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C0514u;
    // 0x7c0518: 0x24841740  addiu       $a0, $a0, 0x1740 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3870u, 0x7C0514u, 0x7C051Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C051Cu;
label_7c051c:
    // 0x7c051c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7c051cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c0520: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x7c0520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x7c0524: 0xc1f03a0  jal         func_7C0E80
    ctx->pc = 0x7C0524u;
    SET_GPR_U32(ctx, 31, 0x7C052Cu);
    ctx->pc = 0x7C0528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C0524u;
    // 0x7c0528: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C0E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C0E80u, 0x7C0524u, 0x7C052Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C052Cu;
label_7c052c:
    // 0x7c052c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C052Cu;
    {
        const bool branch_taken_0x7c052c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C0530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C052Cu;
        // 0x7c0530: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c052c) {
            ctx->pc = 0x7C0544u;
            goto label_7c0544;
        }
    }
    ctx->pc = 0x7C0534u;
    // 0x7c0534: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x7c0534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x7c0538: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x7c0538u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
    // 0x7c053c: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x7C053Cu;
    {
        const bool branch_taken_0x7c053c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C0540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C053Cu;
        // 0x7c0540: 0xae2200f0  sw          $v0, 0xF0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c053c) {
            ctx->pc = 0x7C0628u;
            goto label_7c0628;
        }
    }
    ctx->pc = 0x7C0544u;
label_7c0544:
    // 0x7c0544: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x7C0544u;
    {
        const bool branch_taken_0x7c0544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C0548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0544u;
        // 0x7c0548: 0xae2200f4  sw          $v0, 0xF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0544) {
            ctx->pc = 0x7C062Cu;
            goto label_7c062c;
        }
    }
    ctx->pc = 0x7C054Cu;
label_7c054c:
    // 0x7c054c: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7c054cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7c0550: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x7c0550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c0554: 0x24531740  addiu       $s3, $v0, 0x1740
    ctx->pc = 0x7c0554u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 5952));
    // 0x7c0558: 0xc1f0c92  jal         func_7C3248
    ctx->pc = 0x7C0558u;
    SET_GPR_U32(ctx, 31, 0x7C0560u);
    ctx->pc = 0x7C055Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C0558u;
    // 0x7c055c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3248u, 0x7C0558u, 0x7C0560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C0560u;
label_7c0560:
    // 0x7c0560: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7c0560u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c0564: 0x56140032  bnel        $s0, $s4, . + 4 + (0x32 << 2)
    ctx->pc = 0x7C0564u;
    {
        const bool branch_taken_0x7c0564 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 20));
        if (branch_taken_0x7c0564) {
            ctx->pc = 0x7C0568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C0564u;
            // 0x7c0568: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C0630u;
            goto label_7c0630;
        }
    }
    ctx->pc = 0x7C056Cu;
    // 0x7c056c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x7c056cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c0570: 0xc1f03b2  jal         func_7C0EC8
    ctx->pc = 0x7C0570u;
    SET_GPR_U32(ctx, 31, 0x7C0578u);
    ctx->pc = 0x7C0574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C0570u;
    // 0x7c0574: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C0EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C0EC8u, 0x7C0570u, 0x7C0578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C0578u;
label_7c0578:
    // 0x7c0578: 0x50500005  beql        $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C0578u;
    {
        const bool branch_taken_0x7c0578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x7c0578) {
            ctx->pc = 0x7C057Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C0578u;
            // 0x7c057c: 0x8e62002c  lw          $v0, 0x2C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C0590u;
            goto label_7c0590;
        }
    }
    ctx->pc = 0x7C0580u;
    // 0x7c0580: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x7c0580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x7c0584: 0x54430027  bnel        $v0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x7C0584u;
    {
        const bool branch_taken_0x7c0584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x7c0584) {
            ctx->pc = 0x7C0588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C0584u;
            // 0x7c0588: 0xae2300f0  sw          $v1, 0xF0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C0624u;
            goto label_7c0624;
        }
    }
    ctx->pc = 0x7C058Cu;
    // 0x7c058c: 0x8e62002c  lw          $v0, 0x2C($s3)
    ctx->pc = 0x7c058cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_7c0590:
    // 0x7c0590: 0x10520004  beq         $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x7C0590u;
    {
        const bool branch_taken_0x7c0590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x7C0594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0590u;
        // 0x7c0594: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0590) {
            ctx->pc = 0x7C05A4u;
            goto label_7c05a4;
        }
    }
    ctx->pc = 0x7C0598u;
    // 0x7c0598: 0xae30007c  sw          $s0, 0x7C($s1)
    ctx->pc = 0x7c0598u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 16));
    // 0x7c059c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x7C059Cu;
    {
        const bool branch_taken_0x7c059c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C05A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C059Cu;
        // 0x7c05a0: 0xae2200f0  sw          $v0, 0xF0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c059c) {
            ctx->pc = 0x7C0624u;
            goto label_7c0624;
        }
    }
    ctx->pc = 0x7C05A4u;
label_7c05a4:
    // 0x7c05a4: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x7c05a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x7c05a8: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x7C05A8u;
    {
        const bool branch_taken_0x7c05a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7c05a8) {
            ctx->pc = 0x7C05ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C05A8u;
            // 0x7c05ac: 0x8e620030  lw          $v0, 0x30($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C05F4u;
            goto label_7c05f4;
        }
    }
    ctx->pc = 0x7C05B0u;
    // 0x7c05b0: 0x8e220084  lw          $v0, 0x84($s1)
    ctx->pc = 0x7c05b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x7c05b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x7c05b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x7c05b8: 0x28430003  slti        $v1, $v0, 0x3
    ctx->pc = 0x7c05b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x7c05bc: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x7C05BCu;
    {
        const bool branch_taken_0x7c05bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C05C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C05BCu;
        // 0x7c05c0: 0xae220084  sw          $v0, 0x84($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c05bc) {
            ctx->pc = 0x7C05ECu;
            goto label_7c05ec;
        }
    }
    ctx->pc = 0x7C05C4u;
    // 0x7c05c4: 0x8e2300e8  lw          $v1, 0xE8($s1)
    ctx->pc = 0x7c05c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
    // 0x7c05c8: 0x2862001e  slti        $v0, $v1, 0x1E
    ctx->pc = 0x7c05c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x7c05cc: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x7C05CCu;
    {
        const bool branch_taken_0x7c05cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C05D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C05CCu;
        // 0x7c05d0: 0xa2300000  sb          $s0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c05cc) {
            ctx->pc = 0x7C062Cu;
            goto label_7c062c;
        }
    }
    ctx->pc = 0x7C05D4u;
    // 0x7c05d4: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x7c05d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x7c05d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c05d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c05dc: 0xc1f22ca  jal         func_7C8B28
    ctx->pc = 0x7C05DCu;
    SET_GPR_U32(ctx, 31, 0x7C05E4u);
    ctx->pc = 0x7C05E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C05DCu;
    // 0x7c05e0: 0xa32823  subu        $a1, $a1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8B28u, 0x7C05DCu, 0x7C05E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C05E4u;
label_7c05e4:
    // 0x7c05e4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x7C05E4u;
    {
        const bool branch_taken_0x7c05e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C05E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C05E4u;
        // 0x7c05e8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c05e4) {
            ctx->pc = 0x7C0630u;
            goto label_7c0630;
        }
    }
    ctx->pc = 0x7C05ECu;
label_7c05ec:
    // 0x7c05ec: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x7C05ECu;
    {
        const bool branch_taken_0x7c05ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C05F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C05ECu;
        // 0x7c05f0: 0xae3000f4  sw          $s0, 0xF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c05ec) {
            ctx->pc = 0x7C062Cu;
            goto label_7c062c;
        }
    }
    ctx->pc = 0x7C05F4u;
label_7c05f4:
    // 0x7c05f4: 0x28420096  slti        $v0, $v0, 0x96
    ctx->pc = 0x7c05f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)150) ? 1 : 0);
    // 0x7c05f8: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x7C05F8u;
    {
        const bool branch_taken_0x7c05f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7c05f8) {
            ctx->pc = 0x7C05FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C05F8u;
            // 0x7c05fc: 0xae3000f0  sw          $s0, 0xF0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C0624u;
            goto label_7c0624;
        }
    }
    ctx->pc = 0x7C0600u;
    // 0x7c0600: 0x8e2300e8  lw          $v1, 0xE8($s1)
    ctx->pc = 0x7c0600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
    // 0x7c0604: 0x2862001e  slti        $v0, $v1, 0x1E
    ctx->pc = 0x7c0604u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x7c0608: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C0608u;
    {
        const bool branch_taken_0x7c0608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C060Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0608u;
        // 0x7c060c: 0xa23000f8  sb          $s0, 0xF8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 248), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0608) {
            ctx->pc = 0x7C0620u;
            goto label_7c0620;
        }
    }
    ctx->pc = 0x7C0610u;
    // 0x7c0610: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x7c0610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x7c0614: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c0614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c0618: 0xc1f22ca  jal         func_7C8B28
    ctx->pc = 0x7C0618u;
    SET_GPR_U32(ctx, 31, 0x7C0620u);
    ctx->pc = 0x7C061Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C0618u;
    // 0x7c061c: 0xa32823  subu        $a1, $a1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8B28u, 0x7C0618u, 0x7C0620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C0620u;
label_7c0620:
    // 0x7c0620: 0xae3000f0  sw          $s0, 0xF0($s1)
    ctx->pc = 0x7c0620u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 16));
label_7c0624:
    // 0x7c0624: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x7c0624u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
label_7c0628:
    // 0x7c0628: 0xae2000f4  sw          $zero, 0xF4($s1)
    ctx->pc = 0x7c0628u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 0));
label_7c062c:
    // 0x7c062c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x7c062cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_7c0630:
    // 0x7c0630: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x7c0630u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_7c0634:
    // 0x7c0634: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x7c0634u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7c0638: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x7c0638u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7c063c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x7c063cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7c0640: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7c0640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c0644: 0x3e00008  jr          $ra
    ctx->pc = 0x7C0644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C0648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0644u;
        // 0x7c0648: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C0644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C064Cu;
    // 0x7c064c: 0x0  nop
    ctx->pc = 0x7c064cu;
    // NOP
    ctx->pc = 0x7c0650u;
}
} // namespace gh_mcport
