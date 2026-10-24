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

// Function: func_0037E4C0
// Address: 0x37e4c0 - 0x37e670
void func_0037E4C0_0x37e4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037E4C0_0x37e4c0");
#endif

    switch (ctx->pc) {
        case 0x37e4fcu: goto label_37e4fc;
        default: break;
    }

    ctx->pc = 0x37e4c0u;

    // 0x37e4c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x37e4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37e4c4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x37e4c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37e4c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37e4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37e4cc: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x37e4ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37e4d0: 0x8cc40010  lw          $a0, 0x10($a2)
    ctx->pc = 0x37e4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x37e4d4: 0x8ce30034  lw          $v1, 0x34($a3)
    ctx->pc = 0x37e4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x37e4d8: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x37e4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x37e4dc: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x37e4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x37e4e0: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x37e4e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x37e4e4: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x37e4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x37e4e8: 0x228c3  sra         $a1, $v0, 3
    ctx->pc = 0x37e4e8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 3));
    // 0x37e4ec: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x37E4ECu;
    {
        const bool branch_taken_0x37e4ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E4ECu;
        // 0x37e4f0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e4ec) {
            ctx->pc = 0x37E504u;
            goto label_37e504;
        }
    }
    ctx->pc = 0x37E4F4u;
    // 0x37e4f4: 0xc0df99c  jal         func_37E670
    ctx->pc = 0x37E4F4u;
    SET_GPR_U32(ctx, 31, 0x37E4FCu);
    ctx->pc = 0x37E4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E4F4u;
    // 0x37e4f8: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37E670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37E670u, 0x37E4F4u, 0x37E4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E4FCu;
label_37e4fc:
    // 0x37e4fc: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x37E4FCu;
    {
        const bool branch_taken_0x37e4fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E4FCu;
        // 0x37e500: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e4fc) {
            ctx->pc = 0x37E668u;
            goto label_37e668;
        }
    }
    ctx->pc = 0x37E504u;
label_37e504:
    // 0x37e504: 0x8ce20038  lw          $v0, 0x38($a3)
    ctx->pc = 0x37e504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x37e508: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x37e508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x37e50c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x37E50Cu;
    {
        const bool branch_taken_0x37e50c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37e50c) {
            ctx->pc = 0x37E510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37E50Cu;
            // 0x37e510: 0x8ce20038  lw          $v0, 0x38($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37E52Cu;
            goto label_37e52c;
        }
    }
    ctx->pc = 0x37E514u;
    // 0x37e514: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x37e514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x37e518: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x37E518u;
    {
        const bool branch_taken_0x37e518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37E51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E518u;
        // 0x37e51c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e518) {
            ctx->pc = 0x37E524u;
            goto label_37e524;
        }
    }
    ctx->pc = 0x37E520u;
    // 0x37e520: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x37e520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_37e524:
    // 0x37e524: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x37e524u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x37e528: 0x8ce20038  lw          $v0, 0x38($a3)
    ctx->pc = 0x37e528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
label_37e52c:
    // 0x37e52c: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x37e52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x37e530: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x37E530u;
    {
        const bool branch_taken_0x37e530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E530u;
        // 0x37e534: 0x2482ffff  addiu       $v0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e530) {
            ctx->pc = 0x37E554u;
            goto label_37e554;
        }
    }
    ctx->pc = 0x37E538u;
    // 0x37e538: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x37e538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x37e53c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x37e53cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x37e540: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x37E540u;
    {
        const bool branch_taken_0x37e540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E540u;
        // 0x37e544: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e540) {
            ctx->pc = 0x37E550u;
            goto label_37e550;
        }
    }
    ctx->pc = 0x37E548u;
    // 0x37e548: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x37E548u;
    {
        const bool branch_taken_0x37e548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E548u;
        // 0x37e54c: 0xacc2000c  sw          $v0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e548) {
            ctx->pc = 0x37E554u;
            goto label_37e554;
        }
    }
    ctx->pc = 0x37E550u;
