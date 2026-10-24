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

// Function: cSeData_Update
// Address: 0x2cf440 - 0x2cf600
void cSeData_Update_0x2cf440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSeData_Update_0x2cf440");
#endif

    switch (ctx->pc) {
        case 0x2cf45cu: goto label_2cf45c;
        case 0x2cf478u: goto label_2cf478;
        case 0x2cf488u: goto label_2cf488;
        case 0x2cf498u: goto label_2cf498;
        case 0x2cf4acu: goto label_2cf4ac;
        case 0x2cf4bcu: goto label_2cf4bc;
        case 0x2cf4ccu: goto label_2cf4cc;
        case 0x2cf4e0u: goto label_2cf4e0;
        case 0x2cf4fcu: goto label_2cf4fc;
        case 0x2cf50cu: goto label_2cf50c;
        case 0x2cf520u: goto label_2cf520;
        case 0x2cf530u: goto label_2cf530;
        case 0x2cf540u: goto label_2cf540;
        case 0x2cf550u: goto label_2cf550;
        case 0x2cf560u: goto label_2cf560;
        case 0x2cf574u: goto label_2cf574;
        case 0x2cf584u: goto label_2cf584;
        case 0x2cf594u: goto label_2cf594;
        case 0x2cf5a8u: goto label_2cf5a8;
        case 0x2cf5b8u: goto label_2cf5b8;
        case 0x2cf5ccu: goto label_2cf5cc;
        case 0x2cf5d4u: goto label_2cf5d4;
        case 0x2cf5e8u: goto label_2cf5e8;
        default: break;
    }

    ctx->pc = 0x2cf440u;

    // 0x2cf440: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cf440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cf444: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2cf444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cf448: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2cf448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2cf44c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cf44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cf450: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cf450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cf454: 0xc0b3f4e  jal         func_2CFD38
    ctx->pc = 0x2CF454u;
    SET_GPR_U32(ctx, 31, 0x2CF45Cu);
    ctx->pc = 0x2CF458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF454u;
    // 0x2cf458: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFD38u, 0x2CF454u, 0x2CF45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF45Cu;
label_2cf45c:
    // 0x2cf45c: 0x50400063  beql        $v0, $zero, . + 4 + (0x63 << 2)
    ctx->pc = 0x2CF45Cu;
    {
        const bool branch_taken_0x2cf45c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf45c) {
            ctx->pc = 0x2CF460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF45Cu;
            // 0x2cf460: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CF5ECu;
            goto label_2cf5ec;
        }
    }
    ctx->pc = 0x2CF464u;
    // 0x2cf464: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2cf464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2cf468: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2CF468u;
    {
        const bool branch_taken_0x2cf468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF468u;
        // 0x2cf46c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf468) {
            ctx->pc = 0x2CF4F0u;
            goto label_2cf4f0;
        }
    }
    ctx->pc = 0x2CF470u;
    // 0x2cf470: 0xc0b3f22  jal         func_2CFC88
    ctx->pc = 0x2CF470u;
    SET_GPR_U32(ctx, 31, 0x2CF478u);
    ctx->pc = 0x2CF474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF470u;
    // 0x2cf474: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFC88u, 0x2CF470u, 0x2CF478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF478u;
label_2cf478:
    // 0x2cf478: 0x5451001b  bnel        $v0, $s1, . + 4 + (0x1B << 2)
    ctx->pc = 0x2CF478u;
    {
        const bool branch_taken_0x2cf478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x2cf478) {
            ctx->pc = 0x2CF47Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF478u;
            // 0x2cf47c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CF4E8u;
            goto label_2cf4e8;
        }
    }
    ctx->pc = 0x2CF480u;
    // 0x2cf480: 0xc0dd44a  jal         func_375128
    ctx->pc = 0x2CF480u;
    SET_GPR_U32(ctx, 31, 0x2CF488u);
    ctx->pc = 0x2CF484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF480u;
    // 0x2cf484: 0x8604002c  lh          $a0, 0x2C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375128u, 0x2CF480u, 0x2CF488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF488u;
label_2cf488:
    // 0x2cf488: 0x54400058  bnel        $v0, $zero, . + 4 + (0x58 << 2)
    ctx->pc = 0x2CF488u;
    {
        const bool branch_taken_0x2cf488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cf488) {
            ctx->pc = 0x2CF48Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF488u;
            // 0x2cf48c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CF5ECu;
            goto label_2cf5ec;
        }
    }
    ctx->pc = 0x2CF490u;
    // 0x2cf490: 0xc0b3e6a  jal         func_2CF9A8
    ctx->pc = 0x2CF490u;
    SET_GPR_U32(ctx, 31, 0x2CF498u);
    ctx->pc = 0x2CF494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF490u;
    // 0x2cf494: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF9A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF9A8u, 0x2CF490u, 0x2CF498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF498u;
