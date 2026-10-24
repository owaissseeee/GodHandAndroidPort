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

// Function: func_00298460
// Address: 0x298460 - 0x2987b0
void func_00298460_0x298460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00298460_0x298460");
#endif

    switch (ctx->pc) {
        case 0x2984d0u: goto label_2984d0;
        case 0x2984e8u: goto label_2984e8;
        case 0x298500u: goto label_298500;
        case 0x29851cu: goto label_29851c;
        case 0x29852cu: goto label_29852c;
        case 0x29853cu: goto label_29853c;
        case 0x298550u: goto label_298550;
        case 0x298578u: goto label_298578;
        case 0x298590u: goto label_298590;
        case 0x2985acu: goto label_2985ac;
        case 0x2985bcu: goto label_2985bc;
        case 0x2985d0u: goto label_2985d0;
        case 0x2985fcu: goto label_2985fc;
        case 0x298614u: goto label_298614;
        case 0x29862cu: goto label_29862c;
        case 0x298648u: goto label_298648;
        case 0x298660u: goto label_298660;
        case 0x298678u: goto label_298678;
        case 0x298698u: goto label_298698;
        case 0x2986a8u: goto label_2986a8;
        case 0x2986b8u: goto label_2986b8;
        case 0x2986d4u: goto label_2986d4;
        case 0x2986e8u: goto label_2986e8;
        case 0x29870cu: goto label_29870c;
        case 0x298724u: goto label_298724;
        case 0x298740u: goto label_298740;
        case 0x298758u: goto label_298758;
        case 0x298778u: goto label_298778;
        case 0x298788u: goto label_298788;
        default: break;
    }

    ctx->pc = 0x298460u;

    // 0x298460: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x298460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x298464: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x298464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x298468: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x298468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x29846c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x29846cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298470: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x298470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x298474: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x298474u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298478: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x298478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x29847c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x29847cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x298480: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x298480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x298484: 0x126000c0  beqz        $s3, . + 4 + (0xC0 << 2)
    ctx->pc = 0x298484u;
    {
        const bool branch_taken_0x298484 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x298488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298484u;
        // 0x298488: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298484) {
            ctx->pc = 0x298788u;
            goto label_298788;
        }
    }
    ctx->pc = 0x29848Cu;
    // 0x29848c: 0x966202fe  lhu         $v0, 0x2FE($s3)
    ctx->pc = 0x29848cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 766)));
    // 0x298490: 0x2444fa00  addiu       $a0, $v0, -0x600
    ctx->pc = 0x298490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965760));
    // 0x298494: 0x2c830028  sltiu       $v1, $a0, 0x28
    ctx->pc = 0x298494u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)40) ? 1 : 0);
    // 0x298498: 0x106000bb  beqz        $v1, . + 4 + (0xBB << 2)
    ctx->pc = 0x298498u;
    {
        const bool branch_taken_0x298498 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29849Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298498u;
        // 0x29849c: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298498) {
            ctx->pc = 0x298788u;
            goto label_298788;
        }
    }
    ctx->pc = 0x2984A0u;
    // 0x2984a0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2984a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2984a4: 0x2442aa50  addiu       $v0, $v0, -0x55B0
    ctx->pc = 0x2984a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945360));
    // 0x2984a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2984a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2984ac: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2984acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2984b0: 0x800008  jr          $a0
    ctx->pc = 0x2984B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2984B8u: goto label_2984b8;
            case 0x298560u: goto label_298560;
            case 0x2985E0u: goto label_2985e0;
            case 0x2986C0u: goto label_2986c0;
            case 0x2986F0u: goto label_2986f0;
            case 0x298788u: goto label_298788;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2984B0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2984B8u;
label_2984b8:
    // 0x2984b8: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2984b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x2984bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2984bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2984c0: 0x2452aa10  addiu       $s2, $v0, -0x55F0
    ctx->pc = 0x2984c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945296));
    // 0x2984c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2984c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2984c8: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x2984C8u;
    SET_GPR_U32(ctx, 31, 0x2984D0u);
    ctx->pc = 0x2984CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2984C8u;
    // 0x2984cc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x2984C8u, 0x2984D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2984D0u;
