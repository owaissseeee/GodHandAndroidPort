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

// Function: func_0034E4B0
// Address: 0x34e4b0 - 0x34e790
void func_0034E4B0_0x34e4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034E4B0_0x34e4b0");
#endif

    switch (ctx->pc) {
        case 0x34e50cu: goto label_34e50c;
        case 0x34e528u: goto label_34e528;
        case 0x34e538u: goto label_34e538;
        case 0x34e548u: goto label_34e548;
        case 0x34e558u: goto label_34e558;
        case 0x34e564u: goto label_34e564;
        case 0x34e57cu: goto label_34e57c;
        case 0x34e598u: goto label_34e598;
        case 0x34e5b0u: goto label_34e5b0;
        case 0x34e5c4u: goto label_34e5c4;
        case 0x34e5ecu: goto label_34e5ec;
        case 0x34e604u: goto label_34e604;
        case 0x34e614u: goto label_34e614;
        case 0x34e630u: goto label_34e630;
        case 0x34e65cu: goto label_34e65c;
        case 0x34e6e4u: goto label_34e6e4;
        case 0x34e730u: goto label_34e730;
        default: break;
    }

    ctx->pc = 0x34e4b0u;

    // 0x34e4b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x34e4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x34e4b4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x34e4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x34e4b8: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x34e4b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e4bc: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x34e4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x34e4c0: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x34e4c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e4c4: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x34e4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x34e4c8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x34e4c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e4cc: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x34e4ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x34e4d0: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x34e4d0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e4d4: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x34e4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x34e4d8: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x34e4d8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e4dc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x34e4dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x34e4e0: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x34e4e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e4e4: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x34e4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x34e4e8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x34e4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x34e4ec: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x34e4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x34e4f0: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x34e4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x34e4f4: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x34e4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x34e4f8: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x34e4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x34e4fc: 0x8e341f7c  lw          $s4, 0x1F7C($s1)
    ctx->pc = 0x34e4fcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8060)));
    // 0x34e500: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x34e500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x34e504: 0xc0d3d30  jal         func_34F4C0
    ctx->pc = 0x34E504u;
    SET_GPR_U32(ctx, 31, 0x34E50Cu);
    ctx->pc = 0x34E508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E504u;
    // 0x34e508: 0x8e930000  lw          $s3, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34F4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34F4C0u, 0x34E504u, 0x34E50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E50Cu;
label_34e50c:
    // 0x34e50c: 0x50400095  beql        $v0, $zero, . + 4 + (0x95 << 2)
    ctx->pc = 0x34E50Cu;
    {
        const bool branch_taken_0x34e50c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e50c) {
            ctx->pc = 0x34E510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34E50Cu;
            // 0x34e510: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34E764u;
            goto label_34e764;
        }
    }
    ctx->pc = 0x34E514u;
    // 0x34e514: 0x2ac20004  slti        $v0, $s6, 0x4
    ctx->pc = 0x34e514u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x34e518: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x34E518u;
    {
        const bool branch_taken_0x34e518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34e518) {
            ctx->pc = 0x34E51Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34E518u;
            // 0x34e51c: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34E52Cu;
            goto label_34e52c;
        }
    }
    ctx->pc = 0x34E520u;
    // 0x34e520: 0xc0da28a  jal         func_368A28
    ctx->pc = 0x34E520u;
    SET_GPR_U32(ctx, 31, 0x34E528u);
    ctx->pc = 0x34E524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E520u;
    // 0x34e524: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x368A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368A28u, 0x34E520u, 0x34E528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E528u;
label_34e528:
    // 0x34e528: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x34e528u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34e52c:
    // 0x34e52c: 0x24050057  addiu       $a1, $zero, 0x57
    ctx->pc = 0x34e52cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x34e530: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x34E530u;
    SET_GPR_U32(ctx, 31, 0x34E538u);
    ctx->pc = 0x34E534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E530u;
    // 0x34e534: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x34E530u, 0x34E538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E538u;
