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

// Function: func_0023B968
// Address: 0x23b968 - 0x23c620
void func_0023B968_0x23b968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0023B968_0x23b968");
#endif

    switch (ctx->pc) {
        case 0x23b9f4u: goto label_23b9f4;
        case 0x23ba84u: goto label_23ba84;
        case 0x23ba98u: goto label_23ba98;
        case 0x23bb34u: goto label_23bb34;
        case 0x23bbc0u: goto label_23bbc0;
        case 0x23bbecu: goto label_23bbec;
        case 0x23bbfcu: goto label_23bbfc;
        case 0x23bc38u: goto label_23bc38;
        case 0x23bd08u: goto label_23bd08;
        case 0x23bd40u: goto label_23bd40;
        case 0x23bda8u: goto label_23bda8;
        case 0x23bde0u: goto label_23bde0;
        case 0x23be18u: goto label_23be18;
        case 0x23be88u: goto label_23be88;
        case 0x23beb4u: goto label_23beb4;
        case 0x23bf00u: goto label_23bf00;
        case 0x23bf2cu: goto label_23bf2c;
        case 0x23bf58u: goto label_23bf58;
        case 0x23bfb8u: goto label_23bfb8;
        case 0x23c03cu: goto label_23c03c;
        case 0x23c088u: goto label_23c088;
        case 0x23c170u: goto label_23c170;
        case 0x23c1d4u: goto label_23c1d4;
        case 0x23c20cu: goto label_23c20c;
        case 0x23c24cu: goto label_23c24c;
        case 0x23c288u: goto label_23c288;
        case 0x23c29cu: goto label_23c29c;
        case 0x23c2b0u: goto label_23c2b0;
        case 0x23c2dcu: goto label_23c2dc;
        case 0x23c2f0u: goto label_23c2f0;
        case 0x23c304u: goto label_23c304;
        case 0x23c32cu: goto label_23c32c;
        case 0x23c34cu: goto label_23c34c;
        case 0x23c388u: goto label_23c388;
        case 0x23c3a8u: goto label_23c3a8;
        case 0x23c3b0u: goto label_23c3b0;
        case 0x23c3c0u: goto label_23c3c0;
        case 0x23c3d4u: goto label_23c3d4;
        case 0x23c400u: goto label_23c400;
        case 0x23c414u: goto label_23c414;
        case 0x23c430u: goto label_23c430;
        case 0x23c45cu: goto label_23c45c;
        case 0x23c470u: goto label_23c470;
        case 0x23c484u: goto label_23c484;
        case 0x23c4a4u: goto label_23c4a4;
        case 0x23c4acu: goto label_23c4ac;
        case 0x23c4d4u: goto label_23c4d4;
        case 0x23c4e0u: goto label_23c4e0;
        case 0x23c4f4u: goto label_23c4f4;
        case 0x23c520u: goto label_23c520;
        case 0x23c534u: goto label_23c534;
        case 0x23c548u: goto label_23c548;
        case 0x23c568u: goto label_23c568;
        case 0x23c570u: goto label_23c570;
        case 0x23c588u: goto label_23c588;
        case 0x23c594u: goto label_23c594;
        case 0x23c59cu: goto label_23c59c;
        case 0x23c5b0u: goto label_23c5b0;
        case 0x23c5c8u: goto label_23c5c8;
        case 0x23c5d4u: goto label_23c5d4;
        case 0x23c5fcu: goto label_23c5fc;
        default: break;
    }

    ctx->pc = 0x23b968u;

    // 0x23b968: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x23b968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x23b96c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x23b96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x23b970: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x23b970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x23b974: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x23b974u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b978: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x23b978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x23b97c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23b97cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x23b980: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23b980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23b984: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x23b984u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x23b988: 0x8e6216d0  lw          $v0, 0x16D0($s3)
    ctx->pc = 0x23b988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 5840)));
    // 0x23b98c: 0x926402f6  lbu         $a0, 0x2F6($s3)
    ctx->pc = 0x23b98cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 758)));
    // 0x23b990: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x23b990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x23b994: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x23b994u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x23b998: 0x1060030e  beqz        $v1, . + 4 + (0x30E << 2)
    ctx->pc = 0x23B998u;
    {
        const bool branch_taken_0x23b998 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B998u;
        // 0x23b99c: 0xae6216d0  sw          $v0, 0x16D0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 5840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b998) {
            ctx->pc = 0x23C5D4u;
            goto label_23c5d4;
        }
    }
    ctx->pc = 0x23B9A0u;
    // 0x23b9a0: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x23b9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x23b9a4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x23b9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x23b9a8: 0x2442ac30  addiu       $v0, $v0, -0x53D0
    ctx->pc = 0x23b9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945840));
    // 0x23b9ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23b9acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23b9b0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23b9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23b9b4: 0x800008  jr          $a0
    ctx->pc = 0x23B9B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23B9BCu: goto label_23b9bc;
            case 0x23C360u: goto label_23c360;
            case 0x23C3C8u: goto label_23c3c8;
            case 0x23C424u: goto label_23c424;
            case 0x23C47Cu: goto label_23c47c;
            case 0x23C4E8u: goto label_23c4e8;
            case 0x23C540u: goto label_23c540;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B9B4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x23B9BCu;
label_23b9bc:
    // 0x23b9bc: 0x8e630564  lw          $v1, 0x564($s3)
    ctx->pc = 0x23b9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1380)));
    // 0x23b9c0: 0x2463fdfe  addiu       $v1, $v1, -0x202
    ctx->pc = 0x23b9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966782));
    // 0x23b9c4: 0x2c62007d  sltiu       $v0, $v1, 0x7D
    ctx->pc = 0x23b9c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)125) ? 1 : 0);
    // 0x23b9c8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23B9C8u;
    {
        const bool branch_taken_0x23b9c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B9C8u;
        // 0x23b9cc: 0xa2601864  sb          $zero, 0x1864($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 6244), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b9c8) {
            ctx->pc = 0x23B9ECu;
            goto label_23b9ec;
        }
    }
    ctx->pc = 0x23B9D0u;
    // 0x23b9d0: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x23b9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x23b9d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23b9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23b9d8: 0x2442ac50  addiu       $v0, $v0, -0x53B0
    ctx->pc = 0x23b9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945872));
    // 0x23b9dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23b9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23b9e0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23b9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23b9e4: 0x800008  jr          $a0
    ctx->pc = 0x23B9E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23B9ECu: goto label_23b9ec;
            case 0x23BA7Cu: goto label_23ba7c;
            case 0x23BB2Cu: goto label_23bb2c;
            case 0x23BB58u: goto label_23bb58;
            case 0x23BB68u: goto label_23bb68;
            case 0x23BB78u: goto label_23bb78;
            case 0x23BB88u: goto label_23bb88;
            case 0x23BBF4u: goto label_23bbf4;
            case 0x23BC20u: goto label_23bc20;
            case 0x23BC30u: goto label_23bc30;
            case 0x23BD00u: goto label_23bd00;
            case 0x23BD38u: goto label_23bd38;
            case 0x23BDA0u: goto label_23bda0;
            case 0x23BDD8u: goto label_23bdd8;
            case 0x23BE10u: goto label_23be10;
            case 0x23BE70u: goto label_23be70;
            case 0x23BE80u: goto label_23be80;
            case 0x23BEACu: goto label_23beac;
            case 0x23BED8u: goto label_23bed8;
            case 0x23BEE8u: goto label_23bee8;
            case 0x23BEF8u: goto label_23bef8;
            case 0x23BF24u: goto label_23bf24;
            case 0x23BF50u: goto label_23bf50;
            case 0x23BFB0u: goto label_23bfb0;
            case 0x23C018u: goto label_23c018;
            case 0x23C044u: goto label_23c044;
            case 0x23C090u: goto label_23c090;
            case 0x23C0A0u: goto label_23c0a0;
            case 0x23C0C8u: goto label_23c0c8;
            case 0x23C0F0u: goto label_23c0f0;
            case 0x23C118u: goto label_23c118;
            case 0x23C140u: goto label_23c140;
            case 0x23C168u: goto label_23c168;
            case 0x23C194u: goto label_23c194;
            case 0x23C1A4u: goto label_23c1a4;
            case 0x23C1CCu: goto label_23c1cc;
            case 0x23C204u: goto label_23c204;
            case 0x23C244u: goto label_23c244;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B9E4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x23B9ECu;
label_23b9ec:
    // 0x23b9ec: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23B9ECu;
    SET_GPR_U32(ctx, 31, 0x23B9F4u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23B9ECu, 0x23B9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B9F4u;
label_23b9f4:
    // 0x23b9f4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x23b9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x23b9f8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x23b9f8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x23b9fc: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23B9FCu;
    {
        const bool branch_taken_0x23b9fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b9fc) {
            ctx->pc = 0x23BA00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B9FCu;
            // 0x23ba00: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23BA04u;
            goto label_23ba04;
        }
    }
    ctx->pc = 0x23BA04u;
label_23ba04:
    // 0x23ba04: 0x2010  mfhi        $a0
    ctx->pc = 0x23ba04u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x23ba08: 0x2c820005  sltiu       $v0, $a0, 0x5
    ctx->pc = 0x23ba08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x23ba0c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23BA0Cu;
    {
        const bool branch_taken_0x23ba0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA0Cu;
        // 0x23ba10: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ba0c) {
            ctx->pc = 0x23BA2Cu;
            goto label_23ba2c;
        }
    }
    ctx->pc = 0x23BA14u;
    // 0x23ba14: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x23ba14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x23ba18: 0x2442ae50  addiu       $v0, $v0, -0x51B0
    ctx->pc = 0x23ba18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946384));
    // 0x23ba1c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23ba1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23ba20: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23ba20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23ba24: 0x800008  jr          $a0
    ctx->pc = 0x23BA24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23BA2Cu: goto label_23ba2c;
            case 0x23BA3Cu: goto label_23ba3c;
            case 0x23BA4Cu: goto label_23ba4c;
            case 0x23BA5Cu: goto label_23ba5c;
            case 0x23BA6Cu: goto label_23ba6c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BA24u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x23BA2Cu;
label_23ba2c:
    // 0x23ba2c: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23ba2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23ba30: 0x8c4303c4  lw          $v1, 0x3C4($v0)
    ctx->pc = 0x23ba30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 964)));
    // 0x23ba34: 0x10000200  b           . + 4 + (0x200 << 2)
    ctx->pc = 0x23BA34u;
    {
        const bool branch_taken_0x23ba34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA34u;
        // 0x23ba38: 0x8c4403c8  lw          $a0, 0x3C8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 968)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ba34) {
            ctx->pc = 0x23C238u;
            goto label_23c238;
        }
    }
    ctx->pc = 0x23BA3Cu;
label_23ba3c:
    // 0x23ba3c: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23ba3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23ba40: 0x8c4303cc  lw          $v1, 0x3CC($v0)
    ctx->pc = 0x23ba40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 972)));
    // 0x23ba44: 0x100001fc  b           . + 4 + (0x1FC << 2)
    ctx->pc = 0x23BA44u;
    {
        const bool branch_taken_0x23ba44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA44u;
        // 0x23ba48: 0x8c4403d0  lw          $a0, 0x3D0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 976)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ba44) {
            ctx->pc = 0x23C238u;
            goto label_23c238;
        }
    }
    ctx->pc = 0x23BA4Cu;
label_23ba4c:
    // 0x23ba4c: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23ba4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23ba50: 0x8c4303d4  lw          $v1, 0x3D4($v0)
    ctx->pc = 0x23ba50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 980)));
    // 0x23ba54: 0x100001f8  b           . + 4 + (0x1F8 << 2)
    ctx->pc = 0x23BA54u;
    {
        const bool branch_taken_0x23ba54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA54u;
        // 0x23ba58: 0x8c4403d8  lw          $a0, 0x3D8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 984)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ba54) {
            ctx->pc = 0x23C238u;
            goto label_23c238;
        }
    }
    ctx->pc = 0x23BA5Cu;
label_23ba5c:
    // 0x23ba5c: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23ba5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23ba60: 0x8c4303dc  lw          $v1, 0x3DC($v0)
    ctx->pc = 0x23ba60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 988)));
    // 0x23ba64: 0x100001f4  b           . + 4 + (0x1F4 << 2)
    ctx->pc = 0x23BA64u;
    {
        const bool branch_taken_0x23ba64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA64u;
        // 0x23ba68: 0x8c4403e0  lw          $a0, 0x3E0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 992)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ba64) {
            ctx->pc = 0x23C238u;
            goto label_23c238;
        }
    }
    ctx->pc = 0x23BA6Cu;
label_23ba6c:
    // 0x23ba6c: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23ba6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23ba70: 0x8c4303ec  lw          $v1, 0x3EC($v0)
    ctx->pc = 0x23ba70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1004)));
    // 0x23ba74: 0x100001f0  b           . + 4 + (0x1F0 << 2)
    ctx->pc = 0x23BA74u;
    {
        const bool branch_taken_0x23ba74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA74u;
        // 0x23ba78: 0x8c4403f0  lw          $a0, 0x3F0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1008)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ba74) {
            ctx->pc = 0x23C238u;
            goto label_23c238;
        }
    }
    ctx->pc = 0x23BA7Cu;
label_23ba7c:
    // 0x23ba7c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23BA7Cu;
    SET_GPR_U32(ctx, 31, 0x23BA84u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23BA7Cu, 0x23BA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BA84u;
label_23ba84:
    // 0x23ba84: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23ba84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23ba88: 0x50400025  beql        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x23BA88u;
    {
        const bool branch_taken_0x23ba88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ba88) {
            ctx->pc = 0x23BA8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BA88u;
            // 0x23ba8c: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23BB20u;
            goto label_23bb20;
        }
    }
    ctx->pc = 0x23BA90u;
    // 0x23ba90: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23BA90u;
    SET_GPR_U32(ctx, 31, 0x23BA98u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23BA90u, 0x23BA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BA98u;
label_23ba98:
    // 0x23ba98: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x23ba98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x23ba9c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x23ba9cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x23baa0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23BAA0u;
    {
        const bool branch_taken_0x23baa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23baa0) {
            ctx->pc = 0x23BAA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BAA0u;
            // 0x23baa4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23BAA8u;
            goto label_23baa8;
        }
    }
    ctx->pc = 0x23BAA8u;