label_37e550:
    // 0x37e550: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x37e550u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
label_37e554:
    // 0x37e554: 0x2c82000b  sltiu       $v0, $a0, 0xB
    ctx->pc = 0x37e554u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x37e558: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x37E558u;
    {
        const bool branch_taken_0x37e558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37E55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E558u;
        // 0x37e55c: 0x8ce20038  lw          $v0, 0x38($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e558) {
            ctx->pc = 0x37E5F8u;
            goto label_37e5f8;
        }
    }
    ctx->pc = 0x37E560u;
    // 0x37e560: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x37e560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x37e564: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x37E564u;
    {
        const bool branch_taken_0x37e564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37e564) {
            ctx->pc = 0x37E568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37E564u;
            // 0x37e568: 0x8ce20038  lw          $v0, 0x38($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37E5B0u;
            goto label_37e5b0;
        }
    }
    ctx->pc = 0x37E56Cu;
    // 0x37e56c: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x37e56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x37e570: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x37e570u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x37e574: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37E574u;
    {
        const bool branch_taken_0x37e574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37E578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E574u;
        // 0x37e578: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e574) {
            ctx->pc = 0x37E588u;
            goto label_37e588;
        }
    }
    ctx->pc = 0x37E57Cu;
    // 0x37e57c: 0x2462fff6  addiu       $v0, $v1, -0xA
    ctx->pc = 0x37e57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967286));
    // 0x37e580: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x37E580u;
    {
        const bool branch_taken_0x37e580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E580u;
        // 0x37e584: 0xacc20008  sw          $v0, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e580) {
            ctx->pc = 0x37E5A4u;
            goto label_37e5a4;
        }
    }
    ctx->pc = 0x37E588u;
label_37e588:
    // 0x37e588: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x37e588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x37e58c: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x37e58cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x37e590: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x37E590u;
    {
        const bool branch_taken_0x37e590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37e590) {
            ctx->pc = 0x37E594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37E590u;
            // 0x37e594: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x37E598u;
            goto label_37e598;
        }
    }
    ctx->pc = 0x37E598u;
label_37e598:
    // 0x37e598: 0x1812  mflo        $v1
    ctx->pc = 0x37e598u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x37e59c: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x37e59cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x37e5a0: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x37e5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_37e5a4:
    // 0x37e5a4: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x37e5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x37e5a8: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x37e5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x37e5ac: 0x8ce20038  lw          $v0, 0x38($a3)
    ctx->pc = 0x37e5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
label_37e5b0:
    // 0x37e5b0: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x37e5b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x37e5b4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x37E5B4u;
    {
        const bool branch_taken_0x37e5b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E5B4u;
        // 0x37e5b8: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e5b4) {
            ctx->pc = 0x37E5F4u;
            goto label_37e5f4;
        }
    }
    ctx->pc = 0x37E5BCu;
    // 0x37e5bc: 0xa2001b  divu        $zero, $a1, $v0
    ctx->pc = 0x37e5bcu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x37e5c0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x37E5C0u;
    {
        const bool branch_taken_0x37e5c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37e5c0) {
            ctx->pc = 0x37E5C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37E5C0u;
            // 0x37e5c4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x37E5C8u;
            goto label_37e5c8;
        }
    }
    ctx->pc = 0x37E5C8u;
label_37e5c8:
    // 0x37e5c8: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x37e5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x37e5cc: 0x1812  mflo        $v1
    ctx->pc = 0x37e5ccu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x37e5d0: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x37e5d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x37e5d4: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x37e5d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x37e5d8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x37E5D8u;
    {
        const bool branch_taken_0x37e5d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E5D8u;
        // 0x37e5dc: 0x2482000a  addiu       $v0, $a0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e5d8) {
            ctx->pc = 0x37E5E8u;
            goto label_37e5e8;
        }
    }
    ctx->pc = 0x37E5E0u;
    // 0x37e5e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x37E5E0u;
    {
        const bool branch_taken_0x37e5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E5E0u;
        // 0x37e5e4: 0xacc20008  sw          $v0, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e5e0) {
            ctx->pc = 0x37E5ECu;
            goto label_37e5ec;
        }
    }
    ctx->pc = 0x37E5E8u;
