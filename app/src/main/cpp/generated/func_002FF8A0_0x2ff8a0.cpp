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

// Function: func_002FF8A0
// Address: 0x2ff8a0 - 0x2ffa68
void func_002FF8A0_0x2ff8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002FF8A0_0x2ff8a0");
#endif

    switch (ctx->pc) {
        case 0x2ffa0cu: goto label_2ffa0c;
        case 0x2ffa28u: goto label_2ffa28;
        case 0x2ffa44u: goto label_2ffa44;
        default: break;
    }

    ctx->pc = 0x2ff8a0u;

    // 0x2ff8a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2ff8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2ff8a4: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x2ff8a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff8a8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2ff8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2ff8ac: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x2ff8acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x2ff8b0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2ff8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2ff8b4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2ff8b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff8b8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2ff8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2ff8bc: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x2ff8bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ff8c0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2ff8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2ff8c4: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2ff8c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff8c8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2ff8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x2ff8cc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2ff8ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff8d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ff8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ff8d4: 0x8d22011c  lw          $v0, 0x11C($t1)
    ctx->pc = 0x2ff8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 284)));
    // 0x2ff8d8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ff8d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2ff8dc: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2FF8DCu;
    {
        const bool branch_taken_0x2ff8dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FF8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF8DCu;
        // 0x2ff8e0: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff8dc) {
            ctx->pc = 0x2FF960u;
            goto label_2ff960;
        }
    }
    ctx->pc = 0x2FF8E4u;
    // 0x2ff8e4: 0x91220101  lbu         $v0, 0x101($t1)
    ctx->pc = 0x2ff8e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 257)));
    // 0x2ff8e8: 0x24430002  addiu       $v1, $v0, 0x2
    ctx->pc = 0x2ff8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x2ff8ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ff8ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff8f0: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x2ff8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x2ff8f4: 0x31e03  sra         $v1, $v1, 24
    ctx->pc = 0x2ff8f4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
    // 0x2ff8f8: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x2ff8f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2ff8fc: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2FF8FCu;
    {
        const bool branch_taken_0x2ff8fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF8FCu;
        // 0x2ff900: 0x24110004  addiu       $s1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff8fc) {
            ctx->pc = 0x2FF97Cu;
            goto label_2ff97c;
        }
    }
    ctx->pc = 0x2FF904u;
    // 0x2ff904: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2ff904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x2ff908: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ff908u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ff90c: 0x2442fab0  addiu       $v0, $v0, -0x550
    ctx->pc = 0x2ff90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965936));
    // 0x2ff910: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ff910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ff914: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2ff914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ff918: 0x800008  jr          $a0
    ctx->pc = 0x2FF918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2FF920u: goto label_2ff920;
            case 0x2FF928u: goto label_2ff928;
            case 0x2FF930u: goto label_2ff930;
            case 0x2FF938u: goto label_2ff938;
            case 0x2FF940u: goto label_2ff940;
            case 0x2FF948u: goto label_2ff948;
            case 0x2FF954u: goto label_2ff954;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF918u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2FF920u;
label_2ff920:
    // 0x2ff920: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2FF920u;
    {
        const bool branch_taken_0x2ff920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF920u;
        // 0x2ff924: 0x2410000c  addiu       $s0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff920) {
            ctx->pc = 0x2FF97Cu;
            goto label_2ff97c;
        }
    }
    ctx->pc = 0x2FF928u;
label_2ff928:
    // 0x2ff928: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2FF928u;
    {
        const bool branch_taken_0x2ff928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF928u;
        // 0x2ff92c: 0x2410000b  addiu       $s0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff928) {
            ctx->pc = 0x2FF97Cu;
            goto label_2ff97c;
        }
    }
    ctx->pc = 0x2FF930u;
label_2ff930:
    // 0x2ff930: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2FF930u;
    {
        const bool branch_taken_0x2ff930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF930u;
        // 0x2ff934: 0x2410000a  addiu       $s0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff930) {
            ctx->pc = 0x2FF97Cu;
            goto label_2ff97c;
        }
    }
    ctx->pc = 0x2FF938u;
label_2ff938:
    // 0x2ff938: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2FF938u;
    {
        const bool branch_taken_0x2ff938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF938u;
        // 0x2ff93c: 0x24100009  addiu       $s0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff938) {
            ctx->pc = 0x2FF97Cu;
            goto label_2ff97c;
        }
    }
    ctx->pc = 0x2FF940u;