label_23baa8:
    // 0x23baa8: 0x2010  mfhi        $a0
    ctx->pc = 0x23baa8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x23baac: 0x2c820005  sltiu       $v0, $a0, 0x5
    ctx->pc = 0x23baacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x23bab0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23BAB0u;
    {
        const bool branch_taken_0x23bab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BAB0u;
        // 0x23bab4: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bab0) {
            ctx->pc = 0x23BAD0u;
            goto label_23bad0;
        }
    }
    ctx->pc = 0x23BAB8u;
    // 0x23bab8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x23bab8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x23babc: 0x2442ae70  addiu       $v0, $v0, -0x5190
    ctx->pc = 0x23babcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946416));
    // 0x23bac0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23bac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23bac4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23bac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23bac8: 0x800008  jr          $a0
    ctx->pc = 0x23BAC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23BAD0u: goto label_23bad0;
            case 0x23BAE0u: goto label_23bae0;
            case 0x23BAF0u: goto label_23baf0;
            case 0x23BB00u: goto label_23bb00;
            case 0x23BB10u: goto label_23bb10;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BAC8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x23BAD0u;
label_23bad0:
    // 0x23bad0: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23bad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23bad4: 0x8c4303c4  lw          $v1, 0x3C4($v0)
    ctx->pc = 0x23bad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 964)));
    // 0x23bad8: 0x100001d7  b           . + 4 + (0x1D7 << 2)
    ctx->pc = 0x23BAD8u;
    {
        const bool branch_taken_0x23bad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BAD8u;
        // 0x23badc: 0x8c4403c8  lw          $a0, 0x3C8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 968)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bad8) {
            ctx->pc = 0x23C238u;
            goto label_23c238;
        }
    }
    ctx->pc = 0x23BAE0u;
label_23bae0:
    // 0x23bae0: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23bae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23bae4: 0x8c4303cc  lw          $v1, 0x3CC($v0)
    ctx->pc = 0x23bae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 972)));
    // 0x23bae8: 0x100001d3  b           . + 4 + (0x1D3 << 2)
    ctx->pc = 0x23BAE8u;
    {
        const bool branch_taken_0x23bae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BAE8u;
        // 0x23baec: 0x8c4403d0  lw          $a0, 0x3D0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 976)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bae8) {
            ctx->pc = 0x23C238u;
            goto label_23c238;
        }
    }
    ctx->pc = 0x23BAF0u;
label_23baf0:
    // 0x23baf0: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23baf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23baf4: 0x8c4303d4  lw          $v1, 0x3D4($v0)
    ctx->pc = 0x23baf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 980)));
    // 0x23baf8: 0x100001cf  b           . + 4 + (0x1CF << 2)
    ctx->pc = 0x23BAF8u;
    {
        const bool branch_taken_0x23baf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BAF8u;
        // 0x23bafc: 0x8c4403d8  lw          $a0, 0x3D8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 984)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23baf8) {
            ctx->pc = 0x23C238u;
            goto label_23c238;
        }
    }
    ctx->pc = 0x23BB00u;
label_23bb00:
    // 0x23bb00: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23bb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23bb04: 0x8c4303dc  lw          $v1, 0x3DC($v0)
    ctx->pc = 0x23bb04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 988)));
    // 0x23bb08: 0x100001cb  b           . + 4 + (0x1CB << 2)
    ctx->pc = 0x23BB08u;
    {
        const bool branch_taken_0x23bb08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB08u;
        // 0x23bb0c: 0x8c4403e0  lw          $a0, 0x3E0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 992)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bb08) {
            ctx->pc = 0x23C238u;
            goto label_23c238;
        }
    }
    ctx->pc = 0x23BB10u;
label_23bb10:
    // 0x23bb10: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23bb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23bb14: 0x8c4303ec  lw          $v1, 0x3EC($v0)
    ctx->pc = 0x23bb14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1004)));
    // 0x23bb18: 0x100001c7  b           . + 4 + (0x1C7 << 2)
    ctx->pc = 0x23BB18u;
    {
        const bool branch_taken_0x23bb18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB18u;
        // 0x23bb1c: 0x8c4403f0  lw          $a0, 0x3F0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1008)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bb18) {
            ctx->pc = 0x23C238u;
            goto label_23c238;
        }
    }
    ctx->pc = 0x23BB20u;
label_23bb20:
    // 0x23bb20: 0x8c4302b4  lw          $v1, 0x2B4($v0)
    ctx->pc = 0x23bb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 692)));
    // 0x23bb24: 0x100001c4  b           . + 4 + (0x1C4 << 2)
    ctx->pc = 0x23BB24u;
    {
        const bool branch_taken_0x23bb24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB24u;
        // 0x23bb28: 0x8c4402b8  lw          $a0, 0x2B8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 696)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bb24) {
            ctx->pc = 0x23C238u;
            goto label_23c238;
        }
    }
    ctx->pc = 0x23BB2Cu;
label_23bb2c:
    // 0x23bb2c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23BB2Cu;
    SET_GPR_U32(ctx, 31, 0x23BB34u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23BB2Cu, 0x23BB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BB34u;
label_23bb34:
    // 0x23bb34: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23bb34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23bb38: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23BB38u;
    {
        const bool branch_taken_0x23bb38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB38u;
        // 0x23bb3c: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bb38) {
            ctx->pc = 0x23BB4Cu;
            goto label_23bb4c;
        }
    }
    ctx->pc = 0x23BB40u;
    // 0x23bb40: 0x8c432fa4  lw          $v1, 0x2FA4($v0)
    ctx->pc = 0x23bb40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12196)));
    // 0x23bb44: 0x100001bc  b           . + 4 + (0x1BC << 2)
    ctx->pc = 0x23BB44u;
    {
        const bool branch_taken_0x23bb44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB44u;
        // 0x23bb48: 0x8c442fa8  lw          $a0, 0x2FA8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bb44) {
            ctx->pc = 0x23C238u;
            goto label_23c238;
        }
    }
    ctx->pc = 0x23BB4Cu;
label_23bb4c:
    // 0x23bb4c: 0x8c432fac  lw          $v1, 0x2FAC($v0)
    ctx->pc = 0x23bb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12204)));
    // 0x23bb50: 0x100001b9  b           . + 4 + (0x1B9 << 2)
    ctx->pc = 0x23BB50u;
    {
        const bool branch_taken_0x23bb50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB50u;
        // 0x23bb54: 0x8c442fb0  lw          $a0, 0x2FB0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bb50) {
            ctx->pc = 0x23C238u;
            goto label_23c238;
        }
    }
    ctx->pc = 0x23BB58u;
label_23bb58:
    // 0x23bb58: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23bb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23bb5c: 0x8c4323e8  lw          $v1, 0x23E8($v0)
    ctx->pc = 0x23bb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9192)));
    // 0x23bb60: 0x100001b5  b           . + 4 + (0x1B5 << 2)
    ctx->pc = 0x23BB60u;
    {
        const bool branch_taken_0x23bb60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB60u;
        // 0x23bb64: 0x8c4423ec  lw          $a0, 0x23EC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bb60) {
            ctx->pc = 0x23C238u;
            goto label_23c238;
        }
    }
    ctx->pc = 0x23BB68u;
label_23bb68:
    // 0x23bb68: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23bb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23bb6c: 0x8c4336b8  lw          $v1, 0x36B8($v0)
    ctx->pc = 0x23bb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14008)));
    // 0x23bb70: 0x100001b1  b           . + 4 + (0x1B1 << 2)
    ctx->pc = 0x23BB70u;
    {
        const bool branch_taken_0x23bb70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB70u;
        // 0x23bb74: 0x8c4436bc  lw          $a0, 0x36BC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bb70) {
            ctx->pc = 0x23C238u;
            goto label_23c238;
        }
    }
    ctx->pc = 0x23BB78u;
label_23bb78:
    // 0x23bb78: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23bb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23bb7c: 0x8c4336b8  lw          $v1, 0x36B8($v0)
    ctx->pc = 0x23bb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14008)));
    // 0x23bb80: 0x100001ad  b           . + 4 + (0x1AD << 2)
    ctx->pc = 0x23BB80u;
    {
        const bool branch_taken_0x23bb80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB80u;
        // 0x23bb84: 0x8c4436c0  lw          $a0, 0x36C0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14016)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bb80) {
            ctx->pc = 0x23C238u;
            goto label_23c238;
        }
    }
    ctx->pc = 0x23BB88u;
label_23bb88:
    // 0x23bb88: 0x8e670304  lw          $a3, 0x304($s3)
    ctx->pc = 0x23bb88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23bb8c: 0x926202f7  lbu         $v0, 0x2F7($s3)
    ctx->pc = 0x23bb8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 759)));
    // 0x23bb90: 0x8ce31a98  lw          $v1, 0x1A98($a3)
    ctx->pc = 0x23bb90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 6808)));
    // 0x23bb94: 0x8ce41a9c  lw          $a0, 0x1A9C($a3)
    ctx->pc = 0x23bb94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 6812)));
    // 0x23bb98: 0x679021  addu        $s2, $v1, $a3
    ctx->pc = 0x23bb98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x23bb9c: 0x104001d9  beqz        $v0, . + 4 + (0x1D9 << 2)
    ctx->pc = 0x23BB9Cu;
    {
        const bool branch_taken_0x23bb9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB9Cu;
        // 0x23bba0: 0x878821  addu        $s1, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bb9c) {
            ctx->pc = 0x23C304u;
            goto label_23c304;
        }
    }
    ctx->pc = 0x23BBA4u;
    // 0x23bba4: 0x8ce213e8  lw          $v0, 0x13E8($a3)
    ctx->pc = 0x23bba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 5096)));
    // 0x23bba8: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x23bba8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x23bbac: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x23bbacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x23bbb0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23bbb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bbb4: 0x479021  addu        $s2, $v0, $a3
    ctx->pc = 0x23bbb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x23bbb8: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x23BBB8u;
    SET_GPR_U32(ctx, 31, 0x23BBC0u);
    ctx->pc = 0x23BBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BBB8u;
    // 0x23bbbc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x23BBB8u, 0x23BBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BBC0u;
label_23bbc0:
    // 0x23bbc0: 0x2442000b  addiu       $v0, $v0, 0xB
    ctx->pc = 0x23bbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11));
    // 0x23bbc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23bbc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bbc8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x23bbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x23bbcc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23bbccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23bbd0: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x23bbd0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x23bbd4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x23bbd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bbd8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x23bbd8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bbdc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x23bbdcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bbe0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x23bbe0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bbe4: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x23BBE4u;
    SET_GPR_U32(ctx, 31, 0x23BBECu);
    ctx->pc = 0x23BBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BBE4u;
    // 0x23bbe8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x23BBE4u, 0x23BBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BBECu;
label_23bbec:
    // 0x23bbec: 0x100001c6  b           . + 4 + (0x1C6 << 2)
    ctx->pc = 0x23BBECu;
    {
        const bool branch_taken_0x23bbec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BBECu;
        // 0x23bbf0: 0x8e6206ec  lw          $v0, 0x6EC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bbec) {
            ctx->pc = 0x23C308u;
            goto label_23c308;
        }
    }
    ctx->pc = 0x23BBF4u;
label_23bbf4:
    // 0x23bbf4: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23BBF4u;
    SET_GPR_U32(ctx, 31, 0x23BBFCu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23BBF4u, 0x23BBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BBFCu;
label_23bbfc:
    // 0x23bbfc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23bbfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23bc00: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23BC00u;
    {
        const bool branch_taken_0x23bc00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BC00u;
        // 0x23bc04: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bc00) {
            ctx->pc = 0x23BC14u;
            goto label_23bc14;
        }
    }
    ctx->pc = 0x23BC08u;
    // 0x23bc08: 0x8c4313e8  lw          $v1, 0x13E8($v0)
    ctx->pc = 0x23bc08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5096)));
    // 0x23bc0c: 0x1000018a  b           . + 4 + (0x18A << 2)
    ctx->pc = 0x23BC0Cu;
    {
        const bool branch_taken_0x23bc0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BC0Cu;
        // 0x23bc10: 0x8c4413ec  lw          $a0, 0x13EC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bc0c) {
            ctx->pc = 0x23C238u;
            goto label_23c238;
        }
    }
    ctx->pc = 0x23BC14u;
label_23bc14:
    // 0x23bc14: 0x8c4313f0  lw          $v1, 0x13F0($v0)
    ctx->pc = 0x23bc14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5104)));
    // 0x23bc18: 0x10000187  b           . + 4 + (0x187 << 2)
    ctx->pc = 0x23BC18u;
    {
        const bool branch_taken_0x23bc18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BC18u;
        // 0x23bc1c: 0x8c4413f4  lw          $a0, 0x13F4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bc18) {
            ctx->pc = 0x23C238u;
            goto label_23c238;
        }
    }
    ctx->pc = 0x23BC20u;
label_23bc20:
    // 0x23bc20: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23bc20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23bc24: 0x8c4324f4  lw          $v1, 0x24F4($v0)
    ctx->pc = 0x23bc24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9460)));
    // 0x23bc28: 0x10000183  b           . + 4 + (0x183 << 2)
    ctx->pc = 0x23BC28u;
    {
        const bool branch_taken_0x23bc28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BC28u;
        // 0x23bc2c: 0x8c4424f8  lw          $a0, 0x24F8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bc28) {
            ctx->pc = 0x23C238u;
            goto label_23c238;
        }
    }
    ctx->pc = 0x23BC30u;
