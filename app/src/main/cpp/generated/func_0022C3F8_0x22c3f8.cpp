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

// Function: func_0022C3F8
// Address: 0x22c3f8 - 0x22cbc8
void func_0022C3F8_0x22c3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0022C3F8_0x22c3f8");
#endif

    switch (ctx->pc) {
        case 0x22c504u: goto label_22c504;
        case 0x22c514u: goto label_22c514;
        case 0x22c540u: goto label_22c540;
        case 0x22c584u: goto label_22c584;
        case 0x22c58cu: goto label_22c58c;
        case 0x22c598u: goto label_22c598;
        case 0x22c5a4u: goto label_22c5a4;
        case 0x22c5b0u: goto label_22c5b0;
        case 0x22c62cu: goto label_22c62c;
        case 0x22c644u: goto label_22c644;
        case 0x22c654u: goto label_22c654;
        case 0x22c694u: goto label_22c694;
        case 0x22c6a4u: goto label_22c6a4;
        case 0x22c6b0u: goto label_22c6b0;
        case 0x22c6bcu: goto label_22c6bc;
        case 0x22c6fcu: goto label_22c6fc;
        case 0x22c754u: goto label_22c754;
        case 0x22c764u: goto label_22c764;
        case 0x22c770u: goto label_22c770;
        case 0x22c77cu: goto label_22c77c;
        case 0x22c78cu: goto label_22c78c;
        case 0x22c794u: goto label_22c794;
        case 0x22c7d8u: goto label_22c7d8;
        case 0x22c7e8u: goto label_22c7e8;
        case 0x22c814u: goto label_22c814;
        case 0x22c828u: goto label_22c828;
        case 0x22c838u: goto label_22c838;
        case 0x22c84cu: goto label_22c84c;
        case 0x22c858u: goto label_22c858;
        case 0x22c8a4u: goto label_22c8a4;
        case 0x22c8b8u: goto label_22c8b8;
        case 0x22c8e0u: goto label_22c8e0;
        case 0x22c8ecu: goto label_22c8ec;
        case 0x22c920u: goto label_22c920;
        case 0x22c98cu: goto label_22c98c;
        case 0x22c994u: goto label_22c994;
        case 0x22c9a0u: goto label_22c9a0;
        case 0x22c9acu: goto label_22c9ac;
        case 0x22c9d8u: goto label_22c9d8;
        case 0x22c9e4u: goto label_22c9e4;
        case 0x22c9f8u: goto label_22c9f8;
        case 0x22ca00u: goto label_22ca00;
        case 0x22ca54u: goto label_22ca54;
        case 0x22ca5cu: goto label_22ca5c;
        case 0x22ca88u: goto label_22ca88;
        case 0x22ca90u: goto label_22ca90;
        case 0x22cad8u: goto label_22cad8;
        case 0x22cb08u: goto label_22cb08;
        case 0x22cb1cu: goto label_22cb1c;
        case 0x22cb2cu: goto label_22cb2c;
        case 0x22cb40u: goto label_22cb40;
        case 0x22cb4cu: goto label_22cb4c;
        case 0x22cb74u: goto label_22cb74;
        case 0x22cb7cu: goto label_22cb7c;
        case 0x22cb9cu: goto label_22cb9c;
        default: break;
    }

    ctx->pc = 0x22c3f8u;

    // 0x22c3f8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x22c3f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x22c3fc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x22c3fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x22c400: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x22c400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x22c404: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22c404u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c408: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x22c408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x22c40c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x22c40cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c410: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x22c410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x22c414: 0x24040214  addiu       $a0, $zero, 0x214
    ctx->pc = 0x22c414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 532));
    // 0x22c418: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x22c418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x22c41c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22c41cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22c420: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x22c420u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x22c424: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x22c424u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x22c428: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x22c428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x22c42c: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x22c42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x22c430: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x22c430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x22c434: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22C434u;
    {
        const bool branch_taken_0x22c434 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x22C438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C434u;
        // 0x22c438: 0xae2216d4  sw          $v0, 0x16D4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5844), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c434) {
            ctx->pc = 0x22C450u;
            goto label_22c450;
        }
    }
    ctx->pc = 0x22C43Cu;
    // 0x22c43c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x22c43cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x22c440: 0x244364f0  addiu       $v1, $v0, 0x64F0
    ctx->pc = 0x22c440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x22c444: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x22c444u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c448: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x22C448u;
    {
        const bool branch_taken_0x22c448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C448u;
        // 0x22c44c: 0x8c720564  lw          $s2, 0x564($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c448) {
            ctx->pc = 0x22C460u;
            goto label_22c460;
        }
    }
    ctx->pc = 0x22C450u;
label_22c450:
    // 0x22c450: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x22c450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x22c454: 0x244364f0  addiu       $v1, $v0, 0x64F0
    ctx->pc = 0x22c454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x22c458: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x22c458u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c45c: 0x8c720560  lw          $s2, 0x560($v1)
    ctx->pc = 0x22c45cu;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x586A50u));