label_2ff940:
    // 0x2ff940: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2FF940u;
    {
        const bool branch_taken_0x2ff940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF940u;
        // 0x2ff944: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff940) {
            ctx->pc = 0x2FF97Cu;
            goto label_2ff97c;
        }
    }
    ctx->pc = 0x2FF948u;
label_2ff948:
    // 0x2ff948: 0x24110006  addiu       $s1, $zero, 0x6
    ctx->pc = 0x2ff948u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2ff94c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2FF94Cu;
    {
        const bool branch_taken_0x2ff94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF94Cu;
        // 0x2ff950: 0x24100007  addiu       $s0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff94c) {
            ctx->pc = 0x2FF97Cu;
            goto label_2ff97c;
        }
    }
    ctx->pc = 0x2FF954u;
label_2ff954:
    // 0x2ff954: 0x24110006  addiu       $s1, $zero, 0x6
    ctx->pc = 0x2ff954u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2ff958: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2FF958u;
    {
        const bool branch_taken_0x2ff958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF958u;
        // 0x2ff95c: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff958) {
            ctx->pc = 0x2FF97Cu;
            goto label_2ff97c;
        }
    }
    ctx->pc = 0x2FF960u;
label_2ff960:
    // 0x2ff960: 0x2a0403fc  slti        $a0, $s0, 0x3FC
    ctx->pc = 0x2ff960u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1020) ? 1 : 0);
    // 0x2ff964: 0x240303fc  addiu       $v1, $zero, 0x3FC
    ctx->pc = 0x2ff964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1020));
    // 0x2ff968: 0x64800a  movz        $s0, $v1, $a0
    ctx->pc = 0x2ff968u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x2ff96c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2ff96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ff970: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x2ff970u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2ff974: 0x91250101  lbu         $a1, 0x101($t1)
    ctx->pc = 0x2ff974u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 257)));
    // 0x2ff978: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x2ff978u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_2ff97c:
    // 0x2ff97c: 0x8d24011c  lw          $a0, 0x11C($t1)
    ctx->pc = 0x2ff97cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 284)));
    // 0x2ff980: 0x30822000  andi        $v0, $a0, 0x2000
    ctx->pc = 0x2ff980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
    // 0x2ff984: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FF984u;
    {
        const bool branch_taken_0x2ff984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF984u;
        // 0x2ff988: 0x30824000  andi        $v0, $a0, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff984) {
            ctx->pc = 0x2FF9A4u;
            goto label_2ff9a4;
        }
    }
    ctx->pc = 0x2FF98Cu;
    // 0x2ff98c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FF98Cu;
    {
        const bool branch_taken_0x2ff98c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF98Cu;
        // 0x2ff990: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff98c) {
            ctx->pc = 0x2FF99Cu;
            goto label_2ff99c;
        }
    }
    ctx->pc = 0x2FF994u;
    // 0x2ff994: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2FF994u;
    {
        const bool branch_taken_0x2ff994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF994u;
        // 0x2ff998: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff994) {
            ctx->pc = 0x2FF9B4u;
            goto label_2ff9b4;
        }
    }
    ctx->pc = 0x2FF99Cu;
label_2ff99c:
    // 0x2ff99c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2FF99Cu;
    {
        const bool branch_taken_0x2ff99c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF99Cu;
        // 0x2ff9a0: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff99c) {
            ctx->pc = 0x2FF9B4u;
            goto label_2ff9b4;
        }
    }
    ctx->pc = 0x2FF9A4u;
label_2ff9a4:
    // 0x2ff9a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FF9A4u;
    {
        const bool branch_taken_0x2ff9a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF9A4u;
        // 0x2ff9a8: 0x51600  sll         $v0, $a1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff9a4) {
            ctx->pc = 0x2FF9B8u;
            goto label_2ff9b8;
        }
    }
    ctx->pc = 0x2FF9ACu;
    // 0x2ff9ac: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x2ff9acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ff9b0: 0x24100005  addiu       $s0, $zero, 0x5
    ctx->pc = 0x2ff9b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2ff9b4:
    // 0x2ff9b4: 0x51600  sll         $v0, $a1, 24
    ctx->pc = 0x2ff9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