label_23bc30:
    // 0x23bc30: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23BC30u;
    SET_GPR_U32(ctx, 31, 0x23BC38u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23BC30u, 0x23BC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BC38u;
label_23bc38:
    // 0x23bc38: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x23bc38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x23bc3c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x23bc3cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x23bc40: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23BC40u;
    {
        const bool branch_taken_0x23bc40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bc40) {
            ctx->pc = 0x23BC44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BC40u;
            // 0x23bc44: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23BC48u;
            goto label_23bc48;
        }
    }
    ctx->pc = 0x23BC48u;
label_23bc48:
    // 0x23bc48: 0x2010  mfhi        $a0
    ctx->pc = 0x23bc48u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x23bc4c: 0x2c820009  sltiu       $v0, $a0, 0x9
    ctx->pc = 0x23bc4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x23bc50: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23BC50u;
    {
        const bool branch_taken_0x23bc50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BC50u;
        // 0x23bc54: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bc50) {
            ctx->pc = 0x23BC70u;
            goto label_23bc70;
        }
    }
    ctx->pc = 0x23BC58u;
    // 0x23bc58: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x23bc58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x23bc5c: 0x2442ae90  addiu       $v0, $v0, -0x5170
    ctx->pc = 0x23bc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946448));
    // 0x23bc60: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23bc60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23bc64: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23bc64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23bc68: 0x800008  jr          $a0
    ctx->pc = 0x23BC68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23BC70u: goto label_23bc70;
            case 0x23BC80u: goto label_23bc80;
            case 0x23BC90u: goto label_23bc90;
            case 0x23BCA0u: goto label_23bca0;
            case 0x23BCB0u: goto label_23bcb0;
            case 0x23BCC0u: goto label_23bcc0;
            case 0x23BCD0u: goto label_23bcd0;
            case 0x23BCE0u: goto label_23bce0;
            case 0x23BCF0u: goto label_23bcf0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BC68u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x23BC70u;
label_23bc70:
    // 0x23bc70: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23bc70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23bc74: 0x8c430b84  lw          $v1, 0xB84($v0)
    ctx->pc = 0x23bc74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2948)));
    // 0x23bc78: 0x1000016f  b           . + 4 + (0x16F << 2)
    ctx->pc = 0x23BC78u;
    {
        const bool branch_taken_0x23bc78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BC78u;
        // 0x23bc7c: 0x8c440b88  lw          $a0, 0xB88($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2952)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bc78) {
            ctx->pc = 0x23C238u;
            goto label_23c238;
        }
    }
    ctx->pc = 0x23BC80u;
label_23bc80:
    // 0x23bc80: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23bc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23bc84: 0x8c430b8c  lw          $v1, 0xB8C($v0)
    ctx->pc = 0x23bc84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2956)));
    // 0x23bc88: 0x1000016b  b           . + 4 + (0x16B << 2)
    ctx->pc = 0x23BC88u;
    {
        const bool branch_taken_0x23bc88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BC88u;
        // 0x23bc8c: 0x8c440b90  lw          $a0, 0xB90($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2960)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bc88) {
            ctx->pc = 0x23C238u;
            goto label_23c238;
        }
    }
    ctx->pc = 0x23BC90u;
label_23bc90:
    // 0x23bc90: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23bc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23bc94: 0x8c430b94  lw          $v1, 0xB94($v0)
    ctx->pc = 0x23bc94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2964)));
    // 0x23bc98: 0x10000167  b           . + 4 + (0x167 << 2)
    ctx->pc = 0x23BC98u;
    {
        const bool branch_taken_0x23bc98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BC98u;
        // 0x23bc9c: 0x8c440b98  lw          $a0, 0xB98($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2968)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bc98) {
            ctx->pc = 0x23C238u;
            goto label_23c238;
        }
    }
    ctx->pc = 0x23BCA0u;
label_23bca0:
    // 0x23bca0: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23bca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23bca4: 0x8c430b9c  lw          $v1, 0xB9C($v0)
    ctx->pc = 0x23bca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2972)));
    // 0x23bca8: 0x10000163  b           . + 4 + (0x163 << 2)
    ctx->pc = 0x23BCA8u;
    {
        const bool branch_taken_0x23bca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BCA8u;
        // 0x23bcac: 0x8c440ba0  lw          $a0, 0xBA0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2976)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bca8) {
            ctx->pc = 0x23C238u;
            goto label_23c238;
        }
    }
    ctx->pc = 0x23BCB0u;
label_23bcb0:
    // 0x23bcb0: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23bcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23bcb4: 0x8c430ba4  lw          $v1, 0xBA4($v0)
    ctx->pc = 0x23bcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2980)));
    // 0x23bcb8: 0x1000015f  b           . + 4 + (0x15F << 2)
    ctx->pc = 0x23BCB8u;
    {
        const bool branch_taken_0x23bcb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BCB8u;
        // 0x23bcbc: 0x8c440ba8  lw          $a0, 0xBA8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2984)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bcb8) {
            ctx->pc = 0x23C238u;
            goto label_23c238;
        }
    }
    ctx->pc = 0x23BCC0u;
label_23bcc0:
    // 0x23bcc0: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23bcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23bcc4: 0x8c430bac  lw          $v1, 0xBAC($v0)
    ctx->pc = 0x23bcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2988)));
    // 0x23bcc8: 0x1000015b  b           . + 4 + (0x15B << 2)
    ctx->pc = 0x23BCC8u;
    {
        const bool branch_taken_0x23bcc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BCC8u;
        // 0x23bccc: 0x8c440bb0  lw          $a0, 0xBB0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2992)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bcc8) {
            ctx->pc = 0x23C238u;
            goto label_23c238;
        }
    }
    ctx->pc = 0x23BCD0u;
label_23bcd0:
    // 0x23bcd0: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23bcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23bcd4: 0x8c430bb4  lw          $v1, 0xBB4($v0)
    ctx->pc = 0x23bcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2996)));
    // 0x23bcd8: 0x10000157  b           . + 4 + (0x157 << 2)
    ctx->pc = 0x23BCD8u;
    {
        const bool branch_taken_0x23bcd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BCD8u;
        // 0x23bcdc: 0x8c440bb8  lw          $a0, 0xBB8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3000)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bcd8) {
            ctx->pc = 0x23C238u;
            goto label_23c238;
        }
    }
    ctx->pc = 0x23BCE0u;
label_23bce0:
    // 0x23bce0: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23bce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23bce4: 0x8c430bbc  lw          $v1, 0xBBC($v0)
    ctx->pc = 0x23bce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3004)));
    // 0x23bce8: 0x10000153  b           . + 4 + (0x153 << 2)
    ctx->pc = 0x23BCE8u;
    {
        const bool branch_taken_0x23bce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BCE8u;
        // 0x23bcec: 0x8c440bc0  lw          $a0, 0xBC0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3008)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bce8) {
            ctx->pc = 0x23C238u;
            goto label_23c238;
        }
    }
    ctx->pc = 0x23BCF0u;
label_23bcf0:
    // 0x23bcf0: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23bcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23bcf4: 0x8c430bc4  lw          $v1, 0xBC4($v0)
    ctx->pc = 0x23bcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3012)));
    // 0x23bcf8: 0x1000014f  b           . + 4 + (0x14F << 2)
    ctx->pc = 0x23BCF8u;
    {
        const bool branch_taken_0x23bcf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BCF8u;
        // 0x23bcfc: 0x8c440bc8  lw          $a0, 0xBC8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3016)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bcf8) {
            ctx->pc = 0x23C238u;
            goto label_23c238;
        }
    }
    ctx->pc = 0x23BD00u;
label_23bd00:
    // 0x23bd00: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23BD00u;
    SET_GPR_U32(ctx, 31, 0x23BD08u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23BD00u, 0x23BD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BD08u;
label_23bd08:
    // 0x23bd08: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x23bd08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23bd0c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23BD0Cu;
    {
        const bool branch_taken_0x23bd0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BD0Cu;
        // 0x23bd10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bd0c) {
            ctx->pc = 0x23BD1Cu;
            goto label_23bd1c;
        }
    }
    ctx->pc = 0x23BD14u;
    // 0x23bd14: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23BD14u;
    {
        const bool branch_taken_0x23bd14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23bd14) {
            ctx->pc = 0x23BD18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BD14u;
            // 0x23bd18: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23BD2Cu;
            goto label_23bd2c;
        }
    }
    ctx->pc = 0x23BD1Cu;
label_23bd1c:
    // 0x23bd1c: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23bd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23bd20: 0x8c433bbc  lw          $v1, 0x3BBC($v0)
    ctx->pc = 0x23bd20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15292)));
    // 0x23bd24: 0x10000144  b           . + 4 + (0x144 << 2)
    ctx->pc = 0x23BD24u;
    {
        const bool branch_taken_0x23bd24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BD24u;
        // 0x23bd28: 0x8c443bc0  lw          $a0, 0x3BC0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bd24) {
            ctx->pc = 0x23C238u;
            goto label_23c238;
        }
    }
    ctx->pc = 0x23BD2Cu;
label_23bd2c:
    // 0x23bd2c: 0x8c433bc4  lw          $v1, 0x3BC4($v0)
    ctx->pc = 0x23bd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15300)));
    // 0x23bd30: 0x10000141  b           . + 4 + (0x141 << 2)
    ctx->pc = 0x23BD30u;
    {
        const bool branch_taken_0x23bd30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BD30u;
        // 0x23bd34: 0x8c443bc8  lw          $a0, 0x3BC8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bd30) {
            ctx->pc = 0x23C238u;
            goto label_23c238;
        }
    }
    ctx->pc = 0x23BD38u;
label_23bd38:
    // 0x23bd38: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23BD38u;
    SET_GPR_U32(ctx, 31, 0x23BD40u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23BD38u, 0x23BD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BD40u;
label_23bd40:
    // 0x23bd40: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x23bd40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x23bd44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23bd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23bd48: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x23BD48u;
    {
        const bool branch_taken_0x23bd48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23bd48) {
            ctx->pc = 0x23BD4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BD48u;
            // 0x23bd4c: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23BD78u;
            goto label_23bd78;
        }
    }
    ctx->pc = 0x23BD50u;
    // 0x23bd50: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x23BD50u;
    {
        const bool branch_taken_0x23bd50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BD50u;
        // 0x23bd54: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bd50) {
            ctx->pc = 0x23BD68u;
            goto label_23bd68;
        }
    }
    ctx->pc = 0x23BD58u;
    // 0x23bd58: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x23BD58u;
    {
        const bool branch_taken_0x23bd58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23BD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BD58u;
        // 0x23bd5c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bd58) {
            ctx->pc = 0x23BD84u;
            goto label_23bd84;
        }
    }
    ctx->pc = 0x23BD60u;
    // 0x23bd60: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x23BD60u;
    {
        const bool branch_taken_0x23bd60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23bd60) {
            ctx->pc = 0x23BD64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BD60u;
            // 0x23bd64: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23BD94u;
            goto label_23bd94;
        }
    }
    ctx->pc = 0x23BD68u;
label_23bd68:
    // 0x23bd68: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23bd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23bd6c: 0x8c432084  lw          $v1, 0x2084($v0)
    ctx->pc = 0x23bd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8324)));
    // 0x23bd70: 0x10000131  b           . + 4 + (0x131 << 2)
    ctx->pc = 0x23BD70u;
    {
        const bool branch_taken_0x23bd70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BD70u;
        // 0x23bd74: 0x8c442088  lw          $a0, 0x2088($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bd70) {
            ctx->pc = 0x23C238u;
            goto label_23c238;
        }
    }
    ctx->pc = 0x23BD78u;
label_23bd78:
    // 0x23bd78: 0x8c43208c  lw          $v1, 0x208C($v0)
    ctx->pc = 0x23bd78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8332)));
    // 0x23bd7c: 0x1000012e  b           . + 4 + (0x12E << 2)
    ctx->pc = 0x23BD7Cu;
    {
        const bool branch_taken_0x23bd7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BD7Cu;
        // 0x23bd80: 0x8c442090  lw          $a0, 0x2090($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bd7c) {
            ctx->pc = 0x23C238u;
            goto label_23c238;
        }
    }
    ctx->pc = 0x23BD84u;
label_23bd84:
    // 0x23bd84: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23bd84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23bd88: 0x8c432094  lw          $v1, 0x2094($v0)
    ctx->pc = 0x23bd88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8340)));
    // 0x23bd8c: 0x1000012a  b           . + 4 + (0x12A << 2)
    ctx->pc = 0x23BD8Cu;
    {
        const bool branch_taken_0x23bd8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BD8Cu;
        // 0x23bd90: 0x8c442098  lw          $a0, 0x2098($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8344)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bd8c) {
            ctx->pc = 0x23C238u;
            goto label_23c238;
        }
    }
    ctx->pc = 0x23BD94u;
label_23bd94:
    // 0x23bd94: 0x8c43209c  lw          $v1, 0x209C($v0)
    ctx->pc = 0x23bd94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8348)));
    // 0x23bd98: 0x10000127  b           . + 4 + (0x127 << 2)
    ctx->pc = 0x23BD98u;
    {
        const bool branch_taken_0x23bd98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BD98u;
        // 0x23bd9c: 0x8c4420a0  lw          $a0, 0x20A0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bd98) {
            ctx->pc = 0x23C238u;
            goto label_23c238;
        }
    }
    ctx->pc = 0x23BDA0u;