label_37e5e8:
    // 0x37e5e8: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x37e5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
label_37e5ec:
    // 0x37e5ec: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x37e5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x37e5f0: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x37e5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_37e5f4:
    // 0x37e5f4: 0x8ce20038  lw          $v0, 0x38($a3)
    ctx->pc = 0x37e5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
label_37e5f8:
    // 0x37e5f8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x37e5f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x37e5fc: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x37E5FCu;
    {
        const bool branch_taken_0x37e5fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37e5fc) {
            ctx->pc = 0x37E600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37E5FCu;
            // 0x37e600: 0x8ce20038  lw          $v0, 0x38($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37E61Cu;
            goto label_37e61c;
        }
    }
    ctx->pc = 0x37E604u;
    // 0x37e604: 0x90c20005  lbu         $v0, 0x5($a2)
    ctx->pc = 0x37e604u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 5)));
    // 0x37e608: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x37E608u;
    {
        const bool branch_taken_0x37e608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37E60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E608u;
        // 0x37e60c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e608) {
            ctx->pc = 0x37E614u;
            goto label_37e614;
        }
    }
    ctx->pc = 0x37E610u;
    // 0x37e610: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x37e610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_37e614:
    // 0x37e614: 0xa0c20005  sb          $v0, 0x5($a2)
    ctx->pc = 0x37e614u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x37e618: 0x8ce20038  lw          $v0, 0x38($a3)
    ctx->pc = 0x37e618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
label_37e61c:
    // 0x37e61c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x37e61cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x37e620: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x37E620u;
    {
        const bool branch_taken_0x37e620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37e620) {
            ctx->pc = 0x37E624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37E620u;
            // 0x37e624: 0x8cc3000c  lw          $v1, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37E648u;
            goto label_37e648;
        }
    }
    ctx->pc = 0x37E628u;
    // 0x37e628: 0x90c30005  lbu         $v1, 0x5($a2)
    ctx->pc = 0x37e628u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 5)));
    // 0x37e62c: 0x2c620009  sltiu       $v0, $v1, 0x9
    ctx->pc = 0x37e62cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x37e630: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x37E630u;
    {
        const bool branch_taken_0x37e630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E630u;
        // 0x37e634: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e630) {
            ctx->pc = 0x37E640u;
            goto label_37e640;
        }
    }
    ctx->pc = 0x37E638u;
    // 0x37e638: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x37E638u;
    {
        const bool branch_taken_0x37e638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E638u;
        // 0x37e63c: 0xa0c20005  sb          $v0, 0x5($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 5), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e638) {
            ctx->pc = 0x37E644u;
            goto label_37e644;
        }
    }
    ctx->pc = 0x37E640u;
label_37e640:
    // 0x37e640: 0xa0c00005  sb          $zero, 0x5($a2)
    ctx->pc = 0x37e640u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 5), (uint8_t)GPR_U32(ctx, 0));
label_37e644:
    // 0x37e644: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x37e644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_37e648:
    // 0x37e648: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x37e648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x37e64c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x37E64Cu;
    {
        const bool branch_taken_0x37e64c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37e64c) {
            ctx->pc = 0x37E650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37E64Cu;
            // 0x37e650: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x37E654u;
            goto label_37e654;
        }
    }
    ctx->pc = 0x37E654u;
label_37e654:
    // 0x37e654: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x37e654u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x37e658: 0x1812  mflo        $v1
    ctx->pc = 0x37e658u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x37e65c: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x37e65cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x37e660: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x37e660u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x37e664: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37e664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_37e668:
    // 0x37e668: 0x3e00008  jr          $ra
    ctx->pc = 0x37E668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37E66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E668u;
        // 0x37e66c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37E668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37E670u;
}