label_2ff9b8:
    // 0x2ff9b8: 0x22603  sra         $a0, $v0, 24
    ctx->pc = 0x2ff9b8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2ff9bc: 0x28830003  slti        $v1, $a0, 0x3
    ctx->pc = 0x2ff9bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2ff9c0: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2FF9C0u;
    {
        const bool branch_taken_0x2ff9c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FF9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF9C0u;
        // 0x2ff9c4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff9c0) {
            ctx->pc = 0x2FF9F4u;
            goto label_2ff9f4;
        }
    }
    ctx->pc = 0x2FF9C8u;
    // 0x2ff9c8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2ff9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ff9cc: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FF9CCu;
    {
        const bool branch_taken_0x2ff9cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FF9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF9CCu;
        // 0x2ff9d0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff9cc) {
            ctx->pc = 0x2FF9E0u;
            goto label_2ff9e0;
        }
    }
    ctx->pc = 0x2FF9D4u;
    // 0x2ff9d4: 0x24110006  addiu       $s1, $zero, 0x6
    ctx->pc = 0x2ff9d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2ff9d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2FF9D8u;
    {
        const bool branch_taken_0x2ff9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF9D8u;
        // 0x2ff9dc: 0x24100007  addiu       $s0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff9d8) {
            ctx->pc = 0x2FF9F0u;
            goto label_2ff9f0;
        }
    }
    ctx->pc = 0x2FF9E0u;
label_2ff9e0:
    // 0x2ff9e0: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FF9E0u;
    {
        const bool branch_taken_0x2ff9e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FF9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF9E0u;
        // 0x2ff9e4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff9e0) {
            ctx->pc = 0x2FF9F4u;
            goto label_2ff9f4;
        }
    }
    ctx->pc = 0x2FF9E8u;
    // 0x2ff9e8: 0x24110006  addiu       $s1, $zero, 0x6
    ctx->pc = 0x2ff9e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2ff9ec: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x2ff9ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2ff9f0:
    // 0x2ff9f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ff9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ff9f4:
    // 0x2ff9f4: 0x16420006  bne         $s2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FF9F4u;
    {
        const bool branch_taken_0x2ff9f4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FF9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF9F4u;
        // 0x2ff9f8: 0x3c040075  lui         $a0, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff9f4) {
            ctx->pc = 0x2FFA10u;
            goto label_2ffa10;
        }
    }
    ctx->pc = 0x2FF9FCu;
    // 0x2ff9fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ff9fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffa00: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ffa00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffa04: 0xc0be988  jal         func_2FA620
    ctx->pc = 0x2FFA04u;
    SET_GPR_U32(ctx, 31, 0x2FFA0Cu);
    ctx->pc = 0x2FFA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFA04u;
    // 0x2ffa08: 0x24063c00  addiu       $a2, $zero, 0x3C00 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA620u, 0x2FFA04u, 0x2FFA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFA0Cu;
label_2ffa0c:
    // 0x2ffa0c: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x2ffa0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
label_2ffa10:
    // 0x2ffa10: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2ffa10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffa14: 0x24844c80  addiu       $a0, $a0, 0x4C80
    ctx->pc = 0x2ffa14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19584));
    // 0x2ffa18: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2ffa18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffa1c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2ffa1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffa20: 0xc0c6994  jal         func_31A650
    ctx->pc = 0x2FFA20u;
    SET_GPR_U32(ctx, 31, 0x2FFA28u);
    ctx->pc = 0x2FFA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFA20u;
    // 0x2ffa24: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A650u, 0x2FFA20u, 0x2FFA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFA28u;
label_2ffa28:
    // 0x2ffa28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ffa28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ffa2c: 0x56420006  bnel        $s2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FFA2Cu;
    {
        const bool branch_taken_0x2ffa2c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ffa2c) {
            ctx->pc = 0x2FFA30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FFA2Cu;
            // 0x2ffa30: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FFA48u;
            goto label_2ffa48;
        }
    }
    ctx->pc = 0x2FFA34u;
    // 0x2ffa34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ffa34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffa38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ffa38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffa3c: 0xc0be988  jal         func_2FA620
    ctx->pc = 0x2FFA3Cu;
    SET_GPR_U32(ctx, 31, 0x2FFA44u);
    ctx->pc = 0x2FFA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFA3Cu;
    // 0x2ffa40: 0x24063c00  addiu       $a2, $zero, 0x3C00 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA620u, 0x2FFA3Cu, 0x2FFA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFA44u;
label_2ffa44:
    // 0x2ffa44: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2ffa44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2ffa48:
    // 0x2ffa48: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2ffa48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ffa4c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2ffa4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ffa50: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2ffa50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ffa54: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2ffa54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ffa58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ffa58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ffa5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FFA5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FFA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFA5Cu;
        // 0x2ffa60: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FFA5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FFA64u;
    // 0x2ffa64: 0x0  nop
    ctx->pc = 0x2ffa64u;
    // NOP
    ctx->pc = 0x2ffa68u;
}