label_23bda0:
    // 0x23bda0: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23BDA0u;
    SET_GPR_U32(ctx, 31, 0x23BDA8u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23BDA0u, 0x23BDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BDA8u;
label_23bda8:
    // 0x23bda8: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x23bda8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23bdac: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23BDACu;
    {
        const bool branch_taken_0x23bdac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BDACu;
        // 0x23bdb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bdac) {
            ctx->pc = 0x23BDBCu;
            goto label_23bdbc;
        }
    }
    ctx->pc = 0x23BDB4u;
    // 0x23bdb4: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23BDB4u;
    {
        const bool branch_taken_0x23bdb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23bdb4) {
            ctx->pc = 0x23BDB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BDB4u;
            // 0x23bdb8: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23BDCCu;
            goto label_23bdcc;
        }
    }
    ctx->pc = 0x23BDBCu;
label_23bdbc:
    // 0x23bdbc: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23bdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23bdc0: 0x8c431e4c  lw          $v1, 0x1E4C($v0)
    ctx->pc = 0x23bdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7756)));
    // 0x23bdc4: 0x1000011c  b           . + 4 + (0x11C << 2)
    ctx->pc = 0x23BDC4u;
    {
        const bool branch_taken_0x23bdc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BDC4u;
        // 0x23bdc8: 0x8c441e50  lw          $a0, 0x1E50($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7760)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bdc4) {
            ctx->pc = 0x23C238u;
            goto label_23c238;
        }
    }
    ctx->pc = 0x23BDCCu;
label_23bdcc:
    // 0x23bdcc: 0x8c431e54  lw          $v1, 0x1E54($v0)
    ctx->pc = 0x23bdccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7764)));
    // 0x23bdd0: 0x10000119  b           . + 4 + (0x119 << 2)
    ctx->pc = 0x23BDD0u;
    {
        const bool branch_taken_0x23bdd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BDD0u;
        // 0x23bdd4: 0x8c441e58  lw          $a0, 0x1E58($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7768)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bdd0) {
            ctx->pc = 0x23C238u;
            goto label_23c238;
        }
    }
    ctx->pc = 0x23BDD8u;
label_23bdd8:
    // 0x23bdd8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23BDD8u;
    SET_GPR_U32(ctx, 31, 0x23BDE0u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23BDD8u, 0x23BDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BDE0u;
label_23bde0:
    // 0x23bde0: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x23bde0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23bde4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23BDE4u;
    {
        const bool branch_taken_0x23bde4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BDE4u;
        // 0x23bde8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bde4) {
            ctx->pc = 0x23BDF4u;
            goto label_23bdf4;
        }
    }
    ctx->pc = 0x23BDECu;
    // 0x23bdec: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23BDECu;
    {
        const bool branch_taken_0x23bdec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23bdec) {
            ctx->pc = 0x23BDF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BDECu;
            // 0x23bdf0: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23BE04u;
            goto label_23be04;
        }
    }
    ctx->pc = 0x23BDF4u;
label_23bdf4:
    // 0x23bdf4: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23bdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23bdf8: 0x8c431f98  lw          $v1, 0x1F98($v0)
    ctx->pc = 0x23bdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8088)));
    // 0x23bdfc: 0x1000010e  b           . + 4 + (0x10E << 2)
    ctx->pc = 0x23BDFCu;
    {
        const bool branch_taken_0x23bdfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BDFCu;
        // 0x23be00: 0x8c441f9c  lw          $a0, 0x1F9C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8092)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bdfc) {
            ctx->pc = 0x23C238u;
            goto label_23c238;
        }
    }
    ctx->pc = 0x23BE04u;
label_23be04:
    // 0x23be04: 0x8c431fa0  lw          $v1, 0x1FA0($v0)
    ctx->pc = 0x23be04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8096)));
    // 0x23be08: 0x1000010b  b           . + 4 + (0x10B << 2)
    ctx->pc = 0x23BE08u;
    {
        const bool branch_taken_0x23be08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BE08u;
        // 0x23be0c: 0x8c441fa4  lw          $a0, 0x1FA4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23be08) {
            ctx->pc = 0x23C238u;
            goto label_23c238;
        }
    }
    ctx->pc = 0x23BE10u;
label_23be10:
    // 0x23be10: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23BE10u;
    SET_GPR_U32(ctx, 31, 0x23BE18u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23BE10u, 0x23BE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BE18u;
label_23be18:
    // 0x23be18: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x23be18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23be1c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23be1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23be20: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x23be20u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x23be24: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23BE24u;
    {
        const bool branch_taken_0x23be24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23be24) {
            ctx->pc = 0x23BE28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BE24u;
            // 0x23be28: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23BE2Cu;
            goto label_23be2c;
        }
    }
    ctx->pc = 0x23BE2Cu;
label_23be2c:
    // 0x23be2c: 0x2810  mfhi        $a1
    ctx->pc = 0x23be2cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x23be30: 0x50a40009  beql        $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23BE30u;
    {
        const bool branch_taken_0x23be30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x23be30) {
            ctx->pc = 0x23BE34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BE30u;
            // 0x23be34: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23BE58u;
            goto label_23be58;
        }
    }
    ctx->pc = 0x23BE38u;
    // 0x23be38: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23BE38u;
    {
        const bool branch_taken_0x23be38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BE38u;
        // 0x23be3c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23be38) {
            ctx->pc = 0x23BE48u;
            goto label_23be48;
        }
    }
    ctx->pc = 0x23BE40u;
    // 0x23be40: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23BE40u;
    {
        const bool branch_taken_0x23be40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x23be40) {
            ctx->pc = 0x23BE44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BE40u;
            // 0x23be44: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23BE64u;
            goto label_23be64;
        }
    }
    ctx->pc = 0x23BE48u;
label_23be48:
    // 0x23be48: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23be48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23be4c: 0x8c432fbc  lw          $v1, 0x2FBC($v0)
    ctx->pc = 0x23be4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12220)));
    // 0x23be50: 0x100000f9  b           . + 4 + (0xF9 << 2)
    ctx->pc = 0x23BE50u;
    {
        const bool branch_taken_0x23be50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BE50u;
        // 0x23be54: 0x8c442fc0  lw          $a0, 0x2FC0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23be50) {
            ctx->pc = 0x23C238u;
            goto label_23c238;
        }
    }
    ctx->pc = 0x23BE58u;
label_23be58:
    // 0x23be58: 0x8c432fc4  lw          $v1, 0x2FC4($v0)
    ctx->pc = 0x23be58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12228)));
    // 0x23be5c: 0x100000f6  b           . + 4 + (0xF6 << 2)
    ctx->pc = 0x23BE5Cu;
    {
        const bool branch_taken_0x23be5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BE5Cu;
        // 0x23be60: 0x8c442fc8  lw          $a0, 0x2FC8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12232)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23be5c) {
            ctx->pc = 0x23C238u;
            goto label_23c238;
        }
    }
    ctx->pc = 0x23BE64u;
label_23be64:
    // 0x23be64: 0x8c432fcc  lw          $v1, 0x2FCC($v0)
    ctx->pc = 0x23be64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12236)));
    // 0x23be68: 0x100000f3  b           . + 4 + (0xF3 << 2)
    ctx->pc = 0x23BE68u;
    {
        const bool branch_taken_0x23be68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BE68u;
        // 0x23be6c: 0x8c442fd0  lw          $a0, 0x2FD0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23be68) {
            ctx->pc = 0x23C238u;
            goto label_23c238;
        }
    }
    ctx->pc = 0x23BE70u;
label_23be70:
    // 0x23be70: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23be70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23be74: 0x8c4317f8  lw          $v1, 0x17F8($v0)
    ctx->pc = 0x23be74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6136)));
    // 0x23be78: 0x100000ef  b           . + 4 + (0xEF << 2)
    ctx->pc = 0x23BE78u;
    {
        const bool branch_taken_0x23be78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BE78u;
        // 0x23be7c: 0x8c4417fc  lw          $a0, 0x17FC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23be78) {
            ctx->pc = 0x23C238u;
            goto label_23c238;
        }
    }
    ctx->pc = 0x23BE80u;
label_23be80:
    // 0x23be80: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23BE80u;
    SET_GPR_U32(ctx, 31, 0x23BE88u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23BE80u, 0x23BE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BE88u;
label_23be88:
    // 0x23be88: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23be88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23be8c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23BE8Cu;
    {
        const bool branch_taken_0x23be8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BE8Cu;
        // 0x23be90: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23be8c) {
            ctx->pc = 0x23BEA0u;
            goto label_23bea0;
        }
    }
    ctx->pc = 0x23BE94u;
    // 0x23be94: 0x8c4318dc  lw          $v1, 0x18DC($v0)
    ctx->pc = 0x23be94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6364)));
    // 0x23be98: 0x100000e7  b           . + 4 + (0xE7 << 2)
    ctx->pc = 0x23BE98u;
    {
        const bool branch_taken_0x23be98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BE98u;
        // 0x23be9c: 0x8c4418e0  lw          $a0, 0x18E0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23be98) {
            ctx->pc = 0x23C238u;
            goto label_23c238;
        }
    }
    ctx->pc = 0x23BEA0u;
label_23bea0:
    // 0x23bea0: 0x8c4318e4  lw          $v1, 0x18E4($v0)
    ctx->pc = 0x23bea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6372)));
    // 0x23bea4: 0x100000e4  b           . + 4 + (0xE4 << 2)
    ctx->pc = 0x23BEA4u;
    {
        const bool branch_taken_0x23bea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BEA4u;
        // 0x23bea8: 0x8c4418e8  lw          $a0, 0x18E8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bea4) {
            ctx->pc = 0x23C238u;
            goto label_23c238;
        }
    }
    ctx->pc = 0x23BEACu;
label_23beac:
    // 0x23beac: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23BEACu;
    SET_GPR_U32(ctx, 31, 0x23BEB4u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23BEACu, 0x23BEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BEB4u;
label_23beb4:
    // 0x23beb4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23beb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23beb8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23BEB8u;
    {
        const bool branch_taken_0x23beb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BEB8u;
        // 0x23bebc: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23beb8) {
            ctx->pc = 0x23BECCu;
            goto label_23becc;
        }
    }
    ctx->pc = 0x23BEC0u;
    // 0x23bec0: 0x8c433b1c  lw          $v1, 0x3B1C($v0)
    ctx->pc = 0x23bec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15132)));
    // 0x23bec4: 0x100000dc  b           . + 4 + (0xDC << 2)
    ctx->pc = 0x23BEC4u;
    {
        const bool branch_taken_0x23bec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BEC4u;
        // 0x23bec8: 0x8c443b20  lw          $a0, 0x3B20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bec4) {
            ctx->pc = 0x23C238u;
            goto label_23c238;
        }
    }
    ctx->pc = 0x23BECCu;
label_23becc:
    // 0x23becc: 0x8c433b24  lw          $v1, 0x3B24($v0)
    ctx->pc = 0x23beccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15140)));
    // 0x23bed0: 0x100000d9  b           . + 4 + (0xD9 << 2)
    ctx->pc = 0x23BED0u;
    {
        const bool branch_taken_0x23bed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BED0u;
        // 0x23bed4: 0x8c443b28  lw          $a0, 0x3B28($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bed0) {
            ctx->pc = 0x23C238u;
            goto label_23c238;
        }
    }
    ctx->pc = 0x23BED8u;
label_23bed8:
    // 0x23bed8: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23bed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23bedc: 0x8c431890  lw          $v1, 0x1890($v0)
    ctx->pc = 0x23bedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6288)));
    // 0x23bee0: 0x100000d5  b           . + 4 + (0xD5 << 2)
    ctx->pc = 0x23BEE0u;
    {
        const bool branch_taken_0x23bee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BEE0u;
        // 0x23bee4: 0x8c441894  lw          $a0, 0x1894($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bee0) {
            ctx->pc = 0x23C238u;
            goto label_23c238;
        }
    }
    ctx->pc = 0x23BEE8u;
label_23bee8:
    // 0x23bee8: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23bee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23beec: 0x8c431ea0  lw          $v1, 0x1EA0($v0)
    ctx->pc = 0x23beecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7840)));
    // 0x23bef0: 0x100000d1  b           . + 4 + (0xD1 << 2)
    ctx->pc = 0x23BEF0u;
    {
        const bool branch_taken_0x23bef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BEF0u;
        // 0x23bef4: 0x8c441ea4  lw          $a0, 0x1EA4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7844)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bef0) {
            ctx->pc = 0x23C238u;
            goto label_23c238;
        }
    }
    ctx->pc = 0x23BEF8u;
label_23bef8:
    // 0x23bef8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23BEF8u;
    SET_GPR_U32(ctx, 31, 0x23BF00u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23BEF8u, 0x23BF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BF00u;
label_23bf00:
    // 0x23bf00: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23bf00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23bf04: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23BF04u;
    {
        const bool branch_taken_0x23bf04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BF04u;
        // 0x23bf08: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bf04) {
            ctx->pc = 0x23BF18u;
            goto label_23bf18;
        }
    }
    ctx->pc = 0x23BF0Cu;
    // 0x23bf0c: 0x8c4334f4  lw          $v1, 0x34F4($v0)
    ctx->pc = 0x23bf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13556)));
    // 0x23bf10: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x23BF10u;
    {
        const bool branch_taken_0x23bf10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BF10u;
        // 0x23bf14: 0x8c4434f8  lw          $a0, 0x34F8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bf10) {
            ctx->pc = 0x23C238u;
            goto label_23c238;
        }
    }
    ctx->pc = 0x23BF18u;
label_23bf18:
    // 0x23bf18: 0x8c4334fc  lw          $v1, 0x34FC($v0)
    ctx->pc = 0x23bf18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13564)));
    // 0x23bf1c: 0x100000c6  b           . + 4 + (0xC6 << 2)
    ctx->pc = 0x23BF1Cu;
    {
        const bool branch_taken_0x23bf1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BF1Cu;
        // 0x23bf20: 0x8c443500  lw          $a0, 0x3500($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bf1c) {
            ctx->pc = 0x23C238u;
            goto label_23c238;
        }
    }
    ctx->pc = 0x23BF24u;