label_2984d0:
    // 0x2984d0: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x2984d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x2984d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2984d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2984d8: 0x2471aa18  addiu       $s1, $v1, -0x55E8
    ctx->pc = 0x2984d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945304));
    // 0x2984dc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2984dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2984e0: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x2984E0u;
    SET_GPR_U32(ctx, 31, 0x2984E8u);
    ctx->pc = 0x2984E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2984E0u;
    // 0x2984e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x2984E0u, 0x2984E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2984E8u;
label_2984e8:
    // 0x2984e8: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x2984e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x2984ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2984ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2984f0: 0x2470aa20  addiu       $s0, $v1, -0x55E0
    ctx->pc = 0x2984f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945312));
    // 0x2984f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2984f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2984f8: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x2984F8u;
    SET_GPR_U32(ctx, 31, 0x298500u);
    ctx->pc = 0x2984FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2984F8u;
    // 0x2984fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x2984F8u, 0x298500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298500u;
label_298500:
    // 0x298500: 0x2a83000b  slti        $v1, $s4, 0xB
    ctx->pc = 0x298500u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x298504: 0x546000a1  bnel        $v1, $zero, . + 4 + (0xA1 << 2)
    ctx->pc = 0x298504u;
    {
        const bool branch_taken_0x298504 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x298504) {
            ctx->pc = 0x298508u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x298504u;
            // 0x298508: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29878Cu;
            goto label_29878c;
        }
    }
    ctx->pc = 0x29850Cu;
    // 0x29850c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x29850cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298510: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x298510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298514: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x298514u;
    SET_GPR_U32(ctx, 31, 0x29851Cu);
    ctx->pc = 0x298518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298514u;
    // 0x298518: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x298514u, 0x29851Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29851Cu;
label_29851c:
    // 0x29851c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x29851cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298520: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x298520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298524: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x298524u;
    SET_GPR_U32(ctx, 31, 0x29852Cu);
    ctx->pc = 0x298528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298524u;
    // 0x298528: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x298524u, 0x29852Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29852Cu;
label_29852c:
    // 0x29852c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29852cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298530: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x298530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298534: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x298534u;
    SET_GPR_U32(ctx, 31, 0x29853Cu);
    ctx->pc = 0x298538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298534u;
    // 0x298538: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x298534u, 0x29853Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29853Cu;
label_29853c:
    // 0x29853c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x29853cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x298540: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x298540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298544: 0x24a5aa28  addiu       $a1, $a1, -0x55D8
    ctx->pc = 0x298544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945320));
    // 0x298548: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x298548u;
    SET_GPR_U32(ctx, 31, 0x298550u);
    ctx->pc = 0x29854Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298548u;
    // 0x29854c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x298548u, 0x298550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298550u;
label_298550:
    // 0x298550: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x298550u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x298554: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x298554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298558: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x298558u;
    {
        const bool branch_taken_0x298558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29855Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298558u;
        // 0x29855c: 0x24a5aa30  addiu       $a1, $a1, -0x55D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298558) {
            ctx->pc = 0x2986B0u;
            goto label_2986b0;
        }
    }
    ctx->pc = 0x298560u;
label_298560:
    // 0x298560: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x298560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x298564: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x298564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298568: 0x2451aa10  addiu       $s1, $v0, -0x55F0
    ctx->pc = 0x298568u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945296));
    // 0x29856c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x29856cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x298570: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x298570u;
    SET_GPR_U32(ctx, 31, 0x298578u);
    ctx->pc = 0x298574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298570u;
    // 0x298574: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x298570u, 0x298578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298578u;
label_298578:
    // 0x298578: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x298578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x29857c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29857cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298580: 0x2470aa20  addiu       $s0, $v1, -0x55E0
    ctx->pc = 0x298580u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945312));
    // 0x298584: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x298584u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298588: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x298588u;
    SET_GPR_U32(ctx, 31, 0x298590u);
    ctx->pc = 0x29858Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298588u;
    // 0x29858c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x298588u, 0x298590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298590u;
label_298590:
    // 0x298590: 0x2a83000b  slti        $v1, $s4, 0xB
    ctx->pc = 0x298590u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x298594: 0x5460007d  bnel        $v1, $zero, . + 4 + (0x7D << 2)
    ctx->pc = 0x298594u;
    {
        const bool branch_taken_0x298594 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x298594) {
            ctx->pc = 0x298598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x298594u;
            // 0x298598: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29878Cu;
            goto label_29878c;
        }
    }
    ctx->pc = 0x29859Cu;
    // 0x29859c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x29859cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2985a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2985a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2985a4: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x2985A4u;
    SET_GPR_U32(ctx, 31, 0x2985ACu);
    ctx->pc = 0x2985A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2985A4u;
    // 0x2985a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x2985A4u, 0x2985ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2985ACu;
