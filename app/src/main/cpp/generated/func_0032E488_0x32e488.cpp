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

// Function: func_0032E488
// Address: 0x32e488 - 0x32e620
void func_0032E488_0x32e488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032E488_0x32e488");
#endif

    switch (ctx->pc) {
        case 0x32e488u: goto label_32e488;
        case 0x32e48cu: goto label_32e48c;
        case 0x32e490u: goto label_32e490;
        case 0x32e494u: goto label_32e494;
        case 0x32e498u: goto label_32e498;
        case 0x32e49cu: goto label_32e49c;
        case 0x32e4a0u: goto label_32e4a0;
        case 0x32e4a4u: goto label_32e4a4;
        case 0x32e4a8u: goto label_32e4a8;
        case 0x32e4acu: goto label_32e4ac;
        case 0x32e4b0u: goto label_32e4b0;
        case 0x32e4b4u: goto label_32e4b4;
        case 0x32e4b8u: goto label_32e4b8;
        case 0x32e4bcu: goto label_32e4bc;
        case 0x32e4c0u: goto label_32e4c0;
        case 0x32e4c4u: goto label_32e4c4;
        case 0x32e4c8u: goto label_32e4c8;
        case 0x32e4ccu: goto label_32e4cc;
        case 0x32e4d0u: goto label_32e4d0;
        case 0x32e4d4u: goto label_32e4d4;
        case 0x32e4d8u: goto label_32e4d8;
        case 0x32e4dcu: goto label_32e4dc;
        case 0x32e4e0u: goto label_32e4e0;
        case 0x32e4e4u: goto label_32e4e4;
        case 0x32e4e8u: goto label_32e4e8;
        case 0x32e4ecu: goto label_32e4ec;
        case 0x32e4f0u: goto label_32e4f0;
        case 0x32e4f4u: goto label_32e4f4;
        case 0x32e4f8u: goto label_32e4f8;
        case 0x32e4fcu: goto label_32e4fc;
        case 0x32e500u: goto label_32e500;
        case 0x32e504u: goto label_32e504;
        case 0x32e508u: goto label_32e508;
        case 0x32e50cu: goto label_32e50c;
        case 0x32e510u: goto label_32e510;
        case 0x32e514u: goto label_32e514;
        case 0x32e518u: goto label_32e518;
        case 0x32e51cu: goto label_32e51c;
        case 0x32e520u: goto label_32e520;
        case 0x32e524u: goto label_32e524;
        case 0x32e528u: goto label_32e528;
        case 0x32e52cu: goto label_32e52c;
        case 0x32e530u: goto label_32e530;
        case 0x32e534u: goto label_32e534;
        case 0x32e538u: goto label_32e538;
        case 0x32e53cu: goto label_32e53c;
        case 0x32e540u: goto label_32e540;
        case 0x32e544u: goto label_32e544;
        case 0x32e548u: goto label_32e548;
        case 0x32e54cu: goto label_32e54c;
        case 0x32e550u: goto label_32e550;
        case 0x32e554u: goto label_32e554;
        case 0x32e558u: goto label_32e558;
        case 0x32e55cu: goto label_32e55c;
        case 0x32e560u: goto label_32e560;
        case 0x32e564u: goto label_32e564;
        case 0x32e568u: goto label_32e568;
        case 0x32e56cu: goto label_32e56c;
        case 0x32e570u: goto label_32e570;
        case 0x32e574u: goto label_32e574;
        case 0x32e578u: goto label_32e578;
        case 0x32e57cu: goto label_32e57c;
        case 0x32e580u: goto label_32e580;
        case 0x32e584u: goto label_32e584;
        case 0x32e588u: goto label_32e588;
        case 0x32e58cu: goto label_32e58c;
        case 0x32e590u: goto label_32e590;
        case 0x32e594u: goto label_32e594;
        case 0x32e598u: goto label_32e598;
        case 0x32e59cu: goto label_32e59c;
        case 0x32e5a0u: goto label_32e5a0;
        case 0x32e5a4u: goto label_32e5a4;
        case 0x32e5a8u: goto label_32e5a8;
        case 0x32e5acu: goto label_32e5ac;
        case 0x32e5b0u: goto label_32e5b0;
        case 0x32e5b4u: goto label_32e5b4;
        case 0x32e5b8u: goto label_32e5b8;
        case 0x32e5bcu: goto label_32e5bc;
        case 0x32e5c0u: goto label_32e5c0;
        case 0x32e5c4u: goto label_32e5c4;
        case 0x32e5c8u: goto label_32e5c8;
        case 0x32e5ccu: goto label_32e5cc;
        case 0x32e5d0u: goto label_32e5d0;
        case 0x32e5d4u: goto label_32e5d4;
        case 0x32e5d8u: goto label_32e5d8;
        case 0x32e5dcu: goto label_32e5dc;
        case 0x32e5e0u: goto label_32e5e0;
        case 0x32e5e4u: goto label_32e5e4;
        case 0x32e5e8u: goto label_32e5e8;
        case 0x32e5ecu: goto label_32e5ec;
        case 0x32e5f0u: goto label_32e5f0;
        case 0x32e5f4u: goto label_32e5f4;
        case 0x32e5f8u: goto label_32e5f8;
        case 0x32e5fcu: goto label_32e5fc;
        case 0x32e600u: goto label_32e600;
        case 0x32e604u: goto label_32e604;
        case 0x32e608u: goto label_32e608;
        case 0x32e60cu: goto label_32e60c;
        case 0x32e610u: goto label_32e610;
        case 0x32e614u: goto label_32e614;
        case 0x32e618u: goto label_32e618;
        case 0x32e61cu: goto label_32e61c;
        default: break;
    }

    ctx->pc = 0x32e488u;