label_23bf24:
    // 0x23bf24: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23BF24u;
    SET_GPR_U32(ctx, 31, 0x23BF2Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23BF24u, 0x23BF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BF2Cu;
label_23bf2c:
    // 0x23bf2c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23bf2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23bf30: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23BF30u;
    {
        const bool branch_taken_0x23bf30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BF30u;
        // 0x23bf34: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bf30) {
            ctx->pc = 0x23BF44u;
            goto label_23bf44;
        }
    }
    ctx->pc = 0x23BF38u;
    // 0x23bf38: 0x8c4335c0  lw          $v1, 0x35C0($v0)
    ctx->pc = 0x23bf38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13760)));
    // 0x23bf3c: 0x100000be  b           . + 4 + (0xBE << 2)
    ctx->pc = 0x23BF3Cu;
    {
        const bool branch_taken_0x23bf3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BF3Cu;
        // 0x23bf40: 0x8c4435c4  lw          $a0, 0x35C4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13764)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bf3c) {
            ctx->pc = 0x23C238u;
            goto label_23c238;
        }
    }
    ctx->pc = 0x23BF44u;
label_23bf44:
    // 0x23bf44: 0x8c4334fc  lw          $v1, 0x34FC($v0)
    ctx->pc = 0x23bf44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13564)));
    // 0x23bf48: 0x100000bb  b           . + 4 + (0xBB << 2)
    ctx->pc = 0x23BF48u;
    {
        const bool branch_taken_0x23bf48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BF48u;
        // 0x23bf4c: 0x8c443500  lw          $a0, 0x3500($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bf48) {
            ctx->pc = 0x23C238u;
            goto label_23c238;
        }
    }
    ctx->pc = 0x23BF50u;
label_23bf50:
    // 0x23bf50: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23BF50u;
    SET_GPR_U32(ctx, 31, 0x23BF58u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23BF50u, 0x23BF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BF58u;
label_23bf58:
    // 0x23bf58: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x23bf58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23bf5c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23bf5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23bf60: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x23bf60u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x23bf64: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23BF64u;
    {
        const bool branch_taken_0x23bf64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bf64) {
            ctx->pc = 0x23BF68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BF64u;
            // 0x23bf68: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23BF6Cu;
            goto label_23bf6c;
        }
    }
    ctx->pc = 0x23BF6Cu;
label_23bf6c:
    // 0x23bf6c: 0x2810  mfhi        $a1
    ctx->pc = 0x23bf6cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x23bf70: 0x50a40009  beql        $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23BF70u;
    {
        const bool branch_taken_0x23bf70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x23bf70) {
            ctx->pc = 0x23BF74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BF70u;
            // 0x23bf74: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23BF98u;
            goto label_23bf98;
        }
    }
    ctx->pc = 0x23BF78u;
    // 0x23bf78: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23BF78u;
    {
        const bool branch_taken_0x23bf78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BF78u;
        // 0x23bf7c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bf78) {
            ctx->pc = 0x23BF88u;
            goto label_23bf88;
        }
    }
    ctx->pc = 0x23BF80u;
    // 0x23bf80: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23BF80u;
    {
        const bool branch_taken_0x23bf80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x23bf80) {
            ctx->pc = 0x23BF84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BF80u;
            // 0x23bf84: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23BFA4u;
            goto label_23bfa4;
        }
    }
    ctx->pc = 0x23BF88u;
label_23bf88:
    // 0x23bf88: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23bf88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23bf8c: 0x8c431a30  lw          $v1, 0x1A30($v0)
    ctx->pc = 0x23bf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6704)));
    // 0x23bf90: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x23BF90u;
    {
        const bool branch_taken_0x23bf90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BF90u;
        // 0x23bf94: 0x8c441a34  lw          $a0, 0x1A34($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bf90) {
            ctx->pc = 0x23C238u;
            goto label_23c238;
        }
    }
    ctx->pc = 0x23BF98u;
label_23bf98:
    // 0x23bf98: 0x8c431a38  lw          $v1, 0x1A38($v0)
    ctx->pc = 0x23bf98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6712)));
    // 0x23bf9c: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x23BF9Cu;
    {
        const bool branch_taken_0x23bf9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BF9Cu;
        // 0x23bfa0: 0x8c441a3c  lw          $a0, 0x1A3C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6716)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bf9c) {
            ctx->pc = 0x23C238u;
            goto label_23c238;
        }
    }
    ctx->pc = 0x23BFA4u;
label_23bfa4:
    // 0x23bfa4: 0x8c431a40  lw          $v1, 0x1A40($v0)
    ctx->pc = 0x23bfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6720)));
    // 0x23bfa8: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x23BFA8u;
    {
        const bool branch_taken_0x23bfa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BFA8u;
        // 0x23bfac: 0x8c441a44  lw          $a0, 0x1A44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bfa8) {
            ctx->pc = 0x23C238u;
            goto label_23c238;
        }
    }
    ctx->pc = 0x23BFB0u;
label_23bfb0:
    // 0x23bfb0: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23BFB0u;
    SET_GPR_U32(ctx, 31, 0x23BFB8u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23BFB0u, 0x23BFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BFB8u;
label_23bfb8:
    // 0x23bfb8: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x23bfb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x23bfbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23bfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23bfc0: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x23BFC0u;
    {
        const bool branch_taken_0x23bfc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23bfc0) {
            ctx->pc = 0x23BFC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BFC0u;
            // 0x23bfc4: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23BFF0u;
            goto label_23bff0;
        }
    }
    ctx->pc = 0x23BFC8u;
    // 0x23bfc8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x23BFC8u;
    {
        const bool branch_taken_0x23bfc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BFC8u;
        // 0x23bfcc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bfc8) {
            ctx->pc = 0x23BFE0u;
            goto label_23bfe0;
        }
    }
    ctx->pc = 0x23BFD0u;
    // 0x23bfd0: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x23BFD0u;
    {
        const bool branch_taken_0x23bfd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23BFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BFD0u;
        // 0x23bfd4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bfd0) {
            ctx->pc = 0x23BFFCu;
            goto label_23bffc;
        }
    }
    ctx->pc = 0x23BFD8u;
    // 0x23bfd8: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x23BFD8u;
    {
        const bool branch_taken_0x23bfd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23bfd8) {
            ctx->pc = 0x23BFDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BFD8u;
            // 0x23bfdc: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C00Cu;
            goto label_23c00c;
        }
    }
    ctx->pc = 0x23BFE0u;
label_23bfe0:
    // 0x23bfe0: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23bfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23bfe4: 0x8c4331c4  lw          $v1, 0x31C4($v0)
    ctx->pc = 0x23bfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12740)));
    // 0x23bfe8: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x23BFE8u;
    {
        const bool branch_taken_0x23bfe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BFE8u;
        // 0x23bfec: 0x8c4431c8  lw          $a0, 0x31C8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12744)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bfe8) {
            ctx->pc = 0x23C238u;
            goto label_23c238;
        }
    }
    ctx->pc = 0x23BFF0u;
label_23bff0:
    // 0x23bff0: 0x8c4331cc  lw          $v1, 0x31CC($v0)
    ctx->pc = 0x23bff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12748)));
    // 0x23bff4: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x23BFF4u;
    {
        const bool branch_taken_0x23bff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BFF4u;
        // 0x23bff8: 0x8c4431d0  lw          $a0, 0x31D0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12752)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bff4) {
            ctx->pc = 0x23C238u;
            goto label_23c238;
        }
    }
    ctx->pc = 0x23BFFCu;
label_23bffc:
    // 0x23bffc: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23bffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23c000: 0x8c4331d4  lw          $v1, 0x31D4($v0)
    ctx->pc = 0x23c000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12756)));
    // 0x23c004: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x23C004u;
    {
        const bool branch_taken_0x23c004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C004u;
        // 0x23c008: 0x8c4431d8  lw          $a0, 0x31D8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12760)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c004) {
            ctx->pc = 0x23C238u;
            goto label_23c238;
        }
    }
    ctx->pc = 0x23C00Cu;
label_23c00c:
    // 0x23c00c: 0x8c4331dc  lw          $v1, 0x31DC($v0)
    ctx->pc = 0x23c00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12764)));
    // 0x23c010: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x23C010u;
    {
        const bool branch_taken_0x23c010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C010u;
        // 0x23c014: 0x8c4431e0  lw          $a0, 0x31E0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12768)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c010) {
            ctx->pc = 0x23C238u;
            goto label_23c238;
        }
    }
    ctx->pc = 0x23C018u;
label_23c018:
    // 0x23c018: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23c018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23c01c: 0x8e670740  lw          $a3, 0x740($s3)
    ctx->pc = 0x23c01cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1856)));
    // 0x23c020: 0x8c4333b8  lw          $v1, 0x33B8($v0)
    ctx->pc = 0x23c020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13240)));
    // 0x23c024: 0x8c4433bc  lw          $a0, 0x33BC($v0)
    ctx->pc = 0x23c024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13244)));
    // 0x23c028: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x23c028u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23c02c: 0x10e000b5  beqz        $a3, . + 4 + (0xB5 << 2)
    ctx->pc = 0x23C02Cu;
    {
        const bool branch_taken_0x23c02c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C02Cu;
        // 0x23c030: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c02c) {
            ctx->pc = 0x23C304u;
            goto label_23c304;
        }
    }
    ctx->pc = 0x23C034u;
    // 0x23c034: 0xc09f6bc  jal         func_27DAF0
    ctx->pc = 0x23C034u;
    SET_GPR_U32(ctx, 31, 0x23C03Cu);
    ctx->pc = 0x23C038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C034u;
    // 0x23c038: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27DAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DAF0u, 0x23C034u, 0x23C03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C03Cu;
label_23c03c:
    // 0x23c03c: 0x100000b2  b           . + 4 + (0xB2 << 2)
    ctx->pc = 0x23C03Cu;
    {
        const bool branch_taken_0x23c03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C03Cu;
        // 0x23c040: 0x8e6206ec  lw          $v0, 0x6EC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c03c) {
            ctx->pc = 0x23C308u;
            goto label_23c308;
        }
    }
    ctx->pc = 0x23C044u;
label_23c044:
    // 0x23c044: 0x8e6216d4  lw          $v0, 0x16D4($s3)
    ctx->pc = 0x23c044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 5844)));
    // 0x23c048: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x23c048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x23c04c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23c04cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x23c050: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23C050u;
    {
        const bool branch_taken_0x23c050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C050u;
        // 0x23c054: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c050) {
            ctx->pc = 0x23C064u;
            goto label_23c064;
        }
    }
    ctx->pc = 0x23C058u;
    // 0x23c058: 0x8c433770  lw          $v1, 0x3770($v0)
    ctx->pc = 0x23c058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14192)));
    // 0x23c05c: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x23C05Cu;
    {
        const bool branch_taken_0x23c05c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C05Cu;
        // 0x23c060: 0x8c443774  lw          $a0, 0x3774($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c05c) {
            ctx->pc = 0x23C238u;
            goto label_23c238;
        }
    }
    ctx->pc = 0x23C064u;
label_23c064:
    // 0x23c064: 0x8e670744  lw          $a3, 0x744($s3)
    ctx->pc = 0x23c064u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1860)));
    // 0x23c068: 0x8c43372c  lw          $v1, 0x372C($v0)
    ctx->pc = 0x23c068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14124)));
    // 0x23c06c: 0x8c443730  lw          $a0, 0x3730($v0)
    ctx->pc = 0x23c06cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14128)));
    // 0x23c070: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x23c070u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23c074: 0x10e000a3  beqz        $a3, . + 4 + (0xA3 << 2)
    ctx->pc = 0x23C074u;
    {
        const bool branch_taken_0x23c074 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C074u;
        // 0x23c078: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c074) {
            ctx->pc = 0x23C304u;
            goto label_23c304;
        }
    }
    ctx->pc = 0x23C07Cu;
    // 0x23c07c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x23c07cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c080: 0xc09fa94  jal         func_27EA50
    ctx->pc = 0x23C080u;
    SET_GPR_U32(ctx, 31, 0x23C088u);
    ctx->pc = 0x23C084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C080u;
    // 0x23c084: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EA50u, 0x23C080u, 0x23C088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C088u;
label_23c088:
    // 0x23c088: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x23C088u;
    {
        const bool branch_taken_0x23c088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C088u;
        // 0x23c08c: 0x8e6206ec  lw          $v0, 0x6EC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c088) {
            ctx->pc = 0x23C308u;
            goto label_23c308;
        }
    }
    ctx->pc = 0x23C090u;
label_23c090:
    // 0x23c090: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23c090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23c094: 0x8c430f94  lw          $v1, 0xF94($v0)
    ctx->pc = 0x23c094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3988)));
    // 0x23c098: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x23C098u;
    {
        const bool branch_taken_0x23c098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C098u;
        // 0x23c09c: 0x8c440f98  lw          $a0, 0xF98($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3992)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c098) {
            ctx->pc = 0x23C238u;
            goto label_23c238;
        }
    }
    ctx->pc = 0x23C0A0u;
label_23c0a0:
    // 0x23c0a0: 0x8e670304  lw          $a3, 0x304($s3)
    ctx->pc = 0x23c0a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23c0a4: 0x926202f7  lbu         $v0, 0x2F7($s3)
    ctx->pc = 0x23c0a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 759)));
    // 0x23c0a8: 0x8ce32224  lw          $v1, 0x2224($a3)
    ctx->pc = 0x23c0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8740)));
    // 0x23c0ac: 0x8ce42228  lw          $a0, 0x2228($a3)
    ctx->pc = 0x23c0acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8744)));
    // 0x23c0b0: 0x679021  addu        $s2, $v1, $a3
    ctx->pc = 0x23c0b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x23c0b4: 0x10400093  beqz        $v0, . + 4 + (0x93 << 2)
    ctx->pc = 0x23C0B4u;
    {
        const bool branch_taken_0x23c0b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C0B4u;
        // 0x23c0b8: 0x878821  addu        $s1, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c0b4) {
            ctx->pc = 0x23C304u;
            goto label_23c304;
        }
    }
    ctx->pc = 0x23C0BCu;
    // 0x23c0bc: 0x8ce2222c  lw          $v0, 0x222C($a3)
    ctx->pc = 0x23c0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8748)));
    // 0x23c0c0: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x23C0C0u;
    {
        const bool branch_taken_0x23c0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C0C0u;
        // 0x23c0c4: 0x478821  addu        $s1, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c0c0) {
            ctx->pc = 0x23C304u;
            goto label_23c304;
        }
    }
    ctx->pc = 0x23C0C8u;