label_2cf498:
    // 0x2cf498: 0x50400054  beql        $v0, $zero, . + 4 + (0x54 << 2)
    ctx->pc = 0x2CF498u;
    {
        const bool branch_taken_0x2cf498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf498) {
            ctx->pc = 0x2CF49Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF498u;
            // 0x2cf49c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CF5ECu;
            goto label_2cf5ec;
        }
    }
    ctx->pc = 0x2CF4A0u;
    // 0x2cf4a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cf4a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf4a4: 0xc0b3f4e  jal         func_2CFD38
    ctx->pc = 0x2CF4A4u;
    SET_GPR_U32(ctx, 31, 0x2CF4ACu);
    ctx->pc = 0x2CF4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF4A4u;
    // 0x2cf4a8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFD38u, 0x2CF4A4u, 0x2CF4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF4ACu;
label_2cf4ac:
    // 0x2cf4ac: 0x1451000a  bne         $v0, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x2CF4ACu;
    {
        const bool branch_taken_0x2cf4ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x2CF4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF4ACu;
        // 0x2cf4b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf4ac) {
            ctx->pc = 0x2CF4D8u;
            goto label_2cf4d8;
        }
    }
    ctx->pc = 0x2CF4B4u;
    // 0x2cf4b4: 0xc0b3f4e  jal         func_2CFD38
    ctx->pc = 0x2CF4B4u;
    SET_GPR_U32(ctx, 31, 0x2CF4BCu);
    ctx->pc = 0x2CF4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF4B4u;
    // 0x2cf4b8: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFD38u, 0x2CF4B4u, 0x2CF4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF4BCu;
label_2cf4bc:
    // 0x2cf4bc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CF4BCu;
    {
        const bool branch_taken_0x2cf4bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cf4bc) {
            ctx->pc = 0x2CF4D8u;
            goto label_2cf4d8;
        }
    }
    ctx->pc = 0x2CF4C4u;
    // 0x2cf4c4: 0xc0c8c00  jal         func_323000
    ctx->pc = 0x2CF4C4u;
    SET_GPR_U32(ctx, 31, 0x2CF4CCu);
    ctx->pc = 0x2CF4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF4C4u;
    // 0x2cf4c8: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323000u, 0x2CF4C4u, 0x2CF4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF4CCu;
label_2cf4cc:
    // 0x2cf4cc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2cf4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cf4d0: 0x50430046  beql        $v0, $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x2CF4D0u;
    {
        const bool branch_taken_0x2cf4d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2cf4d0) {
            ctx->pc = 0x2CF4D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF4D0u;
            // 0x2cf4d4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CF5ECu;
            goto label_2cf5ec;
        }
    }
    ctx->pc = 0x2CF4D8u;
label_2cf4d8:
    // 0x2cf4d8: 0xc0b3cc4  jal         func_2CF310
    ctx->pc = 0x2CF4D8u;
    SET_GPR_U32(ctx, 31, 0x2CF4E0u);
    ctx->pc = 0x2CF4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF4D8u;
    // 0x2cf4dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF310u, 0x2CF4D8u, 0x2CF4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF4E0u;
label_2cf4e0:
    // 0x2cf4e0: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x2CF4E0u;
    {
        const bool branch_taken_0x2cf4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF4E0u;
        // 0x2cf4e4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf4e0) {
            ctx->pc = 0x2CF5ECu;
            goto label_2cf5ec;
        }
    }
    ctx->pc = 0x2CF4E8u;
label_2cf4e8:
    // 0x2cf4e8: 0x54510040  bnel        $v0, $s1, . + 4 + (0x40 << 2)
    ctx->pc = 0x2CF4E8u;
    {
        const bool branch_taken_0x2cf4e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x2cf4e8) {
            ctx->pc = 0x2CF4ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF4E8u;
            // 0x2cf4ec: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CF5ECu;
            goto label_2cf5ec;
        }
    }
    ctx->pc = 0x2CF4F0u;
label_2cf4f0:
    // 0x2cf4f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cf4f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf4f4: 0xc0b3f4e  jal         func_2CFD38
    ctx->pc = 0x2CF4F4u;
    SET_GPR_U32(ctx, 31, 0x2CF4FCu);
    ctx->pc = 0x2CF4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF4F4u;
    // 0x2cf4f8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFD38u, 0x2CF4F4u, 0x2CF4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF4FCu;
label_2cf4fc:
    // 0x2cf4fc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2CF4FCu;
    {
        const bool branch_taken_0x2cf4fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CF500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF4FCu;
        // 0x2cf500: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf4fc) {
            ctx->pc = 0x2CF528u;
            goto label_2cf528;
        }
    }
    ctx->pc = 0x2CF504u;
    // 0x2cf504: 0xc0b3e0c  jal         func_2CF830
    ctx->pc = 0x2CF504u;
    SET_GPR_U32(ctx, 31, 0x2CF50Cu);
    ctx->pc = 0x2CF508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF504u;
    // 0x2cf508: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF830u, 0x2CF504u, 0x2CF50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF50Cu;