label_22c460:
    // 0x22c460: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x22c460u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x22c464: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x22c464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x22c468: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22C468u;
    {
        const bool branch_taken_0x22c468 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22C46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C468u;
        // 0x22c46c: 0x268264f0  addiu       $v0, $s4, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 25840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c468) {
            ctx->pc = 0x22C480u;
            goto label_22c480;
        }
    }
    ctx->pc = 0x22C470u;
    // 0x22c470: 0x904305a2  lbu         $v1, 0x5A2($v0)
    ctx->pc = 0x22c470u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1442)));
    // 0x22c474: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x22C474u;
    {
        const bool branch_taken_0x22c474 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C474u;
        // 0x22c478: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c474) {
            ctx->pc = 0x22C480u;
            goto label_22c480;
        }
    }
    ctx->pc = 0x22C47Cu;
    // 0x22c47c: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x22c47cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_22c480:
    // 0x22c480: 0x5240000b  beql        $s2, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x22C480u;
    {
        const bool branch_taken_0x22c480 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c480) {
            ctx->pc = 0x22C484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C480u;
            // 0x22c484: 0x922302f6  lbu         $v1, 0x2F6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C4B0u;
            goto label_22c4b0;
        }
    }
    ctx->pc = 0x22C488u;
    // 0x22c488: 0xde4202f0  ld          $v0, 0x2F0($s2)
    ctx->pc = 0x22c488u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 752)));
    // 0x22c48c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x22c48cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x22c490: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x22c490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x22c494: 0x3404f000  ori         $a0, $zero, 0xF000
    ctx->pc = 0x22c494u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x22c498: 0x427b8  dsll        $a0, $a0, 30
    ctx->pc = 0x22c498u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 30);
    // 0x22c49c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x22c49cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22c4a0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x22c4a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x22c4a4: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x22c4a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x22c4a8: 0x2980b  movn        $s3, $zero, $v0
    ctx->pc = 0x22c4a8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
    // 0x22c4ac: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x22c4acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_22c4b0:
    // 0x22c4b0: 0x2c62000e  sltiu       $v0, $v1, 0xE
    ctx->pc = 0x22c4b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
    // 0x22c4b4: 0x104001b1  beqz        $v0, . + 4 + (0x1B1 << 2)
    ctx->pc = 0x22C4B4u;
    {
        const bool branch_taken_0x22c4b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C4B4u;
        // 0x22c4b8: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c4b4) {
            ctx->pc = 0x22CB7Cu;
            goto label_22cb7c;
        }
    }
    ctx->pc = 0x22C4BCu;
    // 0x22c4bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22c4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22c4c0: 0x24428cb0  addiu       $v0, $v0, -0x7350
    ctx->pc = 0x22c4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937776));
    // 0x22c4c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22c4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22c4c8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22c4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22c4cc: 0x800008  jr          $a0
    ctx->pc = 0x22C4CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22C4D4u: goto label_22c4d4;
            case 0x22C558u: goto label_22c558;
            case 0x22C600u: goto label_22c600;
            case 0x22C66Cu: goto label_22c66c;
            case 0x22C6F0u: goto label_22c6f0;
            case 0x22C72Cu: goto label_22c72c;
            case 0x22C7C0u: goto label_22c7c0;
            case 0x22C820u: goto label_22c820;
            case 0x22C878u: goto label_22c878;
            case 0x22C8B0u: goto label_22c8b0;
            case 0x22C8F4u: goto label_22c8f4;
            case 0x22C938u: goto label_22c938;
            case 0x22CAB4u: goto label_22cab4;
            case 0x22CB14u: goto label_22cb14;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C4CCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x22C4D4u;
label_22c4d4:
    // 0x22c4d4: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x22c4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x22c4d8: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x22c4d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22c4dc: 0xa2201864  sb          $zero, 0x1864($s1)
    ctx->pc = 0x22c4dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x22c4e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22c4e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c4e4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22c4e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22c4e8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22c4e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c4ec: 0x8c4510c0  lw          $a1, 0x10C0($v0)
    ctx->pc = 0x22c4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4288)));
    // 0x22c4f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22c4f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c4f4: 0x8c4610c8  lw          $a2, 0x10C8($v0)
    ctx->pc = 0x22c4f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4296)));
    // 0x22c4f8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x22c4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x22c4fc: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x22C4FCu;
    SET_GPR_U32(ctx, 31, 0x22C504u);
    ctx->pc = 0x22C500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C4FCu;
    // 0x22c500: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x22C4FCu, 0x22C504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C504u;
label_22c504:
    // 0x22c504: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x22c504u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x22c508: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22c508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c50c: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x22C50Cu;
    SET_GPR_U32(ctx, 31, 0x22C514u);
    ctx->pc = 0x22C510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C50Cu;
    // 0x22c510: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x22C50Cu, 0x22C514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C514u;
label_22c514:
    // 0x22c514: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x22c514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x22c518: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22c518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c51c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x22c51cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x22c520: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22c520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22c524: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x22c524u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x22c528: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x22c528u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c52c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22c52cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c530: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22c530u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c534: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x22c534u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c538: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x22C538u;
    SET_GPR_U32(ctx, 31, 0x22C540u);
    ctx->pc = 0x22C53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C538u;
    // 0x22c53c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x22C538u, 0x22C540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C540u;
label_22c540:
    // 0x22c540: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x22c540u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x22c544: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x22c544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
    // 0x22c548: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22c548u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c54c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x22c54cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x22c550: 0xe6200600  swc1        $f0, 0x600($s1)
    ctx->pc = 0x22c550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    // 0x22c554: 0xa22302f6  sb          $v1, 0x2F6($s1)
    ctx->pc = 0x22c554u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 3));
label_22c558:
    // 0x22c558: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x22c558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22c55c: 0x26300580  addiu       $s0, $s1, 0x580
    ctx->pc = 0x22c55cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
    // 0x22c560: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x22c560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x22c564: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x22c564u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x22c568: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22c568u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22c56c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22c56cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c570: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22c570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c574: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22c574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22c578: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x22c578u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22c57c: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x22C57Cu;
    SET_GPR_U32(ctx, 31, 0x22C584u);
    ctx->pc = 0x22C580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C57Cu;
    // 0x22c580: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x22C57Cu, 0x22C584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C584u;
label_22c584:
    // 0x22c584: 0xc055f06  jal         func_157C18
    ctx->pc = 0x22C584u;
    SET_GPR_U32(ctx, 31, 0x22C58Cu);
    ctx->pc = 0x22C588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C584u;
    // 0x22c588: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x22C584u, 0x22C58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C58Cu;
label_22c58c:
    // 0x22c58c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22c58cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c590: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x22C590u;
    SET_GPR_U32(ctx, 31, 0x22C598u);
    ctx->pc = 0x22C594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C590u;
    // 0x22c594: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x22C590u, 0x22C598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C598u;
label_22c598:
    // 0x22c598: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22c598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c59c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x22C59Cu;
    SET_GPR_U32(ctx, 31, 0x22C5A4u);
    ctx->pc = 0x22C5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C59Cu;
    // 0x22c5a0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x22C59Cu, 0x22C5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C5A4u;
label_22c5a4:
    // 0x22c5a4: 0x8e2500f0  lw          $a1, 0xF0($s1)
    ctx->pc = 0x22c5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x22c5a8: 0xc07dfac  jal         func_1F7EB0
    ctx->pc = 0x22C5A8u;
    SET_GPR_U32(ctx, 31, 0x22C5B0u);
    ctx->pc = 0x22C5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C5A8u;
    // 0x22c5ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x22C5A8u, 0x22C5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C5B0u;