label_2985ac:
    // 0x2985ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2985acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2985b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2985b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2985b4: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x2985B4u;
    SET_GPR_U32(ctx, 31, 0x2985BCu);
    ctx->pc = 0x2985B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2985B4u;
    // 0x2985b8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x2985B4u, 0x2985BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2985BCu;
label_2985bc:
    // 0x2985bc: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2985bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2985c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2985c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2985c4: 0x24a5aa28  addiu       $a1, $a1, -0x55D8
    ctx->pc = 0x2985c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945320));
    // 0x2985c8: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x2985C8u;
    SET_GPR_U32(ctx, 31, 0x2985D0u);
    ctx->pc = 0x2985CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2985C8u;
    // 0x2985cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x2985C8u, 0x2985D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2985D0u;
label_2985d0:
    // 0x2985d0: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2985d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2985d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2985d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2985d8: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x2985D8u;
    {
        const bool branch_taken_0x2985d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2985DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2985D8u;
        // 0x2985dc: 0x24a5aa30  addiu       $a1, $a1, -0x55D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2985d8) {
            ctx->pc = 0x2986B0u;
            goto label_2986b0;
        }
    }
    ctx->pc = 0x2985E0u;
label_2985e0:
    // 0x2985e0: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x2985e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2985e4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2985E4u;
    {
        const bool branch_taken_0x2985e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2985E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2985E4u;
        // 0x2985e8: 0x3c100045  lui         $s0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2985e4) {
            ctx->pc = 0x298634u;
            goto label_298634;
        }
    }
    ctx->pc = 0x2985ECu;
    // 0x2985ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2985ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2985f0: 0x2605aa28  addiu       $a1, $s0, -0x55D8
    ctx->pc = 0x2985f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945320));
    // 0x2985f4: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x2985F4u;
    SET_GPR_U32(ctx, 31, 0x2985FCu);
    ctx->pc = 0x2985F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2985F4u;
    // 0x2985f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x2985F4u, 0x2985FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2985FCu;
label_2985fc:
    // 0x2985fc: 0x3c110045  lui         $s1, 0x45
    ctx->pc = 0x2985fcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)69 << 16));
    // 0x298600: 0x2625aa30  addiu       $a1, $s1, -0x55D0
    ctx->pc = 0x298600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294945328));
    // 0x298604: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x298604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298608: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x298608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29860c: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x29860Cu;
    SET_GPR_U32(ctx, 31, 0x298614u);
    ctx->pc = 0x298610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29860Cu;
    // 0x298610: 0x3c120045  lui         $s2, 0x45 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)69 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x29860Cu, 0x298614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298614u;
label_298614:
    // 0x298614: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x298614u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298618: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x298618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29861c: 0x2645aa38  addiu       $a1, $s2, -0x55C8
    ctx->pc = 0x29861cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294945336));
    // 0x298620: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x298620u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298624: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x298624u;
    SET_GPR_U32(ctx, 31, 0x29862Cu);
    ctx->pc = 0x298628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298624u;
    // 0x298628: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x298624u, 0x29862Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29862Cu;
label_29862c:
    // 0x29862c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x29862Cu;
    {
        const bool branch_taken_0x29862c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29862Cu;
        // 0x298630: 0x2a820008  slti        $v0, $s4, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29862c) {
            ctx->pc = 0x298680u;
            goto label_298680;
        }
    }
    ctx->pc = 0x298634u;
label_298634:
    // 0x298634: 0x3c120045  lui         $s2, 0x45
    ctx->pc = 0x298634u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)69 << 16));
    // 0x298638: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x298638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29863c: 0x2645aa28  addiu       $a1, $s2, -0x55D8
    ctx->pc = 0x29863cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294945320));
    // 0x298640: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x298640u;
    SET_GPR_U32(ctx, 31, 0x298648u);
    ctx->pc = 0x298644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298640u;
    // 0x298644: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x298640u, 0x298648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298648u;