label_34e538:
    // 0x34e538: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34e538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e53c: 0x24050058  addiu       $a1, $zero, 0x58
    ctx->pc = 0x34e53cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x34e540: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x34E540u;
    SET_GPR_U32(ctx, 31, 0x34E548u);
    ctx->pc = 0x34E544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E540u;
    // 0x34e544: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x34E540u, 0x34E548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E548u;
label_34e548:
    // 0x34e548: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x34e548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e54c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x34e54cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e550: 0xc0d9b5e  jal         func_366D78
    ctx->pc = 0x34E550u;
    SET_GPR_U32(ctx, 31, 0x34E558u);
    ctx->pc = 0x34E554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E550u;
    // 0x34e554: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366D78u, 0x34E550u, 0x34E558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E558u;
label_34e558:
    // 0x34e558: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34e558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e55c: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x34E55Cu;
    SET_GPR_U32(ctx, 31, 0x34E564u);
    ctx->pc = 0x34E560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E55Cu;
    // 0x34e560: 0x2405005b  addiu       $a1, $zero, 0x5B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x34E55Cu, 0x34E564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E564u;
label_34e564:
    // 0x34e564: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x34E564u;
    {
        const bool branch_taken_0x34e564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E564u;
        // 0x34e568: 0x3c050035  lui         $a1, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e564) {
            ctx->pc = 0x34E588u;
            goto label_34e588;
        }
    }
    ctx->pc = 0x34E56Cu;
    // 0x34e56c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x34e56cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e570: 0x24a5e790  addiu       $a1, $a1, -0x1870
    ctx->pc = 0x34e570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961040));
    // 0x34e574: 0xc0d9b72  jal         func_366DC8
    ctx->pc = 0x34E574u;
    SET_GPR_U32(ctx, 31, 0x34E57Cu);
    ctx->pc = 0x34E578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E574u;
    // 0x34e578: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366DC8u, 0x34E574u, 0x34E57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E57Cu;
label_34e57c:
    // 0x34e57c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x34E57Cu;
    {
        const bool branch_taken_0x34e57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E57Cu;
        // 0x34e580: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e57c) {
            ctx->pc = 0x34E59Cu;
            goto label_34e59c;
        }
    }
    ctx->pc = 0x34E584u;
    // 0x34e584: 0x0  nop
    ctx->pc = 0x34e584u;
    // NOP
label_34e588:
    // 0x34e588: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x34e588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e58c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34e58cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e590: 0xc0d9b72  jal         func_366DC8
    ctx->pc = 0x34E590u;
    SET_GPR_U32(ctx, 31, 0x34E598u);
    ctx->pc = 0x34E594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E590u;
    // 0x34e594: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366DC8u, 0x34E590u, 0x34E598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E598u;
label_34e598:
    // 0x34e598: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x34e598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_34e59c:
    // 0x34e59c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x34e59cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e5a0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x34e5a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e5a4: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x34e5a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e5a8: 0xc0d9b86  jal         func_366E18
    ctx->pc = 0x34E5A8u;
    SET_GPR_U32(ctx, 31, 0x34E5B0u);
    ctx->pc = 0x34E5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E5A8u;
    // 0x34e5ac: 0x27a80004  addiu       $t0, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366E18u, 0x34E5A8u, 0x34E5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E5B0u;