label_22c5b0:
    // 0x22c5b0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x22c5b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c5b4: 0x0  nop
    ctx->pc = 0x22c5b4u;
    // NOP
    // 0x22c5b8: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x22C5B8u;
    {
        const bool branch_taken_0x22c5b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22c5b8) {
            ctx->pc = 0x22C5BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C5B8u;
            // 0x22c5bc: 0xc6210600  lwc1        $f1, 0x600($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C5D0u;
            goto label_22c5d0;
        }
    }
    ctx->pc = 0x22C5C0u;
    // 0x22c5c0: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x22c5c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x22c5c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22c5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22c5c8: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x22c5c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x22c5cc: 0xc6210600  lwc1        $f1, 0x600($s1)
    ctx->pc = 0x22c5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22c5d0:
    // 0x22c5d0: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x22c5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22c5d4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x22c5d4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22c5d8: 0x1240006a  beqz        $s2, . + 4 + (0x6A << 2)
    ctx->pc = 0x22C5D8u;
    {
        const bool branch_taken_0x22c5d8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C5D8u;
        // 0x22c5dc: 0xe6210600  swc1        $f1, 0x600($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c5d8) {
            ctx->pc = 0x22C784u;
            goto label_22c784;
        }
    }
    ctx->pc = 0x22C5E0u;
    // 0x22c5e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22c5e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c5e4: 0x0  nop
    ctx->pc = 0x22c5e4u;
    // NOP
    // 0x22c5e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22c5e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c5ec: 0x0  nop
    ctx->pc = 0x22c5ecu;
    // NOP
    // 0x22c5f0: 0x45020163  bc1fl       . + 4 + (0x163 << 2)
    ctx->pc = 0x22C5F0u;
    {
        const bool branch_taken_0x22c5f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22c5f0) {
            ctx->pc = 0x22C5F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C5F0u;
            // 0x22c5f4: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22CB80u;
            goto label_22cb80;
        }
    }
    ctx->pc = 0x22C5F8u;
    // 0x22c5f8: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x22C5F8u;
    {
        const bool branch_taken_0x22c5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c5f8) {
            ctx->pc = 0x22C784u;
            goto label_22c784;
        }
    }
    ctx->pc = 0x22C600u;
label_22c600:
    // 0x22c600: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x22c600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x22c604: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22c604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c608: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22c608u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22c60c: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x22c60cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22c610: 0x8c451a98  lw          $a1, 0x1A98($v0)
    ctx->pc = 0x22c610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6808)));
    // 0x22c614: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22c614u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c618: 0x8c461a9c  lw          $a2, 0x1A9C($v0)
    ctx->pc = 0x22c618u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6812)));
    // 0x22c61c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22c61cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c620: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x22c620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x22c624: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x22C624u;
    SET_GPR_U32(ctx, 31, 0x22C62Cu);
    ctx->pc = 0x22C628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C624u;
    // 0x22c628: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x22C624u, 0x22C62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C62Cu;
label_22c62c:
    // 0x22c62c: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x22c62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x22c630: 0x24020214  addiu       $v0, $zero, 0x214
    ctx->pc = 0x22c630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 532));
    // 0x22c634: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22C634u;
    {
        const bool branch_taken_0x22c634 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22C638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C634u;
        // 0x22c638: 0x268464f0  addiu       $a0, $s4, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 25840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c634) {
            ctx->pc = 0x22C64Cu;
            goto label_22c64c;
        }
    }
    ctx->pc = 0x22C63Cu;
    // 0x22c63c: 0xc0a4dc6  jal         func_293718
    ctx->pc = 0x22C63Cu;
    SET_GPR_U32(ctx, 31, 0x22C644u);
    ctx->pc = 0x22C640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C63Cu;
    // 0x22c640: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293718u, 0x22C63Cu, 0x22C644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C644u;
label_22c644:
    // 0x22c644: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x22C644u;
    {
        const bool branch_taken_0x22c644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C644u;
        // 0x22c648: 0x922202f6  lbu         $v0, 0x2F6($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c644) {
            ctx->pc = 0x22C658u;
            goto label_22c658;
        }
    }
    ctx->pc = 0x22C64Cu;
label_22c64c:
    // 0x22c64c: 0xc0a4dc6  jal         func_293718
    ctx->pc = 0x22C64Cu;
    SET_GPR_U32(ctx, 31, 0x22C654u);
    ctx->pc = 0x22C650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C64Cu;
    // 0x22c650: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293718u, 0x22C64Cu, 0x22C654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C654u;
label_22c654:
    // 0x22c654: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x22c654u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_22c658:
    // 0x22c658: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x22c658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x22c65c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22c65cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c660: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22c660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22c664: 0xe6200600  swc1        $f0, 0x600($s1)
    ctx->pc = 0x22c664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    // 0x22c668: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x22c668u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_22c66c:
    // 0x22c66c: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x22C66Cu;
    {
        const bool branch_taken_0x22c66c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c66c) {
            ctx->pc = 0x22C694u;
            goto label_22c694;
        }
    }
    ctx->pc = 0x22C674u;
    // 0x22c674: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x22c674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22c678: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22c678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c67c: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x22c67cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x22c680: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x22c680u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x22c684: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22c684u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22c688: 0x8e4500f0  lw          $a1, 0xF0($s2)
    ctx->pc = 0x22c688u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x22c68c: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x22C68Cu;
    SET_GPR_U32(ctx, 31, 0x22C694u);
    ctx->pc = 0x22C690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C68Cu;
    // 0x22c690: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x22C68Cu, 0x22C694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C694u;
label_22c694:
    // 0x22c694: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22c694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22c698: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x22c698u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22c69c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x22C69Cu;
    SET_GPR_U32(ctx, 31, 0x22C6A4u);
    ctx->pc = 0x22C6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C69Cu;
    // 0x22c6a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x22C69Cu, 0x22C6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C6A4u;
label_22c6a4:
    // 0x22c6a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22c6a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c6a8: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x22C6A8u;
    SET_GPR_U32(ctx, 31, 0x22C6B0u);
    ctx->pc = 0x22C6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C6A8u;
    // 0x22c6ac: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x22C6A8u, 0x22C6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C6B0u;