label_23c0c8:
    // 0x23c0c8: 0x8e670304  lw          $a3, 0x304($s3)
    ctx->pc = 0x23c0c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23c0cc: 0x926202f7  lbu         $v0, 0x2F7($s3)
    ctx->pc = 0x23c0ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 759)));
    // 0x23c0d0: 0x8ce32248  lw          $v1, 0x2248($a3)
    ctx->pc = 0x23c0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8776)));
    // 0x23c0d4: 0x8ce4224c  lw          $a0, 0x224C($a3)
    ctx->pc = 0x23c0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8780)));
    // 0x23c0d8: 0x679021  addu        $s2, $v1, $a3
    ctx->pc = 0x23c0d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x23c0dc: 0x10400089  beqz        $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x23C0DCu;
    {
        const bool branch_taken_0x23c0dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C0DCu;
        // 0x23c0e0: 0x878821  addu        $s1, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c0dc) {
            ctx->pc = 0x23C304u;
            goto label_23c304;
        }
    }
    ctx->pc = 0x23C0E4u;
    // 0x23c0e4: 0x8ce22250  lw          $v0, 0x2250($a3)
    ctx->pc = 0x23c0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8784)));
    // 0x23c0e8: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x23C0E8u;
    {
        const bool branch_taken_0x23c0e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C0E8u;
        // 0x23c0ec: 0x478821  addu        $s1, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c0e8) {
            ctx->pc = 0x23C304u;
            goto label_23c304;
        }
    }
    ctx->pc = 0x23C0F0u;
label_23c0f0:
    // 0x23c0f0: 0x8e670304  lw          $a3, 0x304($s3)
    ctx->pc = 0x23c0f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23c0f4: 0x926202f7  lbu         $v0, 0x2F7($s3)
    ctx->pc = 0x23c0f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 759)));
    // 0x23c0f8: 0x8ce32230  lw          $v1, 0x2230($a3)
    ctx->pc = 0x23c0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8752)));
    // 0x23c0fc: 0x8ce42234  lw          $a0, 0x2234($a3)
    ctx->pc = 0x23c0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8756)));
    // 0x23c100: 0x679021  addu        $s2, $v1, $a3
    ctx->pc = 0x23c100u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x23c104: 0x1040007f  beqz        $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x23C104u;
    {
        const bool branch_taken_0x23c104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C104u;
        // 0x23c108: 0x878821  addu        $s1, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c104) {
            ctx->pc = 0x23C304u;
            goto label_23c304;
        }
    }
    ctx->pc = 0x23C10Cu;
    // 0x23c10c: 0x8ce22238  lw          $v0, 0x2238($a3)
    ctx->pc = 0x23c10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8760)));
    // 0x23c110: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x23C110u;
    {
        const bool branch_taken_0x23c110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C110u;
        // 0x23c114: 0x478821  addu        $s1, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c110) {
            ctx->pc = 0x23C304u;
            goto label_23c304;
        }
    }
    ctx->pc = 0x23C118u;
label_23c118:
    // 0x23c118: 0x8e670304  lw          $a3, 0x304($s3)
    ctx->pc = 0x23c118u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23c11c: 0x926202f7  lbu         $v0, 0x2F7($s3)
    ctx->pc = 0x23c11cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 759)));
    // 0x23c120: 0x8ce32254  lw          $v1, 0x2254($a3)
    ctx->pc = 0x23c120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8788)));
    // 0x23c124: 0x8ce42258  lw          $a0, 0x2258($a3)
    ctx->pc = 0x23c124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8792)));
    // 0x23c128: 0x679021  addu        $s2, $v1, $a3
    ctx->pc = 0x23c128u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x23c12c: 0x10400075  beqz        $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x23C12Cu;
    {
        const bool branch_taken_0x23c12c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C12Cu;
        // 0x23c130: 0x878821  addu        $s1, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c12c) {
            ctx->pc = 0x23C304u;
            goto label_23c304;
        }
    }
    ctx->pc = 0x23C134u;
    // 0x23c134: 0x8ce2225c  lw          $v0, 0x225C($a3)
    ctx->pc = 0x23c134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8796)));
    // 0x23c138: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x23C138u;
    {
        const bool branch_taken_0x23c138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C138u;
        // 0x23c13c: 0x478821  addu        $s1, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c138) {
            ctx->pc = 0x23C304u;
            goto label_23c304;
        }
    }
    ctx->pc = 0x23C140u;
label_23c140:
    // 0x23c140: 0x8e670304  lw          $a3, 0x304($s3)
    ctx->pc = 0x23c140u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23c144: 0x926202f7  lbu         $v0, 0x2F7($s3)
    ctx->pc = 0x23c144u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 759)));
    // 0x23c148: 0x8ce3223c  lw          $v1, 0x223C($a3)
    ctx->pc = 0x23c148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8764)));
    // 0x23c14c: 0x8ce42240  lw          $a0, 0x2240($a3)
    ctx->pc = 0x23c14cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8768)));
    // 0x23c150: 0x679021  addu        $s2, $v1, $a3
    ctx->pc = 0x23c150u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x23c154: 0x1040006b  beqz        $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x23C154u;
    {
        const bool branch_taken_0x23c154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C154u;
        // 0x23c158: 0x878821  addu        $s1, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c154) {
            ctx->pc = 0x23C304u;
            goto label_23c304;
        }
    }
    ctx->pc = 0x23C15Cu;
    // 0x23c15c: 0x8ce22244  lw          $v0, 0x2244($a3)
    ctx->pc = 0x23c15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8772)));
    // 0x23c160: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x23C160u;
    {
        const bool branch_taken_0x23c160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C160u;
        // 0x23c164: 0x478821  addu        $s1, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c160) {
            ctx->pc = 0x23C304u;
            goto label_23c304;
        }
    }
    ctx->pc = 0x23C168u;
label_23c168:
    // 0x23c168: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23C168u;
    SET_GPR_U32(ctx, 31, 0x23C170u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23C168u, 0x23C170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C170u;
label_23c170:
    // 0x23c170: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23c170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23c174: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23C174u;
    {
        const bool branch_taken_0x23c174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C174u;
        // 0x23c178: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c174) {
            ctx->pc = 0x23C188u;
            goto label_23c188;
        }
    }
    ctx->pc = 0x23C17Cu;
    // 0x23c17c: 0x8c431d68  lw          $v1, 0x1D68($v0)
    ctx->pc = 0x23c17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7528)));
    // 0x23c180: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x23C180u;
    {
        const bool branch_taken_0x23c180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C180u;
        // 0x23c184: 0x8c441d6c  lw          $a0, 0x1D6C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7532)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c180) {
            ctx->pc = 0x23C238u;
            goto label_23c238;
        }
    }
    ctx->pc = 0x23C188u;
label_23c188:
    // 0x23c188: 0x8c431d70  lw          $v1, 0x1D70($v0)
    ctx->pc = 0x23c188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7536)));
    // 0x23c18c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x23C18Cu;
    {
        const bool branch_taken_0x23c18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C18Cu;
        // 0x23c190: 0x8c441d74  lw          $a0, 0x1D74($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7540)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c18c) {
            ctx->pc = 0x23C238u;
            goto label_23c238;
        }
    }
    ctx->pc = 0x23C194u;
label_23c194:
    // 0x23c194: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23c194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23c198: 0x8c432d38  lw          $v1, 0x2D38($v0)
    ctx->pc = 0x23c198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11576)));
    // 0x23c19c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x23C19Cu;
    {
        const bool branch_taken_0x23c19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C19Cu;
        // 0x23c1a0: 0x8c442d3c  lw          $a0, 0x2D3C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c19c) {
            ctx->pc = 0x23C238u;
            goto label_23c238;
        }
    }
    ctx->pc = 0x23C1A4u;
label_23c1a4:
    // 0x23c1a4: 0x8e6216d4  lw          $v0, 0x16D4($s3)
    ctx->pc = 0x23c1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 5844)));
    // 0x23c1a8: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x23c1a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x23c1ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23C1ACu;
    {
        const bool branch_taken_0x23c1ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C1ACu;
        // 0x23c1b0: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c1ac) {
            ctx->pc = 0x23C1C0u;
            goto label_23c1c0;
        }
    }
    ctx->pc = 0x23C1B4u;
    // 0x23c1b4: 0x8c4324ac  lw          $v1, 0x24AC($v0)
    ctx->pc = 0x23c1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9388)));
    // 0x23c1b8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x23C1B8u;
    {
        const bool branch_taken_0x23c1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C1B8u;
        // 0x23c1bc: 0x8c4424b0  lw          $a0, 0x24B0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9392)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c1b8) {
            ctx->pc = 0x23C238u;
            goto label_23c238;
        }
    }
    ctx->pc = 0x23C1C0u;
label_23c1c0:
    // 0x23c1c0: 0x8c430f94  lw          $v1, 0xF94($v0)
    ctx->pc = 0x23c1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3988)));
    // 0x23c1c4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x23C1C4u;
    {
        const bool branch_taken_0x23c1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C1C4u;
        // 0x23c1c8: 0x8c440f98  lw          $a0, 0xF98($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3992)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c1c4) {
            ctx->pc = 0x23C238u;
            goto label_23c238;
        }
    }
    ctx->pc = 0x23C1CCu;
label_23c1cc:
    // 0x23c1cc: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23C1CCu;
    SET_GPR_U32(ctx, 31, 0x23C1D4u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23C1CCu, 0x23C1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C1D4u;
label_23c1d4:
    // 0x23c1d4: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x23c1d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23c1d8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23C1D8u;
    {
        const bool branch_taken_0x23c1d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C1D8u;
        // 0x23c1dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c1d8) {
            ctx->pc = 0x23C1E8u;
            goto label_23c1e8;
        }
    }
    ctx->pc = 0x23C1E0u;
    // 0x23c1e0: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23C1E0u;
    {
        const bool branch_taken_0x23c1e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23c1e0) {
            ctx->pc = 0x23C1E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C1E0u;
            // 0x23c1e4: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C1F8u;
            goto label_23c1f8;
        }
    }
    ctx->pc = 0x23C1E8u;
label_23c1e8:
    // 0x23c1e8: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23c1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23c1ec: 0x8c432afc  lw          $v1, 0x2AFC($v0)
    ctx->pc = 0x23c1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11004)));
    // 0x23c1f0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x23C1F0u;
    {
        const bool branch_taken_0x23c1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C1F0u;
        // 0x23c1f4: 0x8c442b00  lw          $a0, 0x2B00($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c1f0) {
            ctx->pc = 0x23C238u;
            goto label_23c238;
        }
    }
    ctx->pc = 0x23C1F8u;
label_23c1f8:
    // 0x23c1f8: 0x8c432b04  lw          $v1, 0x2B04($v0)
    ctx->pc = 0x23c1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
    // 0x23c1fc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x23C1FCu;
    {
        const bool branch_taken_0x23c1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C1FCu;
        // 0x23c200: 0x8c442b08  lw          $a0, 0x2B08($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11016)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c1fc) {
            ctx->pc = 0x23C238u;
            goto label_23c238;
        }
    }
    ctx->pc = 0x23C204u;
label_23c204:
    // 0x23c204: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23C204u;
    SET_GPR_U32(ctx, 31, 0x23C20Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23C204u, 0x23C20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C20Cu;
label_23c20c:
    // 0x23c20c: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x23c20cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23c210: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23C210u;
    {
        const bool branch_taken_0x23c210 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C210u;
        // 0x23c214: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c210) {
            ctx->pc = 0x23C220u;
            goto label_23c220;
        }
    }
    ctx->pc = 0x23C218u;
    // 0x23c218: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23C218u;
    {
        const bool branch_taken_0x23c218 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23c218) {
            ctx->pc = 0x23C21Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C218u;
            // 0x23c21c: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C230u;
            goto label_23c230;
        }
    }
    ctx->pc = 0x23C220u;
label_23c220:
    // 0x23c220: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23c220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23c224: 0x8c432c40  lw          $v1, 0x2C40($v0)
    ctx->pc = 0x23c224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11328)));
    // 0x23c228: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x23C228u;
    {
        const bool branch_taken_0x23c228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C228u;
        // 0x23c22c: 0x8c442c44  lw          $a0, 0x2C44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c228) {
            ctx->pc = 0x23C238u;
            goto label_23c238;
        }
    }
    ctx->pc = 0x23C230u;
label_23c230:
    // 0x23c230: 0x8c432c48  lw          $v1, 0x2C48($v0)
    ctx->pc = 0x23c230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11336)));
    // 0x23c234: 0x8c442c4c  lw          $a0, 0x2C4C($v0)
    ctx->pc = 0x23c234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11340)));
label_23c238:
    // 0x23c238: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x23c238u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23c23c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x23C23Cu;
    {
        const bool branch_taken_0x23c23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C23Cu;
        // 0x23c240: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c23c) {
            ctx->pc = 0x23C304u;
            goto label_23c304;
        }
    }
    ctx->pc = 0x23C244u;