label_298648:
    // 0x298648: 0x3c110045  lui         $s1, 0x45
    ctx->pc = 0x298648u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)69 << 16));
    // 0x29864c: 0x2625aa30  addiu       $a1, $s1, -0x55D0
    ctx->pc = 0x29864cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294945328));
    // 0x298650: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x298650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298654: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x298654u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298658: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x298658u;
    SET_GPR_U32(ctx, 31, 0x298660u);
    ctx->pc = 0x29865Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298658u;
    // 0x29865c: 0x3c100045  lui         $s0, 0x45 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)69 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x298658u, 0x298660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298660u;
label_298660:
    // 0x298660: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x298660u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298664: 0x2605aa38  addiu       $a1, $s0, -0x55C8
    ctx->pc = 0x298664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945336));
    // 0x298668: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x298668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29866c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29866cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298670: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x298670u;
    SET_GPR_U32(ctx, 31, 0x298678u);
    ctx->pc = 0x298674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298670u;
    // 0x298674: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x298670u, 0x298678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298678u;
label_298678:
    // 0x298678: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x298678u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29867c: 0x2a820008  slti        $v0, $s4, 0x8
    ctx->pc = 0x29867cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)8) ? 1 : 0);
label_298680:
    // 0x298680: 0x54400042  bnel        $v0, $zero, . + 4 + (0x42 << 2)
    ctx->pc = 0x298680u;
    {
        const bool branch_taken_0x298680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x298680) {
            ctx->pc = 0x298684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x298680u;
            // 0x298684: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29878Cu;
            goto label_29878c;
        }
    }
    ctx->pc = 0x298688u;
    // 0x298688: 0x2605aa28  addiu       $a1, $s0, -0x55D8
    ctx->pc = 0x298688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945320));
    // 0x29868c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29868cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298690: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x298690u;
    SET_GPR_U32(ctx, 31, 0x298698u);
    ctx->pc = 0x298694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298690u;
    // 0x298694: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x298690u, 0x298698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298698u;
label_298698:
    // 0x298698: 0x26a5aa30  addiu       $a1, $s5, -0x55D0
    ctx->pc = 0x298698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294945328));
    // 0x29869c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29869cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2986a0: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x2986A0u;
    SET_GPR_U32(ctx, 31, 0x2986A8u);
    ctx->pc = 0x2986A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2986A0u;
    // 0x2986a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x2986A0u, 0x2986A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2986A8u;
label_2986a8:
    // 0x2986a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2986a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2986ac: 0x2625aa38  addiu       $a1, $s1, -0x55C8
    ctx->pc = 0x2986acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294945336));
label_2986b0:
    // 0x2986b0: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x2986B0u;
    SET_GPR_U32(ctx, 31, 0x2986B8u);
    ctx->pc = 0x2986B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2986B0u;
    // 0x2986b4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x2986B0u, 0x2986B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2986B8u;
label_2986b8:
    // 0x2986b8: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2986B8u;
    {
        const bool branch_taken_0x2986b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2986BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2986B8u;
        // 0x2986bc: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2986b8) {
            ctx->pc = 0x29878Cu;
            goto label_29878c;
        }
    }
    ctx->pc = 0x2986C0u;
label_2986c0:
    // 0x2986c0: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2986c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2986c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2986c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2986c8: 0x24a5aa40  addiu       $a1, $a1, -0x55C0
    ctx->pc = 0x2986c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945344));
    // 0x2986cc: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x2986CCu;
    SET_GPR_U32(ctx, 31, 0x2986D4u);
    ctx->pc = 0x2986D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2986CCu;
    // 0x2986d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x2986CCu, 0x2986D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2986D4u;
label_2986d4:
    // 0x2986d4: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2986d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2986d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2986d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2986dc: 0x24a5aa48  addiu       $a1, $a1, -0x55B8
    ctx->pc = 0x2986dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945352));
    // 0x2986e0: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x2986E0u;
    SET_GPR_U32(ctx, 31, 0x2986E8u);
    ctx->pc = 0x2986E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2986E0u;
    // 0x2986e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x2986E0u, 0x2986E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2986E8u;
label_2986e8:
    // 0x2986e8: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2986E8u;
    {
        const bool branch_taken_0x2986e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2986ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2986E8u;
        // 0x2986ec: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2986e8) {
            ctx->pc = 0x29878Cu;
            goto label_29878c;
        }
    }
    ctx->pc = 0x2986F0u;