label_22c6b0:
    // 0x22c6b0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22c6b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22c6b4: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x22C6B4u;
    SET_GPR_U32(ctx, 31, 0x22C6BCu);
    ctx->pc = 0x22C6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C6B4u;
    // 0x22c6b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x22C6B4u, 0x22C6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C6BCu;
label_22c6bc:
    // 0x22c6bc: 0xc6210600  lwc1        $f1, 0x600($s1)
    ctx->pc = 0x22c6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22c6c0: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x22c6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22c6c4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x22c6c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22c6c8: 0x1240002e  beqz        $s2, . + 4 + (0x2E << 2)
    ctx->pc = 0x22C6C8u;
    {
        const bool branch_taken_0x22c6c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C6C8u;
        // 0x22c6cc: 0xe6210600  swc1        $f1, 0x600($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c6c8) {
            ctx->pc = 0x22C784u;
            goto label_22c784;
        }
    }
    ctx->pc = 0x22C6D0u;
    // 0x22c6d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22c6d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c6d4: 0x0  nop
    ctx->pc = 0x22c6d4u;
    // NOP
    // 0x22c6d8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22c6d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c6dc: 0x0  nop
    ctx->pc = 0x22c6dcu;
    // NOP
    // 0x22c6e0: 0x45010028  bc1t        . + 4 + (0x28 << 2)
    ctx->pc = 0x22C6E0u;
    {
        const bool branch_taken_0x22c6e0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22C6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C6E0u;
        // 0x22c6e4: 0x268264f0  addiu       $v0, $s4, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 25840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c6e0) {
            ctx->pc = 0x22C784u;
            goto label_22c784;
        }
    }
    ctx->pc = 0x22C6E8u;
    // 0x22c6e8: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x22C6E8u;
    {
        const bool branch_taken_0x22c6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C6E8u;
        // 0x22c6ec: 0x904305a0  lbu         $v1, 0x5A0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c6e8) {
            ctx->pc = 0x22C860u;
            goto label_22c860;
        }
    }
    ctx->pc = 0x22C6F0u;
label_22c6f0:
    // 0x22c6f0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x22c6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x22c6f4: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x22C6F4u;
    SET_GPR_U32(ctx, 31, 0x22C6FCu);
    ctx->pc = 0x22C6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C6F4u;
    // 0x22c6f8: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x22C6F4u, 0x22C6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C6FCu;
label_22c6fc:
    // 0x22c6fc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x22c6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x22c700: 0x3c014234  lui         $at, 0x4234
    ctx->pc = 0x22c700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16948 << 16));
    // 0x22c704: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22c704u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c708: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22C708u;
    {
        const bool branch_taken_0x22c708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x22c708) {
            ctx->pc = 0x22C70Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C708u;
            // 0x22c70c: 0xe6200600  swc1        $f0, 0x600($s1) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C720u;
            goto label_22c720;
        }
    }
    ctx->pc = 0x22C710u;
    // 0x22c710: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x22c710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x22c714: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22c714u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c718: 0x0  nop
    ctx->pc = 0x22c718u;
    // NOP
    // 0x22c71c: 0xe6200600  swc1        $f0, 0x600($s1)
    ctx->pc = 0x22c71cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
label_22c720:
    // 0x22c720: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x22c720u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x22c724: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22c724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22c728: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x22c728u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_22c72c:
    // 0x22c72c: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x22C72Cu;
    {
        const bool branch_taken_0x22c72c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c72c) {
            ctx->pc = 0x22C754u;
            goto label_22c754;
        }
    }
    ctx->pc = 0x22C734u;
    // 0x22c734: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x22c734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22c738: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22c738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c73c: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x22c73cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x22c740: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x22c740u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x22c744: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22c744u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22c748: 0x8e4500f0  lw          $a1, 0xF0($s2)
    ctx->pc = 0x22c748u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x22c74c: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x22C74Cu;
    SET_GPR_U32(ctx, 31, 0x22C754u);
    ctx->pc = 0x22C750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C74Cu;
    // 0x22c750: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x22C74Cu, 0x22C754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C754u;
label_22c754:
    // 0x22c754: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22c754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22c758: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x22c758u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22c75c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x22C75Cu;
    SET_GPR_U32(ctx, 31, 0x22C764u);
    ctx->pc = 0x22C760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C75Cu;
    // 0x22c760: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x22C75Cu, 0x22C764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C764u;
label_22c764:
    // 0x22c764: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22c764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c768: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x22C768u;
    SET_GPR_U32(ctx, 31, 0x22C770u);
    ctx->pc = 0x22C76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C768u;
    // 0x22c76c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x22C768u, 0x22C770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C770u;
label_22c770:
    // 0x22c770: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22c770u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22c774: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x22C774u;
    SET_GPR_U32(ctx, 31, 0x22C77Cu);
    ctx->pc = 0x22C778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C774u;
    // 0x22c778: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x22C774u, 0x22C77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C77Cu;
label_22c77c:
    // 0x22c77c: 0x56400007  bnel        $s2, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x22C77Cu;
    {
        const bool branch_taken_0x22c77c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x22c77c) {
            ctx->pc = 0x22C780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C77Cu;
            // 0x22c780: 0xc6200600  lwc1        $f0, 0x600($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C79Cu;
            goto label_22c79c;
        }
    }
    ctx->pc = 0x22C784u;
label_22c784:
    // 0x22c784: 0xc0a4dca  jal         func_293728
    ctx->pc = 0x22C784u;
    SET_GPR_U32(ctx, 31, 0x22C78Cu);
    ctx->pc = 0x22C788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C784u;
    // 0x22c788: 0x268464f0  addiu       $a0, $s4, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293728u, 0x22C784u, 0x22C78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C78Cu;
label_22c78c:
    // 0x22c78c: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x22C78Cu;
    SET_GPR_U32(ctx, 31, 0x22C794u);
    ctx->pc = 0x22C790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C78Cu;
    // 0x22c790: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x22C78Cu, 0x22C794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C794u;
label_22c794:
    // 0x22c794: 0x100000fa  b           . + 4 + (0xFA << 2)
    ctx->pc = 0x22C794u;
    {
        const bool branch_taken_0x22c794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C794u;
        // 0x22c798: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c794) {
            ctx->pc = 0x22CB80u;
            goto label_22cb80;
        }
    }
    ctx->pc = 0x22C79Cu;