label_32e488:
    // 0x32e488: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32e488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_32e48c:
    // 0x32e48c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32e48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32e490:
    // 0x32e490: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x32e490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_32e494:
    // 0x32e494: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32e494u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32e498:
    // 0x32e498: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x32e498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_32e49c:
    // 0x32e49c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x32e49cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_32e4a0:
    // 0x32e4a0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x32e4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_32e4a4:
    // 0x32e4a4: 0x8e0201ac  lw          $v0, 0x1AC($s0)
    ctx->pc = 0x32e4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
label_32e4a8:
    // 0x32e4a8: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
label_32e4ac:
    if (ctx->pc == 0x32E4ACu) {
        ctx->pc = 0x32E4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E4A8u;
        // 0x32e4ac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E4B0u;
        goto label_32e4b0;
    }
    ctx->pc = 0x32E4A8u;
    {
        const bool branch_taken_0x32e4a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x32E4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E4A8u;
        // 0x32e4ac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e4a8) {
            ctx->pc = 0x32E4BCu;
            goto label_32e4bc;
        }
    }
    ctx->pc = 0x32E4B0u;
label_32e4b0:
    // 0x32e4b0: 0x82030001  lb          $v1, 0x1($s0)
    ctx->pc = 0x32e4b0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_32e4b4:
    // 0x32e4b4: 0x54620054  bnel        $v1, $v0, . + 4 + (0x54 << 2)
label_32e4b8:
    if (ctx->pc == 0x32E4B8u) {
        ctx->pc = 0x32E4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E4B4u;
        // 0x32e4b8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E4BCu;
        goto label_32e4bc;
    }
    ctx->pc = 0x32E4B4u;
    {
        const bool branch_taken_0x32e4b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x32e4b4) {
            ctx->pc = 0x32E4B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32E4B4u;
            // 0x32e4b8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32E608u;
            goto label_32e608;
        }
    }
    ctx->pc = 0x32E4BCu;
label_32e4bc:
    // 0x32e4bc: 0x8e020270  lw          $v0, 0x270($s0)
    ctx->pc = 0x32e4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
label_32e4c0:
    // 0x32e4c0: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_32e4c4:
    if (ctx->pc == 0x32E4C4u) {
        ctx->pc = 0x32E4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E4C0u;
        // 0x32e4c4: 0x8e0201bc  lw          $v0, 0x1BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E4C8u;
        goto label_32e4c8;
    }
    ctx->pc = 0x32E4C0u;
    {
        const bool branch_taken_0x32e4c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e4c0) {
            ctx->pc = 0x32E4C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32E4C0u;
            // 0x32e4c4: 0x8e0201bc  lw          $v0, 0x1BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32E4F8u;
            goto label_32e4f8;
        }
    }
    ctx->pc = 0x32E4C8u;
label_32e4c8:
    // 0x32e4c8: 0xc0cbd3c  jal         func_32F4F0
label_32e4cc:
    if (ctx->pc == 0x32E4CCu) {
        ctx->pc = 0x32E4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E4C8u;
        // 0x32e4cc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E4D0u;
        goto label_32e4d0;
    }
    ctx->pc = 0x32E4C8u;
    SET_GPR_U32(ctx, 31, 0x32E4D0u);
    ctx->pc = 0x32E4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E4C8u;
    // 0x32e4cc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F4F0u, 0x32E4C8u, 0x32E4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E4D0u;