label_23c244:
    // 0x23c244: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23C244u;
    SET_GPR_U32(ctx, 31, 0x23C24Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23C244u, 0x23C24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C24Cu;
label_23c24c:
    // 0x23c24c: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x23c24cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23c250: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23C250u;
    {
        const bool branch_taken_0x23c250 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C250u;
        // 0x23c254: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c250) {
            ctx->pc = 0x23C260u;
            goto label_23c260;
        }
    }
    ctx->pc = 0x23C258u;
    // 0x23c258: 0x50620017  beql        $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x23C258u;
    {
        const bool branch_taken_0x23c258 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23c258) {
            ctx->pc = 0x23C25Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C258u;
            // 0x23c25c: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C2B8u;
            goto label_23c2b8;
        }
    }
    ctx->pc = 0x23C260u;
label_23c260:
    // 0x23c260: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23c260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23c264: 0x8e670748  lw          $a3, 0x748($s3)
    ctx->pc = 0x23c264u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1864)));
    // 0x23c268: 0x8c433d54  lw          $v1, 0x3D54($v0)
    ctx->pc = 0x23c268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15700)));
    // 0x23c26c: 0x8c443d58  lw          $a0, 0x3D58($v0)
    ctx->pc = 0x23c26cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15704)));
    // 0x23c270: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x23c270u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23c274: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x23C274u;
    {
        const bool branch_taken_0x23c274 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C274u;
        // 0x23c278: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c274) {
            ctx->pc = 0x23C288u;
            goto label_23c288;
        }
    }
    ctx->pc = 0x23C27Cu;
    // 0x23c27c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x23c27cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c280: 0xc0a049e  jal         func_281278
    ctx->pc = 0x23C280u;
    SET_GPR_U32(ctx, 31, 0x23C288u);
    ctx->pc = 0x23C284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C280u;
    // 0x23c284: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281278u, 0x23C280u, 0x23C288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C288u;
label_23c288:
    // 0x23c288: 0x8e64074c  lw          $a0, 0x74C($s3)
    ctx->pc = 0x23c288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1868)));
    // 0x23c28c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x23C28Cu;
    {
        const bool branch_taken_0x23c28c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c28c) {
            ctx->pc = 0x23C290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C28Cu;
            // 0x23c290: 0x8e640750  lw          $a0, 0x750($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1872)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C2A0u;
            goto label_23c2a0;
        }
    }
    ctx->pc = 0x23C294u;
    // 0x23c294: 0xc0a0c62  jal         func_283188
    ctx->pc = 0x23C294u;
    SET_GPR_U32(ctx, 31, 0x23C29Cu);
    ctx->pc = 0x23C298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C294u;
    // 0x23c298: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283188u, 0x23C294u, 0x23C29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C29Cu;
label_23c29c:
    // 0x23c29c: 0x8e640750  lw          $a0, 0x750($s3)
    ctx->pc = 0x23c29cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1872)));
label_23c2a0:
    // 0x23c2a0: 0x50800019  beql        $a0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x23C2A0u;
    {
        const bool branch_taken_0x23c2a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c2a0) {
            ctx->pc = 0x23C2A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C2A0u;
            // 0x23c2a4: 0x8e6206ec  lw          $v0, 0x6EC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C308u;
            goto label_23c308;
        }
    }
    ctx->pc = 0x23C2A8u;
    // 0x23c2a8: 0xc0a0c62  jal         func_283188
    ctx->pc = 0x23C2A8u;
    SET_GPR_U32(ctx, 31, 0x23C2B0u);
    ctx->pc = 0x23C2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C2A8u;
    // 0x23c2ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283188u, 0x23C2A8u, 0x23C2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C2B0u;
label_23c2b0:
    // 0x23c2b0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x23C2B0u;
    {
        const bool branch_taken_0x23c2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C2B0u;
        // 0x23c2b4: 0x8e6206ec  lw          $v0, 0x6EC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c2b0) {
            ctx->pc = 0x23C308u;
            goto label_23c308;
        }
    }
    ctx->pc = 0x23C2B8u;
label_23c2b8:
    // 0x23c2b8: 0x8e670748  lw          $a3, 0x748($s3)
    ctx->pc = 0x23c2b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1864)));
    // 0x23c2bc: 0x8c433d5c  lw          $v1, 0x3D5C($v0)
    ctx->pc = 0x23c2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15708)));
    // 0x23c2c0: 0x8c443d60  lw          $a0, 0x3D60($v0)
    ctx->pc = 0x23c2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15712)));
    // 0x23c2c4: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x23c2c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23c2c8: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x23C2C8u;
    {
        const bool branch_taken_0x23c2c8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C2C8u;
        // 0x23c2cc: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c2c8) {
            ctx->pc = 0x23C2DCu;
            goto label_23c2dc;
        }
    }
    ctx->pc = 0x23C2D0u;
    // 0x23c2d0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x23c2d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c2d4: 0xc0a049e  jal         func_281278
    ctx->pc = 0x23C2D4u;
    SET_GPR_U32(ctx, 31, 0x23C2DCu);
    ctx->pc = 0x23C2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C2D4u;
    // 0x23c2d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281278u, 0x23C2D4u, 0x23C2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C2DCu;
label_23c2dc:
    // 0x23c2dc: 0x8e64074c  lw          $a0, 0x74C($s3)
    ctx->pc = 0x23c2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1868)));
    // 0x23c2e0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x23C2E0u;
    {
        const bool branch_taken_0x23c2e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c2e0) {
            ctx->pc = 0x23C2E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C2E0u;
            // 0x23c2e4: 0x8e640750  lw          $a0, 0x750($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1872)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C2F4u;
            goto label_23c2f4;
        }
    }
    ctx->pc = 0x23C2E8u;
    // 0x23c2e8: 0xc0a0c62  jal         func_283188
    ctx->pc = 0x23C2E8u;
    SET_GPR_U32(ctx, 31, 0x23C2F0u);
    ctx->pc = 0x23C2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C2E8u;
    // 0x23c2ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283188u, 0x23C2E8u, 0x23C2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C2F0u;
label_23c2f0:
    // 0x23c2f0: 0x8e640750  lw          $a0, 0x750($s3)
    ctx->pc = 0x23c2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1872)));
label_23c2f4:
    // 0x23c2f4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x23C2F4u;
    {
        const bool branch_taken_0x23c2f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c2f4) {
            ctx->pc = 0x23C2F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C2F4u;
            // 0x23c2f8: 0x8e6206ec  lw          $v0, 0x6EC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C308u;
            goto label_23c308;
        }
    }
    ctx->pc = 0x23C2FCu;
    // 0x23c2fc: 0xc0a0c62  jal         func_283188
    ctx->pc = 0x23C2FCu;
    SET_GPR_U32(ctx, 31, 0x23C304u);
    ctx->pc = 0x23C300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C2FCu;
    // 0x23c300: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283188u, 0x23C2FCu, 0x23C304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C304u;
label_23c304:
    // 0x23c304: 0x8e6206ec  lw          $v0, 0x6EC($s3)
    ctx->pc = 0x23c304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1772)));
label_23c308:
    // 0x23c308: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23C308u;
    {
        const bool branch_taken_0x23c308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c308) {
            ctx->pc = 0x23C324u;
            goto label_23c324;
        }
    }
    ctx->pc = 0x23C310u;
    // 0x23c310: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23c310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23c314: 0x8c4303e4  lw          $v1, 0x3E4($v0)
    ctx->pc = 0x23c314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 996)));
    // 0x23c318: 0x8c4403e8  lw          $a0, 0x3E8($v0)
    ctx->pc = 0x23c318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1000)));
    // 0x23c31c: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x23c31cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23c320: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x23c320u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_23c324:
    // 0x23c324: 0xc09d91a  jal         func_276468
    ctx->pc = 0x23C324u;
    SET_GPR_U32(ctx, 31, 0x23C32Cu);
    ctx->pc = 0x23C328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C324u;
    // 0x23c328: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x23C324u, 0x23C32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C32Cu;
label_23c32c:
    // 0x23c32c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x23c32cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23c330: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x23c330u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x23c334: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23c334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c338: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23c338u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c33c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23c33cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c340: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x23c340u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x23c344: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x23C344u;
    SET_GPR_U32(ctx, 31, 0x23C34Cu);
    ctx->pc = 0x23C348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C344u;
    // 0x23c348: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x23C344u, 0x23C34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C34Cu;
label_23c34c:
    // 0x23c34c: 0x926202f6  lbu         $v0, 0x2F6($s3)
    ctx->pc = 0x23c34cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 758)));
    // 0x23c350: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23c350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23c354: 0xae6305f0  sw          $v1, 0x5F0($s3)
    ctx->pc = 0x23c354u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1520), GPR_U32(ctx, 3));
    // 0x23c358: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23c358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23c35c: 0xa26202f6  sb          $v0, 0x2F6($s3)
    ctx->pc = 0x23c35cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 758), (uint8_t)GPR_U32(ctx, 2));
label_23c360:
    // 0x23c360: 0x8e630564  lw          $v1, 0x564($s3)
    ctx->pc = 0x23c360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1380)));
    // 0x23c364: 0x28620264  slti        $v0, $v1, 0x264
    ctx->pc = 0x23c364u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)612) ? 1 : 0);
    // 0x23c368: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23C368u;
    {
        const bool branch_taken_0x23c368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C368u;
        // 0x23c36c: 0x28620266  slti        $v0, $v1, 0x266 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)614) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c368) {
            ctx->pc = 0x23C380u;
            goto label_23c380;
        }
    }
    ctx->pc = 0x23C370u;
    // 0x23c370: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x23C370u;
    {
        const bool branch_taken_0x23c370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C370u;
        // 0x23c374: 0x2402026a  addiu       $v0, $zero, 0x26A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 618));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c370) {
            ctx->pc = 0x23C3A8u;
            goto label_23c3a8;
        }
    }
    ctx->pc = 0x23C378u;
    // 0x23c378: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x23C378u;
    {
        const bool branch_taken_0x23c378 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23c378) {
            ctx->pc = 0x23C3A8u;
            goto label_23c3a8;
        }
    }
    ctx->pc = 0x23C380u;
label_23c380:
    // 0x23c380: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x23C380u;
    SET_GPR_U32(ctx, 31, 0x23C388u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x23C380u, 0x23C388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C388u;
label_23c388:
    // 0x23c388: 0xc66005a8  lwc1        $f0, 0x5A8($s3)
    ctx->pc = 0x23c388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23c38c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23c38cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c390: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x23c390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x23c394: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x23c394u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x23c398: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x23c398u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23c39c: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x23c39cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x23c3a0: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x23C3A0u;
    SET_GPR_U32(ctx, 31, 0x23C3A8u);
    ctx->pc = 0x23C3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C3A0u;
    // 0x23c3a4: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x23C3A0u, 0x23C3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C3A8u;
label_23c3a8:
    // 0x23c3a8: 0xc055f06  jal         func_157C18
    ctx->pc = 0x23C3A8u;
    SET_GPR_U32(ctx, 31, 0x23C3B0u);
    ctx->pc = 0x23C3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C3A8u;
    // 0x23c3ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x23C3A8u, 0x23C3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C3B0u;
label_23c3b0:
    // 0x23c3b0: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x23C3B0u;
    {
        const bool branch_taken_0x23c3b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c3b0) {
            ctx->pc = 0x23C4C0u;
            goto label_23c4c0;
        }
    }
    ctx->pc = 0x23C3B8u;
    // 0x23c3b8: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x23C3B8u;
    SET_GPR_U32(ctx, 31, 0x23C3C0u);
    ctx->pc = 0x23C3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C3B8u;
    // 0x23c3bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x23C3B8u, 0x23C3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C3C0u;
label_23c3c0:
    // 0x23c3c0: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x23C3C0u;
    {
        const bool branch_taken_0x23c3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c3c0) {
            ctx->pc = 0x23C4C0u;
            goto label_23c4c0;
        }
    }
    ctx->pc = 0x23C3C8u;
label_23c3c8:
    // 0x23c3c8: 0xa2601864  sb          $zero, 0x1864($s3)
    ctx->pc = 0x23c3c8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x23c3cc: 0xc09d91a  jal         func_276468
    ctx->pc = 0x23C3CCu;
    SET_GPR_U32(ctx, 31, 0x23C3D4u);
    ctx->pc = 0x23C3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C3CCu;
    // 0x23c3d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x23C3CCu, 0x23C3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C3D4u;
label_23c3d4:
    // 0x23c3d4: 0x8e630304  lw          $v1, 0x304($s3)
    ctx->pc = 0x23c3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23c3d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23c3d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c3dc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x23c3dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23c3e0: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x23c3e0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x23c3e4: 0x8c652f24  lw          $a1, 0x2F24($v1)
    ctx->pc = 0x23c3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12068)));
    // 0x23c3e8: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x23c3e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x23c3ec: 0x8c662f28  lw          $a2, 0x2F28($v1)
    ctx->pc = 0x23c3ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12072)));
    // 0x23c3f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x23c3f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c3f4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x23c3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x23c3f8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x23C3F8u;
    SET_GPR_U32(ctx, 31, 0x23C400u);
    ctx->pc = 0x23C3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C3F8u;
    // 0x23c3fc: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x23C3F8u, 0x23C400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C400u;
label_23c400:
    // 0x23c400: 0x8e640708  lw          $a0, 0x708($s3)
    ctx->pc = 0x23c400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1800)));
    // 0x23c404: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x23C404u;
    {
        const bool branch_taken_0x23c404 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c404) {
            ctx->pc = 0x23C408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C404u;
            // 0x23c408: 0x926202f6  lbu         $v0, 0x2F6($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C418u;
            goto label_23c418;
        }
    }
    ctx->pc = 0x23C40Cu;
    // 0x23c40c: 0xc074176  jal         func_1D05D8
    ctx->pc = 0x23C40Cu;
    SET_GPR_U32(ctx, 31, 0x23C414u);
    ctx->pc = 0x1D05D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D05D8u, 0x23C40Cu, 0x23C414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C414u;