label_22c79c:
    // 0x22c79c: 0xc62105a8  lwc1        $f1, 0x5A8($s1)
    ctx->pc = 0x22c79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22c7a0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x22c7a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x22c7a4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x22c7a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x22c7a8: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x22c7a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c7ac: 0x0  nop
    ctx->pc = 0x22c7acu;
    // NOP
    // 0x22c7b0: 0x450000f2  bc1f        . + 4 + (0xF2 << 2)
    ctx->pc = 0x22C7B0u;
    {
        const bool branch_taken_0x22c7b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22C7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C7B0u;
        // 0x22c7b4: 0xe6200600  swc1        $f0, 0x600($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c7b0) {
            ctx->pc = 0x22CB7Cu;
            goto label_22cb7c;
        }
    }
    ctx->pc = 0x22C7B8u;
    // 0x22c7b8: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x22C7B8u;
    {
        const bool branch_taken_0x22c7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C7B8u;
        // 0x22c7bc: 0x922202f6  lbu         $v0, 0x2F6($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c7b8) {
            ctx->pc = 0x22C86Cu;
            goto label_22c86c;
        }
    }
    ctx->pc = 0x22C7C0u;
label_22c7c0:
    // 0x22c7c0: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x22c7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x22c7c4: 0x24020214  addiu       $v0, $zero, 0x214
    ctx->pc = 0x22c7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 532));
    // 0x22c7c8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22C7C8u;
    {
        const bool branch_taken_0x22c7c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22C7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C7C8u;
        // 0x22c7cc: 0x268464f0  addiu       $a0, $s4, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 25840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c7c8) {
            ctx->pc = 0x22C7E0u;
            goto label_22c7e0;
        }
    }
    ctx->pc = 0x22C7D0u;
    // 0x22c7d0: 0xc0a4dce  jal         func_293738
    ctx->pc = 0x22C7D0u;
    SET_GPR_U32(ctx, 31, 0x22C7D8u);
    ctx->pc = 0x22C7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C7D0u;
    // 0x22c7d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293738u, 0x22C7D0u, 0x22C7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C7D8u;
label_22c7d8:
    // 0x22c7d8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x22C7D8u;
    {
        const bool branch_taken_0x22c7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C7D8u;
        // 0x22c7dc: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c7d8) {
            ctx->pc = 0x22C7ECu;
            goto label_22c7ec;
        }
    }
    ctx->pc = 0x22C7E0u;
label_22c7e0:
    // 0x22c7e0: 0xc0a4dce  jal         func_293738
    ctx->pc = 0x22C7E0u;
    SET_GPR_U32(ctx, 31, 0x22C7E8u);
    ctx->pc = 0x22C7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C7E0u;
    // 0x22c7e4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293738u, 0x22C7E0u, 0x22C7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C7E8u;
label_22c7e8:
    // 0x22c7e8: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x22c7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_22c7ec:
    // 0x22c7ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22c7ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c7f0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22c7f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22c7f4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x22c7f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22c7f8: 0x8c451aa0  lw          $a1, 0x1AA0($v0)
    ctx->pc = 0x22c7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6816)));
    // 0x22c7fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22c7fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c800: 0x8c461aa4  lw          $a2, 0x1AA4($v0)
    ctx->pc = 0x22c800u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6820)));
    // 0x22c804: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22c804u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c808: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x22c808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x22c80c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x22C80Cu;
    SET_GPR_U32(ctx, 31, 0x22C814u);
    ctx->pc = 0x22C810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C80Cu;
    // 0x22c810: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x22C80Cu, 0x22C814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C814u;
label_22c814:
    // 0x22c814: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x22c814u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x22c818: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22c818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22c81c: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x22c81cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_22c820:
    // 0x22c820: 0xc055f06  jal         func_157C18
    ctx->pc = 0x22C820u;
    SET_GPR_U32(ctx, 31, 0x22C828u);
    ctx->pc = 0x22C824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C820u;
    // 0x22c824: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x22C820u, 0x22C828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C828u;
label_22c828:
    // 0x22c828: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22C828u;
    {
        const bool branch_taken_0x22c828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c828) {
            ctx->pc = 0x22C838u;
            goto label_22c838;
        }
    }
    ctx->pc = 0x22C830u;
    // 0x22c830: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x22C830u;
    SET_GPR_U32(ctx, 31, 0x22C838u);
    ctx->pc = 0x22C834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C830u;
    // 0x22c834: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x22C830u, 0x22C838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C838u;
label_22c838:
    // 0x22c838: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22c838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22c83c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x22c83cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22c840: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22c840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c844: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x22C844u;
    SET_GPR_U32(ctx, 31, 0x22C84Cu);
    ctx->pc = 0x22C848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C844u;
    // 0x22c848: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x22C844u, 0x22C84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C84Cu;
label_22c84c:
    // 0x22c84c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22c84cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22c850: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x22C850u;
    SET_GPR_U32(ctx, 31, 0x22C858u);
    ctx->pc = 0x22C854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C850u;
    // 0x22c854: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x22C850u, 0x22C858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C858u;
label_22c858:
    // 0x22c858: 0x268264f0  addiu       $v0, $s4, 0x64F0
    ctx->pc = 0x22c858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 25840));
    // 0x22c85c: 0x904305a1  lbu         $v1, 0x5A1($v0)
    ctx->pc = 0x22c85cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1441)));
label_22c860:
    // 0x22c860: 0x506000c7  beql        $v1, $zero, . + 4 + (0xC7 << 2)
    ctx->pc = 0x22C860u;
    {
        const bool branch_taken_0x22c860 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c860) {
            ctx->pc = 0x22C864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C860u;
            // 0x22c864: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22CB80u;
            goto label_22cb80;
        }
    }
    ctx->pc = 0x22C868u;
    // 0x22c868: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x22c868u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_22c86c:
    // 0x22c86c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22c86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22c870: 0x100000c2  b           . + 4 + (0xC2 << 2)
    ctx->pc = 0x22C870u;
    {
        const bool branch_taken_0x22c870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C870u;
        // 0x22c874: 0xa22202f6  sb          $v0, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c870) {
            ctx->pc = 0x22CB7Cu;
            goto label_22cb7c;
        }
    }
    ctx->pc = 0x22C878u;