label_32e4d0:
    // 0x32e4d0: 0x8e030270  lw          $v1, 0x270($s0)
    ctx->pc = 0x32e4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
label_32e4d4:
    // 0x32e4d4: 0x8e040274  lw          $a0, 0x274($s0)
    ctx->pc = 0x32e4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
label_32e4d8:
    // 0x32e4d8: 0x2446ffff  addiu       $a2, $v0, -0x1
    ctx->pc = 0x32e4d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_32e4dc:
    // 0x32e4dc: 0x60f809  jalr        $v1
label_32e4e0:
    if (ctx->pc == 0x32E4E0u) {
        ctx->pc = 0x32E4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E4DCu;
        // 0x32e4e0: 0x8e0501bc  lw          $a1, 0x1BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E4E4u;
        goto label_32e4e4;
    }
    ctx->pc = 0x32E4DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x32E4E4u);
        ctx->pc = 0x32E4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E4DCu;
        // 0x32e4e0: 0x8e0501bc  lw          $a1, 0x1BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E4DCu, 0x32E4E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32E4E4u;
label_32e4e4:
    // 0x32e4e4: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
label_32e4e8:
    if (ctx->pc == 0x32E4E8u) {
        ctx->pc = 0x32E4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E4E4u;
        // 0x32e4e8: 0xae0201bc  sw          $v0, 0x1BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E4ECu;
        goto label_32e4ec;
    }
    ctx->pc = 0x32E4E4u;
    {
        const bool branch_taken_0x32e4e4 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x32E4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E4E4u;
        // 0x32e4e8: 0xae0201bc  sw          $v0, 0x1BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e4e4) {
            ctx->pc = 0x32E500u;
            goto label_32e500;
        }
    }
    ctx->pc = 0x32E4ECu;
label_32e4ec:
    // 0x32e4ec: 0xa20001b0  sb          $zero, 0x1B0($s0)
    ctx->pc = 0x32e4ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 432), (uint8_t)GPR_U32(ctx, 0));
label_32e4f0:
    // 0x32e4f0: 0x10000003  b           . + 4 + (0x3 << 2)
label_32e4f4:
    if (ctx->pc == 0x32E4F4u) {
        ctx->pc = 0x32E4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E4F0u;
        // 0x32e4f4: 0xa20001b1  sb          $zero, 0x1B1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 433), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E4F8u;
        goto label_32e4f8;
    }
    ctx->pc = 0x32E4F0u;
    {
        const bool branch_taken_0x32e4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E4F0u;
        // 0x32e4f4: 0xa20001b1  sb          $zero, 0x1B1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 433), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e4f0) {
            ctx->pc = 0x32E500u;
            goto label_32e500;
        }
    }
    ctx->pc = 0x32E4F8u;
label_32e4f8:
    // 0x32e4f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32e4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_32e4fc:
    // 0x32e4fc: 0xae0201bc  sw          $v0, 0x1BC($s0)
    ctx->pc = 0x32e4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 2));
label_32e500:
    // 0x32e500: 0x820301b0  lb          $v1, 0x1B0($s0)
    ctx->pc = 0x32e500u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
label_32e504:
    // 0x32e504: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32e504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32e508:
    // 0x32e508: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
label_32e50c:
    if (ctx->pc == 0x32E50Cu) {
        ctx->pc = 0x32E50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E508u;
        // 0x32e50c: 0x821201b1  lb          $s2, 0x1B1($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 433)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E510u;
        goto label_32e510;
    }
    ctx->pc = 0x32E508u;
    {
        const bool branch_taken_0x32e508 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x32e508) {
            ctx->pc = 0x32E50Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32E508u;
            // 0x32e50c: 0x821201b1  lb          $s2, 0x1B1($s0) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 433)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32E534u;
            goto label_32e534;
        }
    }
    ctx->pc = 0x32E510u;
label_32e510:
    // 0x32e510: 0x8e0201bc  lw          $v0, 0x1BC($s0)
    ctx->pc = 0x32e510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
label_32e514:
    // 0x32e514: 0x8e0301c8  lw          $v1, 0x1C8($s0)
    ctx->pc = 0x32e514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 456)));