label_34e5b0:
    // 0x34e5b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34E5B0u;
    {
        const bool branch_taken_0x34e5b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E5B0u;
        // 0x34e5b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e5b0) {
            ctx->pc = 0x34E5C8u;
            goto label_34e5c8;
        }
    }
    ctx->pc = 0x34E5B8u;
    // 0x34e5b8: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x34e5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x34e5bc: 0xc0d375c  jal         func_34DD70
    ctx->pc = 0x34E5BCu;
    SET_GPR_U32(ctx, 31, 0x34E5C4u);
    ctx->pc = 0x34E5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E5BCu;
    // 0x34e5c0: 0x34a50d03  ori         $a1, $a1, 0xD03 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3331);
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x34E5BCu, 0x34E5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E5C4u;
label_34e5c4:
    // 0x34e5c4: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x34e5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_34e5c8:
    // 0x34e5c8: 0x8fb00004  lw          $s0, 0x4($sp)
    ctx->pc = 0x34e5c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x34e5cc: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x34e5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x34e5d0: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x34e5d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x34e5d4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x34E5D4u;
    {
        const bool branch_taken_0x34e5d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E5D4u;
        // 0x34e5d8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e5d4) {
            ctx->pc = 0x34E5F0u;
            goto label_34e5f0;
        }
    }
    ctx->pc = 0x34E5DCu;
    // 0x34e5dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34e5dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e5e0: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x34e5e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e5e4: 0xc0d3f0a  jal         func_34FC28
    ctx->pc = 0x34E5E4u;
    SET_GPR_U32(ctx, 31, 0x34E5ECu);
    ctx->pc = 0x34E5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E5E4u;
    // 0x34e5e8: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34FC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34FC28u, 0x34E5E4u, 0x34E5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E5ECu;
label_34e5ec:
    // 0x34e5ec: 0x8fb00004  lw          $s0, 0x4($sp)
    ctx->pc = 0x34e5ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_34e5f0:
    // 0x34e5f0: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x34e5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x34e5f4: 0x16020012  bne         $s0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x34E5F4u;
    {
        const bool branch_taken_0x34e5f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x34e5f4) {
            ctx->pc = 0x34E640u;
            goto label_34e640;
        }
    }
    ctx->pc = 0x34E5FCu;
    // 0x34e5fc: 0xc0d3352  jal         func_34CD48
    ctx->pc = 0x34E5FCu;
    SET_GPR_U32(ctx, 31, 0x34E604u);
    ctx->pc = 0x34E600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E5FCu;
    // 0x34e600: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34CD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CD48u, 0x34E5FCu, 0x34E604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E604u;
label_34e604:
    // 0x34e604: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x34E604u;
    {
        const bool branch_taken_0x34e604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e604) {
            ctx->pc = 0x34E608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34E604u;
            // 0x34e608: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34E620u;
            goto label_34e620;
        }
    }
    ctx->pc = 0x34E60Cu;
    // 0x34e60c: 0xc0d3d2a  jal         func_34F4A8
    ctx->pc = 0x34E60Cu;
    SET_GPR_U32(ctx, 31, 0x34E614u);
    ctx->pc = 0x34E610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E60Cu;
    // 0x34e610: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34F4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34F4A8u, 0x34E60Cu, 0x34E614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E614u;
label_34e614:
    // 0x34e614: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x34e614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x34e618: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x34E618u;
    {
        const bool branch_taken_0x34e618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E618u;
        // 0x34e61c: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e618) {
            ctx->pc = 0x34E758u;
            goto label_34e758;
        }
    }
    ctx->pc = 0x34E620u;
label_34e620:
    // 0x34e620: 0x14500007  bne         $v0, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x34E620u;
    {
        const bool branch_taken_0x34e620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x34e620) {
            ctx->pc = 0x34E640u;
            goto label_34e640;
        }
    }
    ctx->pc = 0x34E628u;
    // 0x34e628: 0xc0d335a  jal         func_34CD68
    ctx->pc = 0x34E628u;
    SET_GPR_U32(ctx, 31, 0x34E630u);
    ctx->pc = 0x34E62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E628u;
    // 0x34e62c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34CD68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CD68u, 0x34E628u, 0x34E630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E630u;
label_34e630:
    // 0x34e630: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34E630u;
    {
        const bool branch_taken_0x34e630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E630u;
        // 0x34e634: 0x24020800  addiu       $v0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e630) {
            ctx->pc = 0x34E640u;
            goto label_34e640;
        }
    }
    ctx->pc = 0x34E638u;
    // 0x34e638: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x34E638u;
    {
        const bool branch_taken_0x34e638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E638u;
        // 0x34e63c: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e638) {
            ctx->pc = 0x34E758u;
            goto label_34e758;
        }
    }
    ctx->pc = 0x34E640u;