label_22c878:
    // 0x22c878: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x22c878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x22c87c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22c87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c880: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22c880u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22c884: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22c884u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c888: 0x8c451ab0  lw          $a1, 0x1AB0($v0)
    ctx->pc = 0x22c888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6832)));
    // 0x22c88c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22c88cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c890: 0x8c461ab4  lw          $a2, 0x1AB4($v0)
    ctx->pc = 0x22c890u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6836)));
    // 0x22c894: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22c894u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c898: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x22c898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x22c89c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x22C89Cu;
    SET_GPR_U32(ctx, 31, 0x22C8A4u);
    ctx->pc = 0x22C8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C89Cu;
    // 0x22c8a0: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x22C89Cu, 0x22C8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C8A4u;
label_22c8a4:
    // 0x22c8a4: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x22c8a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x22c8a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22c8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22c8ac: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x22c8acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_22c8b0:
    // 0x22c8b0: 0xc055f06  jal         func_157C18
    ctx->pc = 0x22C8B0u;
    SET_GPR_U32(ctx, 31, 0x22C8B8u);
    ctx->pc = 0x22C8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C8B0u;
    // 0x22c8b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x22C8B0u, 0x22C8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C8B8u;
label_22c8b8:
    // 0x22c8b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22C8B8u;
    {
        const bool branch_taken_0x22c8b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c8b8) {
            ctx->pc = 0x22C8CCu;
            goto label_22c8cc;
        }
    }
    ctx->pc = 0x22C8C0u;
    // 0x22c8c0: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x22c8c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x22c8c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22c8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22c8c8: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x22c8c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_22c8cc:
    // 0x22c8cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22c8ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22c8d0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x22c8d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22c8d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22c8d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c8d8: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x22C8D8u;
    SET_GPR_U32(ctx, 31, 0x22C8E0u);
    ctx->pc = 0x22C8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C8D8u;
    // 0x22c8dc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x22C8D8u, 0x22C8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C8E0u;
label_22c8e0:
    // 0x22c8e0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22c8e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22c8e4: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x22C8E4u;
    SET_GPR_U32(ctx, 31, 0x22C8ECu);
    ctx->pc = 0x22C8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C8E4u;
    // 0x22c8e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x22C8E4u, 0x22C8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C8ECu;
label_22c8ec:
    // 0x22c8ec: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x22C8ECu;
    {
        const bool branch_taken_0x22c8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C8ECu;
        // 0x22c8f0: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c8ec) {
            ctx->pc = 0x22CA64u;
            goto label_22ca64;
        }
    }
    ctx->pc = 0x22C8F4u;
label_22c8f4:
    // 0x22c8f4: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x22c8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x22c8f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22c8f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c8fc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22c8fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22c900: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22c900u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c904: 0x8c451ac0  lw          $a1, 0x1AC0($v0)
    ctx->pc = 0x22c904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6848)));
    // 0x22c908: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22c908u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c90c: 0x8c461ac4  lw          $a2, 0x1AC4($v0)
    ctx->pc = 0x22c90cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6852)));
    // 0x22c910: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22c910u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c914: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x22c914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x22c918: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x22C918u;
    SET_GPR_U32(ctx, 31, 0x22C920u);
    ctx->pc = 0x22C91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C918u;
    // 0x22c91c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x22C918u, 0x22C920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C920u;
label_22c920:
    // 0x22c920: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x22c920u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x22c924: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22c924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22c928: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22c928u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c92c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22c92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22c930: 0xe6200604  swc1        $f0, 0x604($s1)
    ctx->pc = 0x22c930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1540), bits); }
    // 0x22c934: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x22c934u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_22c938:
    // 0x22c938: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x22c938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22c93c: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x22c93cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x22c940: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x22c940u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x22c944: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x22c944u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x22c948: 0xc6210604  lwc1        $f1, 0x604($s1)
    ctx->pc = 0x22c948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22c94c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x22c94cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x22c950: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x22c950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x22c954: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x22c954u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x22c958: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x22c958u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22c95c: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x22c95cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c960: 0x0  nop
    ctx->pc = 0x22c960u;
    // NOP
    // 0x22c964: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x22C964u;
    {
        const bool branch_taken_0x22c964 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22C968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C964u;
        // 0x22c968: 0xe6210604  swc1        $f1, 0x604($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c964) {
            ctx->pc = 0x22C970u;
            goto label_22c970;
        }
    }
    ctx->pc = 0x22C96Cu;
    // 0x22c96c: 0xe6350604  swc1        $f21, 0x604($s1)
    ctx->pc = 0x22c96cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1540), bits); }
label_22c970:
    // 0x22c970: 0xc64005a8  lwc1        $f0, 0x5A8($s2)
    ctx->pc = 0x22c970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22c974: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22c974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c978: 0xc62c0604  lwc1        $f12, 0x604($s1)
    ctx->pc = 0x22c978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22c97c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22c97cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22c980: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x22c980u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22c984: 0xc0560a2  jal         func_158288
    ctx->pc = 0x22C984u;
    SET_GPR_U32(ctx, 31, 0x22C98Cu);
    ctx->pc = 0x22C988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C984u;
    // 0x22c988: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x158288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158288u, 0x22C984u, 0x22C98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C98Cu;
label_22c98c:
    // 0x22c98c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x22C98Cu;
    SET_GPR_U32(ctx, 31, 0x22C994u);
    ctx->pc = 0x22C990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C98Cu;
    // 0x22c990: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x22C98Cu, 0x22C994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C994u;
label_22c994:
    // 0x22c994: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22c994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c998: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x22C998u;
    SET_GPR_U32(ctx, 31, 0x22C9A0u);
    ctx->pc = 0x22C99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C998u;
    // 0x22c99c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x22C998u, 0x22C9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C9A0u;
label_22c9a0:
    // 0x22c9a0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22c9a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22c9a4: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x22C9A4u;
    SET_GPR_U32(ctx, 31, 0x22C9ACu);
    ctx->pc = 0x22C9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C9A4u;
    // 0x22c9a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x22C9A4u, 0x22C9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C9ACu;