label_2cf50c:
    // 0x2cf50c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cf50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cf510: 0x54430036  bnel        $v0, $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x2CF510u;
    {
        const bool branch_taken_0x2cf510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2cf510) {
            ctx->pc = 0x2CF514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF510u;
            // 0x2cf514: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CF5ECu;
            goto label_2cf5ec;
        }
    }
    ctx->pc = 0x2CF518u;
    // 0x2cf518: 0xc0b3e82  jal         func_2CFA08
    ctx->pc = 0x2CF518u;
    SET_GPR_U32(ctx, 31, 0x2CF520u);
    ctx->pc = 0x2CF51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF518u;
    // 0x2cf51c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFA08u, 0x2CF518u, 0x2CF520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF520u;
label_2cf520:
    // 0x2cf520: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2CF520u;
    {
        const bool branch_taken_0x2cf520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf520) {
            ctx->pc = 0x2CF574u;
            goto label_2cf574;
        }
    }
    ctx->pc = 0x2CF528u;
label_2cf528:
    // 0x2cf528: 0xc0b3f4e  jal         func_2CFD38
    ctx->pc = 0x2CF528u;
    SET_GPR_U32(ctx, 31, 0x2CF530u);
    ctx->pc = 0x2CF52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF528u;
    // 0x2cf52c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFD38u, 0x2CF528u, 0x2CF530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF530u;
label_2cf530:
    // 0x2cf530: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2CF530u;
    {
        const bool branch_taken_0x2cf530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CF534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF530u;
        // 0x2cf534: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf530) {
            ctx->pc = 0x2CF58Cu;
            goto label_2cf58c;
        }
    }
    ctx->pc = 0x2CF538u;
    // 0x2cf538: 0xc0b3f4e  jal         func_2CFD38
    ctx->pc = 0x2CF538u;
    SET_GPR_U32(ctx, 31, 0x2CF540u);
    ctx->pc = 0x2CF53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF538u;
    // 0x2cf53c: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFD38u, 0x2CF538u, 0x2CF540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF540u;
label_2cf540:
    // 0x2cf540: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CF540u;
    {
        const bool branch_taken_0x2cf540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cf540) {
            ctx->pc = 0x2CF558u;
            goto label_2cf558;
        }
    }
    ctx->pc = 0x2CF548u;
    // 0x2cf548: 0xc0b3e22  jal         func_2CF888
    ctx->pc = 0x2CF548u;
    SET_GPR_U32(ctx, 31, 0x2CF550u);
    ctx->pc = 0x2CF54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF548u;
    // 0x2cf54c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF888u, 0x2CF548u, 0x2CF550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF550u;
label_2cf550:
    // 0x2cf550: 0x50400026  beql        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x2CF550u;
    {
        const bool branch_taken_0x2cf550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf550) {
            ctx->pc = 0x2CF554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF550u;
            // 0x2cf554: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CF5ECu;
            goto label_2cf5ec;
        }
    }
    ctx->pc = 0x2CF558u;
label_2cf558:
    // 0x2cf558: 0xc0b3e1a  jal         func_2CF868
    ctx->pc = 0x2CF558u;
    SET_GPR_U32(ctx, 31, 0x2CF560u);
    ctx->pc = 0x2CF55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF558u;
    // 0x2cf55c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF868u, 0x2CF558u, 0x2CF560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF560u;
label_2cf560:
    // 0x2cf560: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cf560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cf564: 0x54430021  bnel        $v0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x2CF564u;
    {
        const bool branch_taken_0x2cf564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2cf564) {
            ctx->pc = 0x2CF568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF564u;
            // 0x2cf568: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CF5ECu;
            goto label_2cf5ec;
        }
    }
    ctx->pc = 0x2CF56Cu;
    // 0x2cf56c: 0xc0b3e3a  jal         func_2CF8E8
    ctx->pc = 0x2CF56Cu;
    SET_GPR_U32(ctx, 31, 0x2CF574u);
    ctx->pc = 0x2CF570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF56Cu;
    // 0x2cf570: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF8E8u, 0x2CF56Cu, 0x2CF574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF574u;
label_2cf574:
    // 0x2cf574: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x2CF574u;
    {
        const bool branch_taken_0x2cf574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cf574) {
            ctx->pc = 0x2CF578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF574u;
            // 0x2cf578: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CF5ECu;
            goto label_2cf5ec;
        }
    }
    ctx->pc = 0x2CF57Cu;
    // 0x2cf57c: 0xc0b3f26  jal         func_2CFC98
    ctx->pc = 0x2CF57Cu;
    SET_GPR_U32(ctx, 31, 0x2CF584u);
    ctx->pc = 0x2CF580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF57Cu;
    // 0x2cf580: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFC98u, 0x2CF57Cu, 0x2CF584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF584u;