label_32e518:
    // 0x32e518: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x32e518u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_32e51c:
    // 0x32e51c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_32e520:
    if (ctx->pc == 0x32E520u) {
        ctx->pc = 0x32E520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E51Cu;
        // 0x32e520: 0x821201b1  lb          $s2, 0x1B1($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 433)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E524u;
        goto label_32e524;
    }
    ctx->pc = 0x32E51Cu;
    {
        const bool branch_taken_0x32e51c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32e51c) {
            ctx->pc = 0x32E520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32E51Cu;
            // 0x32e520: 0x821201b1  lb          $s2, 0x1B1($s0) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 433)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32E530u;
            goto label_32e530;
        }
    }
    ctx->pc = 0x32E524u;
label_32e524:
    // 0x32e524: 0x8e0201c4  lw          $v0, 0x1C4($s0)
    ctx->pc = 0x32e524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 452)));
label_32e528:
    // 0x32e528: 0xae0201bc  sw          $v0, 0x1BC($s0)
    ctx->pc = 0x32e528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 2));
label_32e52c:
    // 0x32e52c: 0x821201b1  lb          $s2, 0x1B1($s0)
    ctx->pc = 0x32e52cu;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 433)));
label_32e530:
    // 0x32e530: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32e530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32e534:
    // 0x32e534: 0x56420034  bnel        $s2, $v0, . + 4 + (0x34 << 2)
label_32e538:
    if (ctx->pc == 0x32E538u) {
        ctx->pc = 0x32E538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E534u;
        // 0x32e538: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E53Cu;
        goto label_32e53c;
    }
    ctx->pc = 0x32E534u;
    {
        const bool branch_taken_0x32e534 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x32e534) {
            ctx->pc = 0x32E538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32E534u;
            // 0x32e538: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32E608u;
            goto label_32e608;
        }
    }
    ctx->pc = 0x32E53Cu;
label_32e53c:
    // 0x32e53c: 0xc0cbd3c  jal         func_32F4F0
label_32e540:
    if (ctx->pc == 0x32E540u) {
        ctx->pc = 0x32E540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E53Cu;
        // 0x32e540: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E544u;
        goto label_32e544;
    }
    ctx->pc = 0x32E53Cu;
    SET_GPR_U32(ctx, 31, 0x32E544u);
    ctx->pc = 0x32E540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E53Cu;
    // 0x32e540: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F4F0u, 0x32E53Cu, 0x32E544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E544u;
label_32e544:
    // 0x32e544: 0x8e0301bc  lw          $v1, 0x1BC($s0)
    ctx->pc = 0x32e544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
label_32e548:
    // 0x32e548: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x32e548u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_32e54c:
    // 0x32e54c: 0x5060002e  beql        $v1, $zero, . + 4 + (0x2E << 2)
label_32e550:
    if (ctx->pc == 0x32E550u) {
        ctx->pc = 0x32E550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E54Cu;
        // 0x32e550: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E554u;
        goto label_32e554;
    }
    ctx->pc = 0x32E54Cu;
    {
        const bool branch_taken_0x32e54c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e54c) {
            ctx->pc = 0x32E550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32E54Cu;
            // 0x32e550: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32E608u;
            goto label_32e608;
        }
    }
    ctx->pc = 0x32E554u;
label_32e554:
    // 0x32e554: 0xc0cff1c  jal         func_33FC70
label_32e558:
    if (ctx->pc == 0x32E558u) {
        ctx->pc = 0x32E55Cu;
        goto label_32e55c;
    }
    ctx->pc = 0x32E554u;
    SET_GPR_U32(ctx, 31, 0x32E55Cu);
    ctx->pc = 0x33FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FC70u, 0x32E554u, 0x32E55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E55Cu;
label_32e55c:
    // 0x32e55c: 0x8e1101bc  lw          $s1, 0x1BC($s0)
    ctx->pc = 0x32e55cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
label_32e560:
    // 0x32e560: 0xc0cbd5c  jal         func_32F570
label_32e564:
    if (ctx->pc == 0x32E564u) {
        ctx->pc = 0x32E564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E560u;
        // 0x32e564: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E568u;
        goto label_32e568;
    }
    ctx->pc = 0x32E560u;
    SET_GPR_U32(ctx, 31, 0x32E568u);
    ctx->pc = 0x32E564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E560u;
    // 0x32e564: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F570u, 0x32E560u, 0x32E568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E568u;