label_22c9ac:
    // 0x22c9ac: 0xc6200604  lwc1        $f0, 0x604($s1)
    ctx->pc = 0x22c9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22c9b0: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x22c9b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c9b4: 0x0  nop
    ctx->pc = 0x22c9b4u;
    // NOP
    // 0x22c9b8: 0x4502002a  bc1fl       . + 4 + (0x2A << 2)
    ctx->pc = 0x22C9B8u;
    {
        const bool branch_taken_0x22c9b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22c9b8) {
            ctx->pc = 0x22C9BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C9B8u;
            // 0x22c9bc: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22CA64u;
            goto label_22ca64;
        }
    }
    ctx->pc = 0x22C9C0u;
    // 0x22c9c0: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x22c9c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x22c9c4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x22c9c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x22c9c8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x22c9c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22c9cc: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x22c9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22c9d0: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x22C9D0u;
    SET_GPR_U32(ctx, 31, 0x22C9D8u);
    ctx->pc = 0x22C9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C9D0u;
    // 0x22c9d4: 0x46146300  add.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x22C9D0u, 0x22C9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C9D8u;
label_22c9d8:
    // 0x22c9d8: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x22c9d8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x22c9dc: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x22C9DCu;
    SET_GPR_U32(ctx, 31, 0x22C9E4u);
    ctx->pc = 0x22C9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C9DCu;
    // 0x22c9e0: 0x8e3000f0  lw          $s0, 0xF0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x22C9DCu, 0x22C9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C9E4u;
label_22c9e4:
    // 0x22c9e4: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x22c9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x22c9e8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x22c9e8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x22c9ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22c9ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c9f0: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x22C9F0u;
    SET_GPR_U32(ctx, 31, 0x22C9F8u);
    ctx->pc = 0x22C9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C9F0u;
    // 0x22c9f4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x22C9F0u, 0x22C9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C9F8u;
label_22c9f8:
    // 0x22c9f8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x22C9F8u;
    SET_GPR_U32(ctx, 31, 0x22CA00u);
    ctx->pc = 0x22C9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C9F8u;
    // 0x22c9fc: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x22C9F8u, 0x22CA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CA00u;
label_22ca00:
    // 0x22ca00: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22ca00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22ca04: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x22CA04u;
    {
        const bool branch_taken_0x22ca04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ca04) {
            ctx->pc = 0x22CA08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22CA04u;
            // 0x22ca08: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22CA64u;
            goto label_22ca64;
        }
    }
    ctx->pc = 0x22CA0Cu;
    // 0x22ca0c: 0x3c01bf49  lui         $at, 0xBF49
    ctx->pc = 0x22ca0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48969 << 16));
    // 0x22ca10: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x22ca10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x22ca14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22ca14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ca18: 0x0  nop
    ctx->pc = 0x22ca18u;
    // NOP
    // 0x22ca1c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x22ca1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22ca20: 0x0  nop
    ctx->pc = 0x22ca20u;
    // NOP
    // 0x22ca24: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
    ctx->pc = 0x22CA24u;
    {
        const bool branch_taken_0x22ca24 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22ca24) {
            ctx->pc = 0x22CA28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22CA24u;
            // 0x22ca28: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22CA64u;
            goto label_22ca64;
        }
    }
    ctx->pc = 0x22CA2Cu;
    // 0x22ca2c: 0x3c01be86  lui         $at, 0xBE86
    ctx->pc = 0x22ca2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48774 << 16));
    // 0x22ca30: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x22ca30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x22ca34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22ca34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ca38: 0x0  nop
    ctx->pc = 0x22ca38u;
    // NOP
    // 0x22ca3c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x22ca3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22ca40: 0x0  nop
    ctx->pc = 0x22ca40u;
    // NOP
    // 0x22ca44: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x22CA44u;
    {
        const bool branch_taken_0x22ca44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22CA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CA44u;
        // 0x22ca48: 0x269064f0  addiu       $s0, $s4, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 25840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ca44) {
            ctx->pc = 0x22CA60u;
            goto label_22ca60;
        }
    }
    ctx->pc = 0x22CA4Cu;
    // 0x22ca4c: 0xc0a4dd4  jal         func_293750
    ctx->pc = 0x22CA4Cu;
    SET_GPR_U32(ctx, 31, 0x22CA54u);
    ctx->pc = 0x22CA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CA4Cu;
    // 0x22ca50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293750u, 0x22CA4Cu, 0x22CA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CA54u;
label_22ca54:
    // 0x22ca54: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x22CA54u;
    SET_GPR_U32(ctx, 31, 0x22CA5Cu);
    ctx->pc = 0x22CA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CA54u;
    // 0x22ca58: 0x4614ab00  add.s       $f12, $f21, $f20 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x22CA54u, 0x22CA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CA5Cu;
label_22ca5c:
    // 0x22ca5c: 0xe600059c  swc1        $f0, 0x59C($s0)
    ctx->pc = 0x22ca5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1436), bits); }
label_22ca60:
    // 0x22ca60: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x22ca60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_22ca64:
    // 0x22ca64: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22ca64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22ca68: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x22CA68u;
    {
        const bool branch_taken_0x22ca68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CA68u;
        // 0x22ca6c: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ca68) {
            ctx->pc = 0x22CA90u;
            goto label_22ca90;
        }
    }
    ctx->pc = 0x22CA70u;
    // 0x22ca70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22ca70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ca74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22ca74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ca78: 0x2407003f  addiu       $a3, $zero, 0x3F
    ctx->pc = 0x22ca78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x22ca7c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x22ca7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22ca80: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x22CA80u;
    SET_GPR_U32(ctx, 31, 0x22CA88u);
    ctx->pc = 0x22CA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CA80u;
    // 0x22ca84: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x22CA80u, 0x22CA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CA88u;
label_22ca88:
    // 0x22ca88: 0xc0982cc  jal         func_260B30
    ctx->pc = 0x22CA88u;
    SET_GPR_U32(ctx, 31, 0x22CA90u);
    ctx->pc = 0x22CA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CA88u;
    // 0x22ca8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260B30u, 0x22CA88u, 0x22CA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CA90u;