label_23c414:
    // 0x23c414: 0x926202f6  lbu         $v0, 0x2F6($s3)
    ctx->pc = 0x23c414u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 758)));
label_23c418:
    // 0x23c418: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23c418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23c41c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x23C41Cu;
    {
        const bool branch_taken_0x23c41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C41Cu;
        // 0x23c420: 0xae6305f4  sw          $v1, 0x5F4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1524), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c41c) {
            ctx->pc = 0x23C474u;
            goto label_23c474;
        }
    }
    ctx->pc = 0x23C424u;
label_23c424:
    // 0x23c424: 0xa2601864  sb          $zero, 0x1864($s3)
    ctx->pc = 0x23c424u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x23c428: 0xc09d91a  jal         func_276468
    ctx->pc = 0x23C428u;
    SET_GPR_U32(ctx, 31, 0x23C430u);
    ctx->pc = 0x23C42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C428u;
    // 0x23c42c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x23C428u, 0x23C430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C430u;
label_23c430:
    // 0x23c430: 0x8e630304  lw          $v1, 0x304($s3)
    ctx->pc = 0x23c430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23c434: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23c434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c438: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x23c438u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23c43c: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x23c43cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x23c440: 0x8c652f9c  lw          $a1, 0x2F9C($v1)
    ctx->pc = 0x23c440u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12188)));
    // 0x23c444: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x23c444u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23c448: 0x8c662fa0  lw          $a2, 0x2FA0($v1)
    ctx->pc = 0x23c448u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12192)));
    // 0x23c44c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x23c44cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c450: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x23c450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x23c454: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x23C454u;
    SET_GPR_U32(ctx, 31, 0x23C45Cu);
    ctx->pc = 0x23C458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C454u;
    // 0x23c458: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x23C454u, 0x23C45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C45Cu;
label_23c45c:
    // 0x23c45c: 0x8e640708  lw          $a0, 0x708($s3)
    ctx->pc = 0x23c45cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1800)));
    // 0x23c460: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x23C460u;
    {
        const bool branch_taken_0x23c460 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c460) {
            ctx->pc = 0x23C464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C460u;
            // 0x23c464: 0x926202f6  lbu         $v0, 0x2F6($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C474u;
            goto label_23c474;
        }
    }
    ctx->pc = 0x23C468u;
    // 0x23c468: 0xc07418e  jal         func_1D0638
    ctx->pc = 0x23C468u;
    SET_GPR_U32(ctx, 31, 0x23C470u);
    ctx->pc = 0x1D0638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0638u, 0x23C468u, 0x23C470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C470u;
label_23c470:
    // 0x23c470: 0x926202f6  lbu         $v0, 0x2F6($s3)
    ctx->pc = 0x23c470u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 758)));
label_23c474:
    // 0x23c474: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23c474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23c478: 0xa26202f6  sb          $v0, 0x2F6($s3)
    ctx->pc = 0x23c478u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 758), (uint8_t)GPR_U32(ctx, 2));
label_23c47c:
    // 0x23c47c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x23C47Cu;
    SET_GPR_U32(ctx, 31, 0x23C484u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x23C47Cu, 0x23C484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C484u;
label_23c484:
    // 0x23c484: 0xc66005a8  lwc1        $f0, 0x5A8($s3)
    ctx->pc = 0x23c484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23c488: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23c488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c48c: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x23c48cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x23c490: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x23c490u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x23c494: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x23c494u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23c498: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x23c498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x23c49c: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x23C49Cu;
    SET_GPR_U32(ctx, 31, 0x23C4A4u);
    ctx->pc = 0x23C4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C49Cu;
    // 0x23c4a0: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x23C49Cu, 0x23C4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C4A4u;
label_23c4a4:
    // 0x23c4a4: 0xc055f06  jal         func_157C18
    ctx->pc = 0x23C4A4u;
    SET_GPR_U32(ctx, 31, 0x23C4ACu);
    ctx->pc = 0x23C4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C4A4u;
    // 0x23c4a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x23C4A4u, 0x23C4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C4ACu;
label_23c4ac:
    // 0x23c4ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23C4ACu;
    {
        const bool branch_taken_0x23c4ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c4ac) {
            ctx->pc = 0x23C4C0u;
            goto label_23c4c0;
        }
    }
    ctx->pc = 0x23C4B4u;
    // 0x23c4b4: 0x926202f6  lbu         $v0, 0x2F6($s3)
    ctx->pc = 0x23c4b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 758)));
    // 0x23c4b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23c4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23c4bc: 0xa26202f6  sb          $v0, 0x2F6($s3)
    ctx->pc = 0x23c4bcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 758), (uint8_t)GPR_U32(ctx, 2));
label_23c4c0:
    // 0x23c4c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23c4c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23c4c4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x23c4c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x23c4c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23c4c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c4cc: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x23C4CCu;
    SET_GPR_U32(ctx, 31, 0x23C4D4u);
    ctx->pc = 0x23C4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C4CCu;
    // 0x23c4d0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x23C4CCu, 0x23C4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C4D4u;
label_23c4d4:
    // 0x23c4d4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x23c4d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x23c4d8: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x23C4D8u;
    SET_GPR_U32(ctx, 31, 0x23C4E0u);
    ctx->pc = 0x23C4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C4D8u;
    // 0x23c4dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x23C4D8u, 0x23C4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C4E0u;
label_23c4e0:
    // 0x23c4e0: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x23C4E0u;
    {
        const bool branch_taken_0x23c4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C4E0u;
        // 0x23c4e4: 0x966203ac  lhu         $v0, 0x3AC($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c4e0) {
            ctx->pc = 0x23C5D8u;
            goto label_23c5d8;
        }
    }
    ctx->pc = 0x23C4E8u;
label_23c4e8:
    // 0x23c4e8: 0xa2601864  sb          $zero, 0x1864($s3)
    ctx->pc = 0x23c4e8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x23c4ec: 0xc09d91a  jal         func_276468
    ctx->pc = 0x23C4ECu;
    SET_GPR_U32(ctx, 31, 0x23C4F4u);
    ctx->pc = 0x23C4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C4ECu;
    // 0x23c4f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x23C4ECu, 0x23C4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C4F4u;
label_23c4f4:
    // 0x23c4f4: 0x8e630304  lw          $v1, 0x304($s3)
    ctx->pc = 0x23c4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23c4f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23c4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c4fc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x23c4fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23c500: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x23c500u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x23c504: 0x8c652f2c  lw          $a1, 0x2F2C($v1)
    ctx->pc = 0x23c504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12076)));
    // 0x23c508: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x23c508u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23c50c: 0x8c662f30  lw          $a2, 0x2F30($v1)
    ctx->pc = 0x23c50cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12080)));
    // 0x23c510: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x23c510u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c514: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x23c514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x23c518: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x23C518u;
    SET_GPR_U32(ctx, 31, 0x23C520u);
    ctx->pc = 0x23C51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C518u;
    // 0x23c51c: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x23C518u, 0x23C520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C520u;
label_23c520:
    // 0x23c520: 0x8e640708  lw          $a0, 0x708($s3)
    ctx->pc = 0x23c520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1800)));
    // 0x23c524: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x23C524u;
    {
        const bool branch_taken_0x23c524 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c524) {
            ctx->pc = 0x23C528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C524u;
            // 0x23c528: 0x926202f6  lbu         $v0, 0x2F6($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C538u;
            goto label_23c538;
        }
    }
    ctx->pc = 0x23C52Cu;
    // 0x23c52c: 0xc07417e  jal         func_1D05F8
    ctx->pc = 0x23C52Cu;
    SET_GPR_U32(ctx, 31, 0x23C534u);
    ctx->pc = 0x1D05F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D05F8u, 0x23C52Cu, 0x23C534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C534u;
label_23c534:
    // 0x23c534: 0x926202f6  lbu         $v0, 0x2F6($s3)
    ctx->pc = 0x23c534u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 758)));
label_23c538:
    // 0x23c538: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23c538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23c53c: 0xa26202f6  sb          $v0, 0x2F6($s3)
    ctx->pc = 0x23c53cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 758), (uint8_t)GPR_U32(ctx, 2));
label_23c540:
    // 0x23c540: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x23C540u;
    SET_GPR_U32(ctx, 31, 0x23C548u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x23C540u, 0x23C548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C548u;
label_23c548:
    // 0x23c548: 0xc66005a8  lwc1        $f0, 0x5A8($s3)
    ctx->pc = 0x23c548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23c54c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23c54cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c550: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x23c550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x23c554: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x23c554u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x23c558: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x23c558u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23c55c: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x23c55cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x23c560: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x23C560u;
    SET_GPR_U32(ctx, 31, 0x23C568u);
    ctx->pc = 0x23C564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C560u;
    // 0x23c564: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x23C560u, 0x23C568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C568u;
label_23c568:
    // 0x23c568: 0xc055f06  jal         func_157C18
    ctx->pc = 0x23C568u;
    SET_GPR_U32(ctx, 31, 0x23C570u);
    ctx->pc = 0x23C56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C568u;
    // 0x23c56c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x23C568u, 0x23C570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C570u;
label_23c570:
    // 0x23c570: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x23C570u;
    {
        const bool branch_taken_0x23c570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C570u;
        // 0x23c574: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c570) {
            ctx->pc = 0x23C5B8u;
            goto label_23c5b8;
        }
    }
    ctx->pc = 0x23C578u;
    // 0x23c578: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23c578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23c57c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x23c57cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x23c580: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x23C580u;
    SET_GPR_U32(ctx, 31, 0x23C588u);
    ctx->pc = 0x23C584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C580u;
    // 0x23c584: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x23C580u, 0x23C588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C588u;
label_23c588:
    // 0x23c588: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x23c588u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x23c58c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x23C58Cu;
    SET_GPR_U32(ctx, 31, 0x23C594u);
    ctx->pc = 0x23C590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C58Cu;
    // 0x23c590: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x23C58Cu, 0x23C594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C594u;
label_23c594:
    // 0x23c594: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x23C594u;
    SET_GPR_U32(ctx, 31, 0x23C59Cu);
    ctx->pc = 0x23C598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C594u;
    // 0x23c598: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x23C594u, 0x23C59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C59Cu;
label_23c59c:
    // 0x23c59c: 0x8e640708  lw          $a0, 0x708($s3)
    ctx->pc = 0x23c59cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1800)));
    // 0x23c5a0: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x23C5A0u;
    {
        const bool branch_taken_0x23c5a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C5A0u;
        // 0x23c5a4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c5a0) {
            ctx->pc = 0x23C600u;
            goto label_23c600;
        }
    }
    ctx->pc = 0x23C5A8u;
    // 0x23c5a8: 0xc074170  jal         func_1D05C0
    ctx->pc = 0x23C5A8u;
    SET_GPR_U32(ctx, 31, 0x23C5B0u);
    ctx->pc = 0x1D05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D05C0u, 0x23C5A8u, 0x23C5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C5B0u;
label_23c5b0:
    // 0x23c5b0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x23C5B0u;
    {
        const bool branch_taken_0x23c5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C5B0u;
        // 0x23c5b4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c5b0) {
            ctx->pc = 0x23C600u;
            goto label_23c600;
        }
    }
    ctx->pc = 0x23C5B8u;
label_23c5b8:
    // 0x23c5b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23c5b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23c5bc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x23c5bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x23c5c0: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x23C5C0u;
    SET_GPR_U32(ctx, 31, 0x23C5C8u);
    ctx->pc = 0x23C5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C5C0u;
    // 0x23c5c4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x23C5C0u, 0x23C5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C5C8u;
label_23c5c8:
    // 0x23c5c8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x23c5c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x23c5cc: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x23C5CCu;
    SET_GPR_U32(ctx, 31, 0x23C5D4u);
    ctx->pc = 0x23C5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C5CCu;
    // 0x23c5d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x23C5CCu, 0x23C5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C5D4u;
label_23c5d4:
    // 0x23c5d4: 0x966203ac  lhu         $v0, 0x3AC($s3)
    ctx->pc = 0x23c5d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 940)));
label_23c5d8:
    // 0x23c5d8: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x23c5d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x23c5dc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23C5DCu;
    {
        const bool branch_taken_0x23c5dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C5DCu;
        // 0x23c5e0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c5dc) {
            ctx->pc = 0x23C600u;
            goto label_23c600;
        }
    }
    ctx->pc = 0x23C5E4u;
    // 0x23c5e4: 0x8e6205f0  lw          $v0, 0x5F0($s3)
    ctx->pc = 0x23c5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1520)));
    // 0x23c5e8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23C5E8u;
    {
        const bool branch_taken_0x23c5e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C5E8u;
        // 0x23c5ec: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c5e8) {
            ctx->pc = 0x23C604u;
            goto label_23c604;
        }
    }
    ctx->pc = 0x23C5F0u;
    // 0x23c5f0: 0xae6005f0  sw          $zero, 0x5F0($s3)
    ctx->pc = 0x23c5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1520), GPR_U32(ctx, 0));
    // 0x23c5f4: 0xc09d138  jal         func_2744E0
    ctx->pc = 0x23C5F4u;
    SET_GPR_U32(ctx, 31, 0x23C5FCu);
    ctx->pc = 0x23C5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C5F4u;
    // 0x23c5f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2744E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2744E0u, 0x23C5F4u, 0x23C5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C5FCu;
label_23c5fc:
    // 0x23c5fc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x23c5fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_23c600:
    // 0x23c600: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x23c600u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_23c604:
    // 0x23c604: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23c604u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23c608: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x23c608u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c60c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23c60cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c610: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x23c610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23c614: 0x3e00008  jr          $ra
    ctx->pc = 0x23C614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C614u;
        // 0x23c618: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C61Cu;
    // 0x23c61c: 0x0  nop
    ctx->pc = 0x23c61cu;
    // NOP
    ctx->pc = 0x23c620u;
}