label_32e568:
    // 0x32e568: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_32e56c:
    if (ctx->pc == 0x32E56Cu) {
        ctx->pc = 0x32E56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E568u;
        // 0x32e56c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E570u;
        goto label_32e570;
    }
    ctx->pc = 0x32E568u;
    {
        const bool branch_taken_0x32e568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e568) {
            ctx->pc = 0x32E56Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32E568u;
            // 0x32e56c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32E580u;
            goto label_32e580;
        }
    }
    ctx->pc = 0x32E570u;
label_32e570:
    // 0x32e570: 0x5052001b  beql        $v0, $s2, . + 4 + (0x1B << 2)
label_32e574:
    if (ctx->pc == 0x32E574u) {
        ctx->pc = 0x32E574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E570u;
        // 0x32e574: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E578u;
        goto label_32e578;
    }
    ctx->pc = 0x32E570u;
    {
        const bool branch_taken_0x32e570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x32e570) {
            ctx->pc = 0x32E574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32E570u;
            // 0x32e574: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32E5E0u;
            goto label_32e5e0;
        }
    }
    ctx->pc = 0x32E578u;
label_32e578:
    // 0x32e578: 0x10000020  b           . + 4 + (0x20 << 2)
label_32e57c:
    if (ctx->pc == 0x32E57Cu) {
        ctx->pc = 0x32E580u;
        goto label_32e580;
    }
    ctx->pc = 0x32E578u;
    {
        const bool branch_taken_0x32e578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e578) {
            ctx->pc = 0x32E5FCu;
            goto label_32e5fc;
        }
    }
    ctx->pc = 0x32E580u;
label_32e580:
    // 0x32e580: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x32e580u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_32e584:
    // 0x32e584: 0x27a70004  addiu       $a3, $sp, 0x4
    ctx->pc = 0x32e584u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_32e588:
    // 0x32e588: 0xc0cbd3e  jal         func_32F4F8
label_32e58c:
    if (ctx->pc == 0x32E58Cu) {
        ctx->pc = 0x32E58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E588u;
        // 0x32e58c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E590u;
        goto label_32e590;
    }
    ctx->pc = 0x32E588u;
    SET_GPR_U32(ctx, 31, 0x32E590u);
    ctx->pc = 0x32E58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E588u;
    // 0x32e58c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F4F8u, 0x32E588u, 0x32E590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E590u;
label_32e590:
    // 0x32e590: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x32e590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_32e594:
    // 0x32e594: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x32e594u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_32e598:
    // 0x32e598: 0x24a307ff  addiu       $v1, $a1, 0x7FF
    ctx->pc = 0x32e598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 2047));
label_32e59c:
    // 0x32e59c: 0x28a20000  slti        $v0, $a1, 0x0
    ctx->pc = 0x32e59cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
label_32e5a0:
    // 0x32e5a0: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x32e5a0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_32e5a4:
    // 0x32e5a4: 0xc0ca036  jal         func_3280D8
label_32e5a8:
    if (ctx->pc == 0x32E5A8u) {
        ctx->pc = 0x32E5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E5A4u;
        // 0x32e5a8: 0x52ac3  sra         $a1, $a1, 11 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E5ACu;
        goto label_32e5ac;
    }
    ctx->pc = 0x32E5A4u;
    SET_GPR_U32(ctx, 31, 0x32E5ACu);
    ctx->pc = 0x32E5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E5A4u;
    // 0x32e5a8: 0x52ac3  sra         $a1, $a1, 11 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3280D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3280D8u, 0x32E5A4u, 0x32E5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E5ACu;
label_32e5ac:
    // 0x32e5ac: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x32e5acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_32e5b0:
    // 0x32e5b0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x32e5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_32e5b4:
    // 0x32e5b4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x32e5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_32e5b8:
    // 0x32e5b8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x32e5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_32e5bc:
    // 0x32e5bc: 0x24a307ff  addiu       $v1, $a1, 0x7FF
    ctx->pc = 0x32e5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 2047));
label_32e5c0:
    // 0x32e5c0: 0x28a20000  slti        $v0, $a1, 0x0
    ctx->pc = 0x32e5c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
label_32e5c4:
    // 0x32e5c4: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x32e5c4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_32e5c8:
    // 0x32e5c8: 0xc0ca112  jal         func_328448
label_32e5cc:
    if (ctx->pc == 0x32E5CCu) {
        ctx->pc = 0x32E5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E5C8u;
        // 0x32e5cc: 0x52ac3  sra         $a1, $a1, 11 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E5D0u;
        goto label_32e5d0;
    }
    ctx->pc = 0x32E5C8u;
    SET_GPR_U32(ctx, 31, 0x32E5D0u);
    ctx->pc = 0x32E5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E5C8u;
    // 0x32e5cc: 0x52ac3  sra         $a1, $a1, 11 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328448u, 0x32E5C8u, 0x32E5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E5D0u;