label_22ca90:
    // 0x22ca90: 0x5660003b  bnel        $s3, $zero, . + 4 + (0x3B << 2)
    ctx->pc = 0x22CA90u;
    {
        const bool branch_taken_0x22ca90 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ca90) {
            ctx->pc = 0x22CA94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22CA90u;
            // 0x22ca94: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22CB80u;
            goto label_22cb80;
        }
    }
    ctx->pc = 0x22CA98u;
    // 0x22ca98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22ca98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22ca9c: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x22ca9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x22caa0: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x22caa0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x22caa4: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x22caa4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x22caa8: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x22caa8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x22caac: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x22CAACu;
    {
        const bool branch_taken_0x22caac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CAACu;
        // 0x22cab0: 0xa22002f6  sb          $zero, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22caac) {
            ctx->pc = 0x22CB9Cu;
            goto label_22cb9c;
        }
    }
    ctx->pc = 0x22CAB4u;
label_22cab4:
    // 0x22cab4: 0x268264f0  addiu       $v0, $s4, 0x64F0
    ctx->pc = 0x22cab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 25840));
    // 0x22cab8: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x22cab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x22cabc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x22cabcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x22cac0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22cac0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22cac4: 0xc440059c  lwc1        $f0, 0x59C($v0)
    ctx->pc = 0x22cac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22cac8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22cac8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22cacc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x22caccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x22cad0: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x22CAD0u;
    SET_GPR_U32(ctx, 31, 0x22CAD8u);
    ctx->pc = 0x22CAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CAD0u;
    // 0x22cad4: 0xe6200104  swc1        $f0, 0x104($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x22CAD0u, 0x22CAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CAD8u;
label_22cad8:
    // 0x22cad8: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x22cad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x22cadc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22cadcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cae0: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x22cae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    // 0x22cae4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22cae4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cae8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22cae8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22caec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22caecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22caf0: 0x8c451ad0  lw          $a1, 0x1AD0($v0)
    ctx->pc = 0x22caf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6864)));
    // 0x22caf4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22caf4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22caf8: 0x8c461ad4  lw          $a2, 0x1AD4($v0)
    ctx->pc = 0x22caf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6868)));
    // 0x22cafc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x22cafcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x22cb00: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x22CB00u;
    SET_GPR_U32(ctx, 31, 0x22CB08u);
    ctx->pc = 0x22CB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CB00u;
    // 0x22cb04: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x22CB00u, 0x22CB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CB08u;
label_22cb08:
    // 0x22cb08: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x22cb08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x22cb0c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22cb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22cb10: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x22cb10u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_22cb14:
    // 0x22cb14: 0xc055f06  jal         func_157C18
    ctx->pc = 0x22CB14u;
    SET_GPR_U32(ctx, 31, 0x22CB1Cu);
    ctx->pc = 0x22CB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CB14u;
    // 0x22cb18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x22CB14u, 0x22CB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CB1Cu;
label_22cb1c:
    // 0x22cb1c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22CB1Cu;
    {
        const bool branch_taken_0x22cb1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22cb1c) {
            ctx->pc = 0x22CB2Cu;
            goto label_22cb2c;
        }
    }
    ctx->pc = 0x22CB24u;
    // 0x22cb24: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x22CB24u;
    SET_GPR_U32(ctx, 31, 0x22CB2Cu);
    ctx->pc = 0x22CB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CB24u;
    // 0x22cb28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x22CB24u, 0x22CB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CB2Cu;
label_22cb2c:
    // 0x22cb2c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22cb2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22cb30: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x22cb30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22cb34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22cb34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cb38: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x22CB38u;
    SET_GPR_U32(ctx, 31, 0x22CB40u);
    ctx->pc = 0x22CB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CB38u;
    // 0x22cb3c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x22CB38u, 0x22CB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CB40u;
label_22cb40:
    // 0x22cb40: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22cb40u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22cb44: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x22CB44u;
    SET_GPR_U32(ctx, 31, 0x22CB4Cu);
    ctx->pc = 0x22CB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CB44u;
    // 0x22cb48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x22CB44u, 0x22CB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CB4Cu;
label_22cb4c:
    // 0x22cb4c: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x22cb4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x22cb50: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22cb50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22cb54: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x22CB54u;
    {
        const bool branch_taken_0x22cb54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CB54u;
        // 0x22cb58: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cb54) {
            ctx->pc = 0x22CB7Cu;
            goto label_22cb7c;
        }
    }
    ctx->pc = 0x22CB5Cu;
    // 0x22cb5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22cb5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cb60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22cb60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cb64: 0x2407003f  addiu       $a3, $zero, 0x3F
    ctx->pc = 0x22cb64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x22cb68: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x22cb68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22cb6c: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x22CB6Cu;
    SET_GPR_U32(ctx, 31, 0x22CB74u);
    ctx->pc = 0x22CB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CB6Cu;
    // 0x22cb70: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x22CB6Cu, 0x22CB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CB74u;
label_22cb74:
    // 0x22cb74: 0xc0982cc  jal         func_260B30
    ctx->pc = 0x22CB74u;
    SET_GPR_U32(ctx, 31, 0x22CB7Cu);
    ctx->pc = 0x22CB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CB74u;
    // 0x22cb78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260B30u, 0x22CB74u, 0x22CB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CB7Cu;
label_22cb7c:
    // 0x22cb7c: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x22cb7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_22cb80:
    // 0x22cb80: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x22cb80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x22cb84: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22CB84u;
    {
        const bool branch_taken_0x22cb84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CB84u;
        // 0x22cb88: 0x3c040046  lui         $a0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cb84) {
            ctx->pc = 0x22CB9Cu;
            goto label_22cb9c;
        }
    }
    ctx->pc = 0x22CB8Cu;
    // 0x22cb8c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22cb8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cb90: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x22cb90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x22cb94: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x22CB94u;
    SET_GPR_U32(ctx, 31, 0x22CB9Cu);
    ctx->pc = 0x22CB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CB94u;
    // 0x22cb98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x22CB94u, 0x22CB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CB9Cu;
label_22cb9c:
    // 0x22cb9c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x22cb9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22cba0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x22cba0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22cba4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x22cba4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22cba8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x22cba8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22cbac: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x22cbacu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22cbb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22cbb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22cbb4: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x22cbb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x22cbb8: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x22cbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22cbbc: 0x3e00008  jr          $ra
    ctx->pc = 0x22CBBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22CBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CBBCu;
        // 0x22cbc0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22CBBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22CBC4u;
    // 0x22cbc4: 0x0  nop
    ctx->pc = 0x22cbc4u;
    // NOP
    ctx->pc = 0x22cbc8u;
}