label_34e640:
    // 0x34e640: 0x17c00021  bnez        $fp, . + 4 + (0x21 << 2)
    ctx->pc = 0x34E640u;
    {
        const bool branch_taken_0x34e640 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x34E644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E640u;
        // 0x34e644: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e640) {
            ctx->pc = 0x34E6C8u;
            goto label_34e6c8;
        }
    }
    ctx->pc = 0x34E648u;
    // 0x34e648: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x34e648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e64c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x34e64cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e650: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34e650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e654: 0xc0d3a02  jal         func_34E808
    ctx->pc = 0x34E654u;
    SET_GPR_U32(ctx, 31, 0x34E65Cu);
    ctx->pc = 0x34E658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E654u;
    // 0x34e658: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E808u, 0x34E654u, 0x34E65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E65Cu;
label_34e65c:
    // 0x34e65c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x34e65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x34e660: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x34e660u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x34e664: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x34e664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x34e668: 0x18a0003d  blez        $a1, . + 4 + (0x3D << 2)
    ctx->pc = 0x34E668u;
    {
        const bool branch_taken_0x34e668 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x34E66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E668u;
        // 0x34e66c: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e668) {
            ctx->pc = 0x34E760u;
            goto label_34e760;
        }
    }
    ctx->pc = 0x34E670u;
    // 0x34e670: 0x8e830158  lw          $v1, 0x158($s4)
    ctx->pc = 0x34e670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 344)));
    // 0x34e674: 0x460003b  bltz        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x34E674u;
    {
        const bool branch_taken_0x34e674 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x34E678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E674u;
        // 0x34e678: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e674) {
            ctx->pc = 0x34E764u;
            goto label_34e764;
        }
    }
    ctx->pc = 0x34E67Cu;
    // 0x34e67c: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x34e67cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x34e680: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x34e680u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x34e684: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34E684u;
    {
        const bool branch_taken_0x34e684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34E688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E684u;
        // 0x34e688: 0x653021  addu        $a2, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e684) {
            ctx->pc = 0x34E698u;
            goto label_34e698;
        }
    }
    ctx->pc = 0x34E68Cu;
    // 0x34e68c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x34E68Cu;
    {
        const bool branch_taken_0x34e68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E68Cu;
        // 0x34e690: 0x651021  addu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e68c) {
            ctx->pc = 0x34E758u;
            goto label_34e758;
        }
    }
    ctx->pc = 0x34E694u;
    // 0x34e694: 0x0  nop
    ctx->pc = 0x34e694u;
    // NOP
label_34e698:
    // 0x34e698: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x34e698u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x34e69c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x34E69Cu;
    {
        const bool branch_taken_0x34e69c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e69c) {
            ctx->pc = 0x34E6A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34E69Cu;
            // 0x34e6a0: 0xae860158  sw          $a2, 0x158($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 344), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34E6C0u;
            goto label_34e6c0;
        }
    }
    ctx->pc = 0x34E6A4u;
    // 0x34e6a4: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x34e6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x34e6a8: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x34e6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x34e6ac: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x34e6acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x34e6b0: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x34e6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x34e6b4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x34E6B4u;
    {
        const bool branch_taken_0x34e6b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E6B4u;
        // 0x34e6b8: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e6b4) {
            ctx->pc = 0x34E758u;
            goto label_34e758;
        }
    }
    ctx->pc = 0x34E6BCu;
    // 0x34e6bc: 0x0  nop
    ctx->pc = 0x34e6bcu;
    // NOP
label_34e6c0:
    // 0x34e6c0: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x34E6C0u;
    {
        const bool branch_taken_0x34e6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E6C0u;
        // 0x34e6c4: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e6c0) {
            ctx->pc = 0x34E75Cu;
            goto label_34e75c;
        }
    }
    ctx->pc = 0x34E6C8u;