label_2cf584:
    // 0x2cf584: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2CF584u;
    {
        const bool branch_taken_0x2cf584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF584u;
        // 0x2cf588: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf584) {
            ctx->pc = 0x2CF5ECu;
            goto label_2cf5ec;
        }
    }
    ctx->pc = 0x2CF58Cu;
label_2cf58c:
    // 0x2cf58c: 0xc0b3f4e  jal         func_2CFD38
    ctx->pc = 0x2CF58Cu;
    SET_GPR_U32(ctx, 31, 0x2CF594u);
    ctx->pc = 0x2CF590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF58Cu;
    // 0x2cf590: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFD38u, 0x2CF58Cu, 0x2CF594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF594u;
label_2cf594:
    // 0x2cf594: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cf594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cf598: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2CF598u;
    {
        const bool branch_taken_0x2cf598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2CF59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF598u;
        // 0x2cf59c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf598) {
            ctx->pc = 0x2CF5CCu;
            goto label_2cf5cc;
        }
    }
    ctx->pc = 0x2CF5A0u;
    // 0x2cf5a0: 0xc0b3f4e  jal         func_2CFD38
    ctx->pc = 0x2CF5A0u;
    SET_GPR_U32(ctx, 31, 0x2CF5A8u);
    ctx->pc = 0x2CF5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF5A0u;
    // 0x2cf5a4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFD38u, 0x2CF5A0u, 0x2CF5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF5A8u;
label_2cf5a8:
    // 0x2cf5a8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CF5A8u;
    {
        const bool branch_taken_0x2cf5a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cf5a8) {
            ctx->pc = 0x2CF5CCu;
            goto label_2cf5cc;
        }
    }
    ctx->pc = 0x2CF5B0u;
    // 0x2cf5b0: 0xc0c8c00  jal         func_323000
    ctx->pc = 0x2CF5B0u;
    SET_GPR_U32(ctx, 31, 0x2CF5B8u);
    ctx->pc = 0x2CF5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF5B0u;
    // 0x2cf5b4: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323000u, 0x2CF5B0u, 0x2CF5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF5B8u;
label_2cf5b8:
    // 0x2cf5b8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2cf5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2cf5bc: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CF5BCu;
    {
        const bool branch_taken_0x2cf5bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2CF5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF5BCu;
        // 0x2cf5c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf5bc) {
            ctx->pc = 0x2CF5CCu;
            goto label_2cf5cc;
        }
    }
    ctx->pc = 0x2CF5C4u;
    // 0x2cf5c4: 0xc0b3f2c  jal         func_2CFCB0
    ctx->pc = 0x2CF5C4u;
    SET_GPR_U32(ctx, 31, 0x2CF5CCu);
    ctx->pc = 0x2CF5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF5C4u;
    // 0x2cf5c8: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFCB0u, 0x2CF5C4u, 0x2CF5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF5CCu;
label_2cf5cc:
    // 0x2cf5cc: 0xc0b3e6a  jal         func_2CF9A8
    ctx->pc = 0x2CF5CCu;
    SET_GPR_U32(ctx, 31, 0x2CF5D4u);
    ctx->pc = 0x2CF5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF5CCu;
    // 0x2cf5d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF9A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF9A8u, 0x2CF5CCu, 0x2CF5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF5D4u;
label_2cf5d4:
    // 0x2cf5d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cf5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cf5d8: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CF5D8u;
    {
        const bool branch_taken_0x2cf5d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2cf5d8) {
            ctx->pc = 0x2CF5DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF5D8u;
            // 0x2cf5dc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CF5ECu;
            goto label_2cf5ec;
        }
    }
    ctx->pc = 0x2CF5E0u;
    // 0x2cf5e0: 0xc0b3ed8  jal         func_2CFB60
    ctx->pc = 0x2CF5E0u;
    SET_GPR_U32(ctx, 31, 0x2CF5E8u);
    ctx->pc = 0x2CF5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF5E0u;
    // 0x2cf5e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFB60u, 0x2CF5E0u, 0x2CF5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF5E8u;
label_2cf5e8:
    // 0x2cf5e8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2cf5e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2cf5ec:
    // 0x2cf5ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cf5ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf5f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cf5f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cf5f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF5F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF5F4u;
        // 0x2cf5f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF5F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CF5FCu;
    // 0x2cf5fc: 0x0  nop
    ctx->pc = 0x2cf5fcu;
    // NOP
    ctx->pc = 0x2cf600u;
}