label_32e5d0:
    // 0x32e5d0: 0xc0ca072  jal         func_3281C8
label_32e5d4:
    if (ctx->pc == 0x32E5D4u) {
        ctx->pc = 0x32E5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E5D0u;
        // 0x32e5d4: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E5D8u;
        goto label_32e5d8;
    }
    ctx->pc = 0x32E5D0u;
    SET_GPR_U32(ctx, 31, 0x32E5D8u);
    ctx->pc = 0x32E5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E5D0u;
    // 0x32e5d4: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3281C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3281C8u, 0x32E5D0u, 0x32E5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E5D8u;
label_32e5d8:
    // 0x32e5d8: 0x10000008  b           . + 4 + (0x8 << 2)
label_32e5dc:
    if (ctx->pc == 0x32E5DCu) {
        ctx->pc = 0x32E5E0u;
        goto label_32e5e0;
    }
    ctx->pc = 0x32E5D8u;
    {
        const bool branch_taken_0x32e5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e5d8) {
            ctx->pc = 0x32E5FCu;
            goto label_32e5fc;
        }
    }
    ctx->pc = 0x32E5E0u;
label_32e5e0:
    // 0x32e5e0: 0xc0ca036  jal         func_3280D8
label_32e5e4:
    if (ctx->pc == 0x32E5E4u) {
        ctx->pc = 0x32E5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E5E0u;
        // 0x32e5e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E5E8u;
        goto label_32e5e8;
    }
    ctx->pc = 0x32E5E0u;
    SET_GPR_U32(ctx, 31, 0x32E5E8u);
    ctx->pc = 0x32E5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E5E0u;
    // 0x32e5e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3280D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3280D8u, 0x32E5E0u, 0x32E5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E5E8u;
label_32e5e8:
    // 0x32e5e8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x32e5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_32e5ec:
    // 0x32e5ec: 0xc0ca112  jal         func_328448
label_32e5f0:
    if (ctx->pc == 0x32E5F0u) {
        ctx->pc = 0x32E5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E5ECu;
        // 0x32e5f0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E5F4u;
        goto label_32e5f4;
    }
    ctx->pc = 0x32E5ECu;
    SET_GPR_U32(ctx, 31, 0x32E5F4u);
    ctx->pc = 0x32E5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E5ECu;
    // 0x32e5f0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328448u, 0x32E5ECu, 0x32E5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E5F4u;
label_32e5f4:
    // 0x32e5f4: 0xc0ca072  jal         func_3281C8
label_32e5f8:
    if (ctx->pc == 0x32E5F8u) {
        ctx->pc = 0x32E5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E5F4u;
        // 0x32e5f8: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E5FCu;
        goto label_32e5fc;
    }
    ctx->pc = 0x32E5F4u;
    SET_GPR_U32(ctx, 31, 0x32E5FCu);
    ctx->pc = 0x32E5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E5F4u;
    // 0x32e5f8: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3281C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3281C8u, 0x32E5F4u, 0x32E5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E5FCu;
label_32e5fc:
    // 0x32e5fc: 0xc0cff22  jal         func_33FC88
label_32e600:
    if (ctx->pc == 0x32E600u) {
        ctx->pc = 0x32E604u;
        goto label_32e604;
    }
    ctx->pc = 0x32E5FCu;
    SET_GPR_U32(ctx, 31, 0x32E604u);
    ctx->pc = 0x33FC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FC88u, 0x32E5FCu, 0x32E604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E604u;
label_32e604:
    // 0x32e604: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x32e604u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_32e608:
    // 0x32e608: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x32e608u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_32e60c:
    // 0x32e60c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x32e60cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_32e610:
    // 0x32e610: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x32e610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_32e614:
    // 0x32e614: 0x3e00008  jr          $ra
label_32e618:
    if (ctx->pc == 0x32E618u) {
        ctx->pc = 0x32E618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E614u;
        // 0x32e618: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E61Cu;
        goto label_32e61c;
    }
    ctx->pc = 0x32E614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32E618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E614u;
        // 0x32e618: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E61Cu;
label_32e61c:
    // 0x32e61c: 0x0  nop
    ctx->pc = 0x32e61cu;
    // NOP
    ctx->pc = 0x32e620u;
}