label_34e6c8:
    // 0x34e6c8: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x34e6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x34e6cc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x34e6ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x34e6d0: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x34E6D0u;
    {
        const bool branch_taken_0x34e6d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34e6d0) {
            ctx->pc = 0x34E6D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34E6D0u;
            // 0x34e6d4: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34E718u;
            goto label_34e718;
        }
    }
    ctx->pc = 0x34E6D8u;
    // 0x34e6d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34e6d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e6dc: 0xc0d3d96  jal         func_34F658
    ctx->pc = 0x34E6DCu;
    SET_GPR_U32(ctx, 31, 0x34E6E4u);
    ctx->pc = 0x34E6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E6DCu;
    // 0x34e6e0: 0x27a50008  addiu       $a1, $sp, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34F658u, 0x34E6DCu, 0x34E6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E6E4u;
label_34e6e4:
    // 0x34e6e4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x34e6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34e6e8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x34E6E8u;
    {
        const bool branch_taken_0x34e6e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34E6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E6E8u;
        // 0x34e6ec: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e6e8) {
            ctx->pc = 0x34E760u;
            goto label_34e760;
        }
    }
    ctx->pc = 0x34E6F0u;
    // 0x34e6f0: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x34e6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x34e6f4: 0x56102a  slt         $v0, $v0, $s6
    ctx->pc = 0x34e6f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x34e6f8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x34E6F8u;
    {
        const bool branch_taken_0x34e6f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E6F8u;
        // 0x34e6fc: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e6f8) {
            ctx->pc = 0x34E760u;
            goto label_34e760;
        }
    }
    ctx->pc = 0x34E700u;
    // 0x34e700: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x34e700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34e704: 0x58400001  blezl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x34E704u;
    {
        const bool branch_taken_0x34e704 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x34e704) {
            ctx->pc = 0x34E708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34E704u;
            // 0x34e708: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34E70Cu;
            goto label_34e70c;
        }
    }
    ctx->pc = 0x34E70Cu;
label_34e70c:
    // 0x34e70c: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x34e70cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x34e710: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x34E710u;
    {
        const bool branch_taken_0x34e710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E710u;
        // 0x34e714: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e710) {
            ctx->pc = 0x34E75Cu;
            goto label_34e75c;
        }
    }
    ctx->pc = 0x34E718u;
label_34e718:
    // 0x34e718: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34e718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e71c: 0x27a7000c  addiu       $a3, $sp, 0xC
    ctx->pc = 0x34e71cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x34e720: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x34e720u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34e724: 0x2c53023  subu        $a2, $s6, $a1
    ctx->pc = 0x34e724u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
    // 0x34e728: 0xc0d3a6c  jal         func_34E9B0
    ctx->pc = 0x34E728u;
    SET_GPR_U32(ctx, 31, 0x34E730u);
    ctx->pc = 0x34E72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E728u;
    // 0x34e72c: 0x2e52821  addu        $a1, $s7, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E9B0u, 0x34E728u, 0x34E730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E730u;
label_34e730:
    // 0x34e730: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34e730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34e734: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x34e734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x34e738: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x34e738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34e73c: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x34E73Cu;
    {
        const bool branch_taken_0x34e73c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x34E740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E73Cu;
        // 0x34e740: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e73c) {
            ctx->pc = 0x34E758u;
            goto label_34e758;
        }
    }
    ctx->pc = 0x34E744u;
    // 0x34e744: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x34e744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34e748: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x34e748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x34e74c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34e74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34e750: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x34e750u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x34e754: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x34e754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_34e758:
    // 0x34e758: 0xae820158  sw          $v0, 0x158($s4)
    ctx->pc = 0x34e758u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 344), GPR_U32(ctx, 2));
label_34e75c:
    // 0x34e75c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x34e75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_34e760:
    // 0x34e760: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x34e760u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_34e764:
    // 0x34e764: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x34e764u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34e768: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x34e768u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34e76c: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x34e76cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34e770: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x34e770u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34e774: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x34e774u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x34e778: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x34e778u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x34e77c: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x34e77cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x34e780: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x34e780u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x34e784: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x34e784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34e788: 0x3e00008  jr          $ra
    ctx->pc = 0x34E788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34E78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E788u;
        // 0x34e78c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34E788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34E790u;
}