label_2986f0:
    // 0x2986f0: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x2986f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2986f4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2986F4u;
    {
        const bool branch_taken_0x2986f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2986F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2986F4u;
        // 0x2986f8: 0x3c100045  lui         $s0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2986f4) {
            ctx->pc = 0x29872Cu;
            goto label_29872c;
        }
    }
    ctx->pc = 0x2986FCu;
    // 0x2986fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2986fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298700: 0x2605aa28  addiu       $a1, $s0, -0x55D8
    ctx->pc = 0x298700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945320));
    // 0x298704: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x298704u;
    SET_GPR_U32(ctx, 31, 0x29870Cu);
    ctx->pc = 0x298708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298704u;
    // 0x298708: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x298704u, 0x29870Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29870Cu;
label_29870c:
    // 0x29870c: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x29870cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x298710: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x298710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298714: 0x2465aa30  addiu       $a1, $v1, -0x55D0
    ctx->pc = 0x298714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945328));
    // 0x298718: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x298718u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29871c: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x29871Cu;
    SET_GPR_U32(ctx, 31, 0x298724u);
    ctx->pc = 0x298720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29871Cu;
    // 0x298720: 0x60a82d  daddu       $s5, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x29871Cu, 0x298724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298724u;
label_298724:
    // 0x298724: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x298724u;
    {
        const bool branch_taken_0x298724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298724u;
        // 0x298728: 0x2a820008  slti        $v0, $s4, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x298724) {
            ctx->pc = 0x298760u;
            goto label_298760;
        }
    }
    ctx->pc = 0x29872Cu;
label_29872c:
    // 0x29872c: 0x3c110045  lui         $s1, 0x45
    ctx->pc = 0x29872cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)69 << 16));
    // 0x298730: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x298730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298734: 0x2625aa28  addiu       $a1, $s1, -0x55D8
    ctx->pc = 0x298734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294945320));
    // 0x298738: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x298738u;
    SET_GPR_U32(ctx, 31, 0x298740u);
    ctx->pc = 0x29873Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298738u;
    // 0x29873c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x298738u, 0x298740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298740u;
label_298740:
    // 0x298740: 0x3c100045  lui         $s0, 0x45
    ctx->pc = 0x298740u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)69 << 16));
    // 0x298744: 0x2605aa30  addiu       $a1, $s0, -0x55D0
    ctx->pc = 0x298744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945328));
    // 0x298748: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x298748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29874c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29874cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298750: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x298750u;
    SET_GPR_U32(ctx, 31, 0x298758u);
    ctx->pc = 0x298754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298750u;
    // 0x298754: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x298750u, 0x298758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298758u;
label_298758:
    // 0x298758: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x298758u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29875c: 0x2a820008  slti        $v0, $s4, 0x8
    ctx->pc = 0x29875cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)8) ? 1 : 0);
label_298760:
    // 0x298760: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x298760u;
    {
        const bool branch_taken_0x298760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x298760) {
            ctx->pc = 0x298764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x298760u;
            // 0x298764: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29878Cu;
            goto label_29878c;
        }
    }
    ctx->pc = 0x298768u;
    // 0x298768: 0x2605aa28  addiu       $a1, $s0, -0x55D8
    ctx->pc = 0x298768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945320));
    // 0x29876c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29876cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298770: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x298770u;
    SET_GPR_U32(ctx, 31, 0x298778u);
    ctx->pc = 0x298774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298770u;
    // 0x298774: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x298770u, 0x298778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298778u;
label_298778:
    // 0x298778: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x298778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29877c: 0x26a5aa30  addiu       $a1, $s5, -0x55D0
    ctx->pc = 0x29877cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294945328));
    // 0x298780: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x298780u;
    SET_GPR_U32(ctx, 31, 0x298788u);
    ctx->pc = 0x298784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298780u;
    // 0x298784: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x298780u, 0x298788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298788u;
label_298788:
    // 0x298788: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x298788u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_29878c:
    // 0x29878c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x29878cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x298790: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x298790u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x298794: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x298794u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x298798: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x298798u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29879c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x29879cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2987a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2987a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2987a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2987A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2987A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2987A4u;
        // 0x2987a8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2987A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2987ACu;
    // 0x2987ac: 0x0  nop
    ctx->pc = 0x2987acu;
    // NOP
    ctx->pc = 0x2987b0u;
}
