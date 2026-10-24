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

// Function: func_0022BD10
// Address: 0x22bd10 - 0x22c1a8
void func_0022BD10_0x22bd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0022BD10_0x22bd10");
#endif

    switch (ctx->pc) {
        case 0x22bd88u: goto label_22bd88;
        case 0x22bd90u: goto label_22bd90;
        case 0x22bdbcu: goto label_22bdbc;
        case 0x22bdf4u: goto label_22bdf4;
        case 0x22be18u: goto label_22be18;
        case 0x22be48u: goto label_22be48;
        case 0x22be68u: goto label_22be68;
        case 0x22be88u: goto label_22be88;
        case 0x22bedcu: goto label_22bedc;
        case 0x22befcu: goto label_22befc;
        case 0x22bf04u: goto label_22bf04;
        case 0x22bf20u: goto label_22bf20;
        case 0x22bf28u: goto label_22bf28;
        case 0x22bf50u: goto label_22bf50;
        case 0x22bf88u: goto label_22bf88;
        case 0x22bfbcu: goto label_22bfbc;
        case 0x22bfdcu: goto label_22bfdc;
        case 0x22bfecu: goto label_22bfec;
        case 0x22c000u: goto label_22c000;
        case 0x22c020u: goto label_22c020;
        case 0x22c028u: goto label_22c028;
        case 0x22c058u: goto label_22c058;
        case 0x22c064u: goto label_22c064;
        case 0x22c078u: goto label_22c078;
        case 0x22c080u: goto label_22c080;
        case 0x22c0a8u: goto label_22c0a8;
        case 0x22c0e0u: goto label_22c0e0;
        case 0x22c0f4u: goto label_22c0f4;
        case 0x22c114u: goto label_22c114;
        case 0x22c11cu: goto label_22c11c;
        case 0x22c12cu: goto label_22c12c;
        case 0x22c140u: goto label_22c140;
        case 0x22c14cu: goto label_22c14c;
        default: break;
    }

    ctx->pc = 0x22bd10u;

    // 0x22bd10: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x22bd10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x22bd14: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x22bd14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x22bd18: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x22bd18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x22bd1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22bd1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bd20: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x22bd20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x22bd24: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x22bd24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22bd28: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x22bd28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x22bd2c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x22bd2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x22bd30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22bd30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22bd34: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x22bd34u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x22bd38: 0xa204186a  sb          $a0, 0x186A($s0)
    ctx->pc = 0x22bd38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6250), (uint8_t)GPR_U32(ctx, 4));
    // 0x22bd3c: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x22bd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x22bd40: 0x8e0316d4  lw          $v1, 0x16D4($s0)
    ctx->pc = 0x22bd40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x22bd44: 0x920602f6  lbu         $a2, 0x2F6($s0)
    ctx->pc = 0x22bd44u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x22bd48: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x22bd48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x22bd4c: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x22bd4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x22bd50: 0xae0216d0  sw          $v0, 0x16D0($s0)
    ctx->pc = 0x22bd50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
    // 0x22bd54: 0x2cc50006  sltiu       $a1, $a2, 0x6
    ctx->pc = 0x22bd54u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x22bd58: 0x10a000fc  beqz        $a1, . + 4 + (0xFC << 2)
    ctx->pc = 0x22BD58u;
    {
        const bool branch_taken_0x22bd58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BD58u;
        // 0x22bd5c: 0xae0316d4  sw          $v1, 0x16D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bd58) {
            ctx->pc = 0x22C14Cu;
            goto label_22c14c;
        }
    }
    ctx->pc = 0x22BD60u;
    // 0x22bd60: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x22bd60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x22bd64: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x22bd64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x22bd68: 0x24428c70  addiu       $v0, $v0, -0x7390
    ctx->pc = 0x22bd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937712));
    // 0x22bd6c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22bd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22bd70: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22bd70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22bd74: 0x800008  jr          $a0
    ctx->pc = 0x22BD74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22BD7Cu: goto label_22bd7c;
            case 0x22BEC8u: goto label_22bec8;
            case 0x22BF14u: goto label_22bf14;
            case 0x22BFF8u: goto label_22bff8;
            case 0x22C06Cu: goto label_22c06c;
            case 0x22C0ECu: goto label_22c0ec;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BD74u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x22BD7Cu;
label_22bd7c:
    // 0x22bd7c: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x22bd7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x22bd80: 0xc09d91a  jal         func_276468
    ctx->pc = 0x22BD80u;
    SET_GPR_U32(ctx, 31, 0x22BD88u);
    ctx->pc = 0x22BD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BD80u;
    // 0x22bd84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x22BD80u, 0x22BD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BD88u;
label_22bd88:
    // 0x22bd88: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x22BD88u;
    SET_GPR_U32(ctx, 31, 0x22BD90u);
    ctx->pc = 0x22BD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BD88u;
    // 0x22bd8c: 0x3053ffff  andi        $s3, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x22BD88u, 0x22BD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BD90u;
label_22bd90:
    // 0x22bd90: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22bd90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22bd94: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x22bd94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x22bd98: 0xa20202f7  sb          $v0, 0x2F7($s0)
    ctx->pc = 0x22bd98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x22bd9c: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x22bd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x22bda0: 0x24549b70  addiu       $s4, $v0, -0x6490
    ctx->pc = 0x22bda0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x22bda4: 0x8c652330  lw          $a1, 0x2330($v1)
    ctx->pc = 0x22bda4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9008)));
    // 0x22bda8: 0x8c622334  lw          $v0, 0x2334($v1)
    ctx->pc = 0x22bda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9012)));
    // 0x22bdac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x22bdacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bdb0: 0xa39021  addu        $s2, $a1, $v1
    ctx->pc = 0x22bdb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x22bdb4: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x22BDB4u;
    SET_GPR_U32(ctx, 31, 0x22BDBCu);
    ctx->pc = 0x22BDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BDB4u;
    // 0x22bdb8: 0x438821  addu        $s1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x22BDB4u, 0x22BDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BDBCu;
label_22bdbc:
    // 0x22bdbc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x22bdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x22bdc0: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x22BDC0u;
    {
        const bool branch_taken_0x22bdc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x22bdc0) {
            ctx->pc = 0x22BDD4u;
            goto label_22bdd4;
        }
    }
    ctx->pc = 0x22BDC8u;
    // 0x22bdc8: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x22bdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x22bdcc: 0x8c622338  lw          $v0, 0x2338($v1)
    ctx->pc = 0x22bdccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9016)));
    // 0x22bdd0: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x22bdd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22bdd4:
    // 0x22bdd4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22bdd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22bdd8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22bdd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bddc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x22bddcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bde0: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x22bde0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bde4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22bde4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bde8: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x22bde8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22bdec: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x22BDECu;
    SET_GPR_U32(ctx, 31, 0x22BDF4u);
    ctx->pc = 0x22BDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BDECu;
    // 0x22bdf0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x22BDECu, 0x22BDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BDF4u;
label_22bdf4:
    // 0x22bdf4: 0x3c01420c  lui         $at, 0x420C
    ctx->pc = 0x22bdf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16908 << 16));
    // 0x22bdf8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22bdf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22bdfc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22bdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22be00: 0xae0005fc  sw          $zero, 0x5FC($s0)
    ctx->pc = 0x22be00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1532), GPR_U32(ctx, 0));
    // 0x22be04: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x22be04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22be08: 0xe6000604  swc1        $f0, 0x604($s0)
    ctx->pc = 0x22be08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1540), bits); }
    // 0x22be0c: 0xa6020568  sh          $v0, 0x568($s0)
    ctx->pc = 0x22be0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 2));
    // 0x22be10: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x22BE10u;
    SET_GPR_U32(ctx, 31, 0x22BE18u);
    ctx->pc = 0x22BE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BE10u;
    // 0x22be14: 0xae0205f0  sw          $v0, 0x5F0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x22BE10u, 0x22BE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BE18u;
label_22be18:
    // 0x22be18: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x22be18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x22be1c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x22be1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x22be20: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22BE20u;
    {
        const bool branch_taken_0x22be20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BE20u;
        // 0x22be24: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22be20) {
            ctx->pc = 0x22BE40u;
            goto label_22be40;
        }
    }
    ctx->pc = 0x22BE28u;
    // 0x22be28: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22be28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22be2c: 0x24428c90  addiu       $v0, $v0, -0x7370
    ctx->pc = 0x22be2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937744));
    // 0x22be30: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22be30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22be34: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22be34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22be38: 0x800008  jr          $a0
    ctx->pc = 0x22BE38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22BE40u: goto label_22be40;
            case 0x22BE5Cu: goto label_22be5c;
            case 0x22BE7Cu: goto label_22be7c;
            case 0x22BE94u: goto label_22be94;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BE38u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x22BE40u;
label_22be40:
    // 0x22be40: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x22BE40u;
    SET_GPR_U32(ctx, 31, 0x22BE48u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x22BE40u, 0x22BE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BE48u;
label_22be48:
    // 0x22be48: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22be48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22be4c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x22BE4Cu;
    {
        const bool branch_taken_0x22be4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BE4Cu;
        // 0x22be50: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22be4c) {
            ctx->pc = 0x22BE9Cu;
            goto label_22be9c;
        }
    }
    ctx->pc = 0x22BE54u;
    // 0x22be54: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x22BE54u;
    {
        const bool branch_taken_0x22be54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BE54u;
        // 0x22be58: 0xa6020568  sh          $v0, 0x568($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22be54) {
            ctx->pc = 0x22BE9Cu;
            goto label_22be9c;
        }
    }
    ctx->pc = 0x22BE5Cu;
label_22be5c:
    // 0x22be5c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22be5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22be60: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x22BE60u;
    SET_GPR_U32(ctx, 31, 0x22BE68u);
    ctx->pc = 0x22BE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BE60u;
    // 0x22be64: 0xa6020568  sh          $v0, 0x568($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x22BE60u, 0x22BE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BE68u;
label_22be68:
    // 0x22be68: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22be68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22be6c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x22BE6Cu;
    {
        const bool branch_taken_0x22be6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BE6Cu;
        // 0x22be70: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22be6c) {
            ctx->pc = 0x22BE9Cu;
            goto label_22be9c;
        }
    }
    ctx->pc = 0x22BE74u;
    // 0x22be74: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x22BE74u;
    {
        const bool branch_taken_0x22be74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BE74u;
        // 0x22be78: 0xa6020568  sh          $v0, 0x568($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22be74) {
            ctx->pc = 0x22BE9Cu;
            goto label_22be9c;
        }
    }
    ctx->pc = 0x22BE7Cu;
label_22be7c:
    // 0x22be7c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22be7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22be80: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x22BE80u;
    SET_GPR_U32(ctx, 31, 0x22BE88u);
    ctx->pc = 0x22BE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BE80u;
    // 0x22be84: 0xa6020568  sh          $v0, 0x568($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x22BE80u, 0x22BE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BE88u;
label_22be88:
    // 0x22be88: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22be88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22be8c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x22BE8Cu;
    {
        const bool branch_taken_0x22be8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22be8c) {
            ctx->pc = 0x22BE90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22BE8Cu;
            // 0x22be90: 0x92021869  lbu         $v0, 0x1869($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6249)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22BEA0u;
            goto label_22bea0;
        }
    }
    ctx->pc = 0x22BE94u;
label_22be94:
    // 0x22be94: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x22be94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22be98: 0xa6020568  sh          $v0, 0x568($s0)
    ctx->pc = 0x22be98u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 2));
label_22be9c:
    // 0x22be9c: 0x92021869  lbu         $v0, 0x1869($s0)
    ctx->pc = 0x22be9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6249)));
label_22bea0:
    // 0x22bea0: 0x86040568  lh          $a0, 0x568($s0)
    ctx->pc = 0x22bea0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
    // 0x22bea4: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x22bea4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x22bea8: 0x21e03  sra         $v1, $v0, 24
    ctx->pc = 0x22bea8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 24));
    // 0x22beac: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x22beacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22beb0: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x22beb0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x22beb4: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x22BEB4u;
    {
        const bool branch_taken_0x22beb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22beb4) {
            ctx->pc = 0x22BEB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22BEB4u;
            // 0x22beb8: 0xa6020568  sh          $v0, 0x568($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22BEBCu;
            goto label_22bebc;
        }
    }
    ctx->pc = 0x22BEBCu;
label_22bebc:
    // 0x22bebc: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x22bebcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x22bec0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22bec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22bec4: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x22bec4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_22bec8:
    // 0x22bec8: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x22bec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x22becc: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x22beccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x22bed0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22bed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22bed4: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x22BED4u;
    SET_GPR_U32(ctx, 31, 0x22BEDCu);
    ctx->pc = 0x22BED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BED4u;
    // 0x22bed8: 0xae0216d0  sw          $v0, 0x16D0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x22BED4u, 0x22BEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BEDCu;
label_22bedc:
    // 0x22bedc: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x22bedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22bee0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22bee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bee4: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x22bee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x22bee8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x22bee8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x22beec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22beecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22bef0: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x22bef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x22bef4: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x22BEF4u;
    SET_GPR_U32(ctx, 31, 0x22BEFCu);
    ctx->pc = 0x22BEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BEF4u;
    // 0x22bef8: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x22BEF4u, 0x22BEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BEFCu;
label_22befc:
    // 0x22befc: 0xc055f06  jal         func_157C18
    ctx->pc = 0x22BEFCu;
    SET_GPR_U32(ctx, 31, 0x22BF04u);
    ctx->pc = 0x22BF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BEFCu;
    // 0x22bf00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x22BEFCu, 0x22BF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BF04u;
label_22bf04:
    // 0x22bf04: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x22BF04u;
    {
        const bool branch_taken_0x22bf04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BF04u;
        // 0x22bf08: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bf04) {
            ctx->pc = 0x22C044u;
            goto label_22c044;
        }
    }
    ctx->pc = 0x22BF0Cu;
    // 0x22bf0c: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x22BF0Cu;
    {
        const bool branch_taken_0x22bf0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BF0Cu;
        // 0x22bf10: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bf0c) {
            ctx->pc = 0x22C044u;
            goto label_22c044;
        }
    }
    ctx->pc = 0x22BF14u;
label_22bf14:
    // 0x22bf14: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x22bf14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x22bf18: 0xc09d91a  jal         func_276468
    ctx->pc = 0x22BF18u;
    SET_GPR_U32(ctx, 31, 0x22BF20u);
    ctx->pc = 0x22BF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BF18u;
    // 0x22bf1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x22BF18u, 0x22BF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BF20u;
label_22bf20:
    // 0x22bf20: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x22BF20u;
    SET_GPR_U32(ctx, 31, 0x22BF28u);
    ctx->pc = 0x22BF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BF20u;
    // 0x22bf24: 0x3053ffff  andi        $s3, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x22BF20u, 0x22BF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BF28u;
label_22bf28:
    // 0x22bf28: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22bf28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22bf2c: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x22bf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x22bf30: 0xa20202f7  sb          $v0, 0x2F7($s0)
    ctx->pc = 0x22bf30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x22bf34: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x22bf34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x22bf38: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x22bf38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x22bf3c: 0x8c62233c  lw          $v0, 0x233C($v1)
    ctx->pc = 0x22bf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9020)));
    // 0x22bf40: 0x8c652340  lw          $a1, 0x2340($v1)
    ctx->pc = 0x22bf40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9024)));
    // 0x22bf44: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x22bf44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22bf48: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x22BF48u;
    SET_GPR_U32(ctx, 31, 0x22BF50u);
    ctx->pc = 0x22BF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BF48u;
    // 0x22bf4c: 0xa38821  addu        $s1, $a1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x22BF48u, 0x22BF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BF50u;
label_22bf50:
    // 0x22bf50: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x22bf50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x22bf54: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x22BF54u;
    {
        const bool branch_taken_0x22bf54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x22bf54) {
            ctx->pc = 0x22BF68u;
            goto label_22bf68;
        }
    }
    ctx->pc = 0x22BF5Cu;
    // 0x22bf5c: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x22bf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x22bf60: 0x8c622344  lw          $v0, 0x2344($v1)
    ctx->pc = 0x22bf60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9028)));
    // 0x22bf64: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x22bf64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22bf68:
    // 0x22bf68: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22bf68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22bf6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22bf6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bf70: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22bf70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bf74: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x22bf74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bf78: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x22bf78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bf7c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x22bf7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22bf80: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x22BF80u;
    SET_GPR_U32(ctx, 31, 0x22BF88u);
    ctx->pc = 0x22BF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BF80u;
    // 0x22bf84: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x22BF80u, 0x22BF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BF88u;
label_22bf88:
    // 0x22bf88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22bf88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22bf8c: 0xae0005fc  sw          $zero, 0x5FC($s0)
    ctx->pc = 0x22bf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1532), GPR_U32(ctx, 0));
    // 0x22bf90: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x22bf90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x22bf94: 0xae0205f0  sw          $v0, 0x5F0($s0)
    ctx->pc = 0x22bf94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 2));
    // 0x22bf98: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x22bf98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x22bf9c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22bf9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22bfa0: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x22bfa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x22bfa4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x22bfa4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bfa8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22bfa8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bfac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22bfacu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bfb0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x22bfb0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bfb4: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x22BFB4u;
    SET_GPR_U32(ctx, 31, 0x22BFBCu);
    ctx->pc = 0x22BFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BFB4u;
    // 0x22bfb8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x22BFB4u, 0x22BFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BFBCu;
label_22bfbc:
    // 0x22bfbc: 0x96030568  lhu         $v1, 0x568($s0)
    ctx->pc = 0x22bfbcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
    // 0x22bfc0: 0x82021869  lb          $v0, 0x1869($s0)
    ctx->pc = 0x22bfc0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 6249)));
    // 0x22bfc4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x22bfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x22bfc8: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22BFC8u;
    {
        const bool branch_taken_0x22bfc8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x22BFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BFC8u;
        // 0x22bfcc: 0xa6030568  sh          $v1, 0x568($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bfc8) {
            ctx->pc = 0x22BFECu;
            goto label_22bfec;
        }
    }
    ctx->pc = 0x22BFD0u;
    // 0x22bfd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22bfd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bfd4: 0xc09aa8c  jal         func_26AA30
    ctx->pc = 0x22BFD4u;
    SET_GPR_U32(ctx, 31, 0x22BFDCu);
    ctx->pc = 0x22BFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BFD4u;
    // 0x22bfd8: 0x2405036a  addiu       $a1, $zero, 0x36A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 874));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26AA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26AA30u, 0x22BFD4u, 0x22BFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BFDCu;
label_22bfdc:
    // 0x22bfdc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22BFDCu;
    {
        const bool branch_taken_0x22bfdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BFDCu;
        // 0x22bfe0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bfdc) {
            ctx->pc = 0x22BFECu;
            goto label_22bfec;
        }
    }
    ctx->pc = 0x22BFE4u;
    // 0x22bfe4: 0xc09aef4  jal         func_26BBD0
    ctx->pc = 0x22BFE4u;
    SET_GPR_U32(ctx, 31, 0x22BFECu);
    ctx->pc = 0x22BFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BFE4u;
    // 0x22bfe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BBD0u, 0x22BFE4u, 0x22BFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BFECu;
label_22bfec:
    // 0x22bfec: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x22bfecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x22bff0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22bff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22bff4: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x22bff4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_22bff8:
    // 0x22bff8: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x22BFF8u;
    SET_GPR_U32(ctx, 31, 0x22C000u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x22BFF8u, 0x22C000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C000u;
label_22c000:
    // 0x22c000: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x22c000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22c004: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22c004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c008: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x22c008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x22c00c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x22c00cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x22c010: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22c010u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22c014: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x22c014u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x22c018: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x22C018u;
    SET_GPR_U32(ctx, 31, 0x22C020u);
    ctx->pc = 0x22C01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C018u;
    // 0x22c01c: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x22C018u, 0x22C020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C020u;
label_22c020:
    // 0x22c020: 0xc055f06  jal         func_157C18
    ctx->pc = 0x22C020u;
    SET_GPR_U32(ctx, 31, 0x22C028u);
    ctx->pc = 0x22C024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C020u;
    // 0x22c024: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x22C020u, 0x22C028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C028u;
label_22c028:
    // 0x22c028: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22C028u;
    {
        const bool branch_taken_0x22c028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c028) {
            ctx->pc = 0x22C044u;
            goto label_22c044;
        }
    }
    ctx->pc = 0x22C030u;
    // 0x22c030: 0x86020568  lh          $v0, 0x568($s0)
    ctx->pc = 0x22c030u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
    // 0x22c034: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22C034u;
    {
        const bool branch_taken_0x22c034 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x22C038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C034u;
        // 0x22c038: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c034) {
            ctx->pc = 0x22C040u;
            goto label_22c040;
        }
    }
    ctx->pc = 0x22C03Cu;
    // 0x22c03c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x22c03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_22c040:
    // 0x22c040: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x22c040u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_22c044:
    // 0x22c044: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22c044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22c048: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x22c048u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22c04c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22c04cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c050: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x22C050u;
    SET_GPR_U32(ctx, 31, 0x22C058u);
    ctx->pc = 0x22C054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C050u;
    // 0x22c054: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x22C050u, 0x22C058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C058u;
label_22c058:
    // 0x22c058: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22c058u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22c05c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x22C05Cu;
    SET_GPR_U32(ctx, 31, 0x22C064u);
    ctx->pc = 0x22C060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C05Cu;
    // 0x22c060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x22C05Cu, 0x22C064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C064u;
label_22c064:
    // 0x22c064: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x22C064u;
    {
        const bool branch_taken_0x22c064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C064u;
        // 0x22c068: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c064) {
            ctx->pc = 0x22C150u;
            goto label_22c150;
        }
    }
    ctx->pc = 0x22C06Cu;
label_22c06c:
    // 0x22c06c: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x22c06cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x22c070: 0xc09d91a  jal         func_276468
    ctx->pc = 0x22C070u;
    SET_GPR_U32(ctx, 31, 0x22C078u);
    ctx->pc = 0x22C074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C070u;
    // 0x22c074: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x22C070u, 0x22C078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C078u;
label_22c078:
    // 0x22c078: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x22C078u;
    SET_GPR_U32(ctx, 31, 0x22C080u);
    ctx->pc = 0x22C07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C078u;
    // 0x22c07c: 0x3053ffff  andi        $s3, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x22C078u, 0x22C080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C080u;
label_22c080:
    // 0x22c080: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22c080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22c084: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x22c084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x22c088: 0xa20202f7  sb          $v0, 0x2F7($s0)
    ctx->pc = 0x22c088u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x22c08c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x22c08cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x22c090: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x22c090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x22c094: 0x8c622348  lw          $v0, 0x2348($v1)
    ctx->pc = 0x22c094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9032)));
    // 0x22c098: 0x8c65234c  lw          $a1, 0x234C($v1)
    ctx->pc = 0x22c098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9036)));
    // 0x22c09c: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x22c09cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22c0a0: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x22C0A0u;
    SET_GPR_U32(ctx, 31, 0x22C0A8u);
    ctx->pc = 0x22C0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C0A0u;
    // 0x22c0a4: 0xa38821  addu        $s1, $a1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x22C0A0u, 0x22C0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C0A8u;
label_22c0a8:
    // 0x22c0a8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x22c0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x22c0ac: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x22C0ACu;
    {
        const bool branch_taken_0x22c0ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x22c0ac) {
            ctx->pc = 0x22C0C0u;
            goto label_22c0c0;
        }
    }
    ctx->pc = 0x22C0B4u;
    // 0x22c0b4: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x22c0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x22c0b8: 0x8c622350  lw          $v0, 0x2350($v1)
    ctx->pc = 0x22c0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9040)));
    // 0x22c0bc: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x22c0bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22c0c0:
    // 0x22c0c0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22c0c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22c0c4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22c0c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c0c8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x22c0c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c0cc: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x22c0ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c0d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22c0d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c0d4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x22c0d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22c0d8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x22C0D8u;
    SET_GPR_U32(ctx, 31, 0x22C0E0u);
    ctx->pc = 0x22C0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C0D8u;
    // 0x22c0dc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x22C0D8u, 0x22C0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C0E0u;
label_22c0e0:
    // 0x22c0e0: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x22c0e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x22c0e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22c0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22c0e8: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x22c0e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_22c0ec:
    // 0x22c0ec: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x22C0ECu;
    SET_GPR_U32(ctx, 31, 0x22C0F4u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x22C0ECu, 0x22C0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C0F4u;
label_22c0f4:
    // 0x22c0f4: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x22c0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22c0f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22c0f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c0fc: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x22c0fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x22c100: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x22c100u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x22c104: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22c104u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22c108: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x22c108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x22c10c: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x22C10Cu;
    SET_GPR_U32(ctx, 31, 0x22C114u);
    ctx->pc = 0x22C110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C10Cu;
    // 0x22c110: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x22C10Cu, 0x22C114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C114u;
label_22c114:
    // 0x22c114: 0xc055f06  jal         func_157C18
    ctx->pc = 0x22C114u;
    SET_GPR_U32(ctx, 31, 0x22C11Cu);
    ctx->pc = 0x22C118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C114u;
    // 0x22c118: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x22C114u, 0x22C11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C11Cu;
label_22c11c:
    // 0x22c11c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22C11Cu;
    {
        const bool branch_taken_0x22c11c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c11c) {
            ctx->pc = 0x22C12Cu;
            goto label_22c12c;
        }
    }
    ctx->pc = 0x22C124u;
    // 0x22c124: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x22C124u;
    SET_GPR_U32(ctx, 31, 0x22C12Cu);
    ctx->pc = 0x22C128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C124u;
    // 0x22c128: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x22C124u, 0x22C12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C12Cu;
label_22c12c:
    // 0x22c12c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22c12cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22c130: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x22c130u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22c134: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22c134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c138: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x22C138u;
    SET_GPR_U32(ctx, 31, 0x22C140u);
    ctx->pc = 0x22C13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C138u;
    // 0x22c13c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x22C138u, 0x22C140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C140u;
label_22c140:
    // 0x22c140: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22c140u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22c144: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x22C144u;
    SET_GPR_U32(ctx, 31, 0x22C14Cu);
    ctx->pc = 0x22C148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C144u;
    // 0x22c148: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x22C144u, 0x22C14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C14Cu;
label_22c14c:
    // 0x22c14c: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x22c14cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_22c150:
    // 0x22c150: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x22c150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x22c154: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22C154u;
    {
        const bool branch_taken_0x22c154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C154u;
        // 0x22c158: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c154) {
            ctx->pc = 0x22C160u;
            goto label_22c160;
        }
    }
    ctx->pc = 0x22C15Cu;
    // 0x22c15c: 0xae0205fc  sw          $v0, 0x5FC($s0)
    ctx->pc = 0x22c15cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1532), GPR_U32(ctx, 2));
label_22c160:
    // 0x22c160: 0x8e0205fc  lw          $v0, 0x5FC($s0)
    ctx->pc = 0x22c160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1532)));
    // 0x22c164: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x22C164u;
    {
        const bool branch_taken_0x22c164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c164) {
            ctx->pc = 0x22C168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C164u;
            // 0x22c168: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C184u;
            goto label_22c184;
        }
    }
    ctx->pc = 0x22C16Cu;
    // 0x22c16c: 0x8e0316d4  lw          $v1, 0x16D4($s0)
    ctx->pc = 0x22c16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x22c170: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x22c170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x22c174: 0x3442fbff  ori         $v0, $v0, 0xFBFF
    ctx->pc = 0x22c174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64511);
    // 0x22c178: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x22c178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22c17c: 0xae0316d4  sw          $v1, 0x16D4($s0)
    ctx->pc = 0x22c17cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 3));
    // 0x22c180: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x22c180u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_22c184:
    // 0x22c184: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x22c184u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22c188: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x22c188u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22c18c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x22c18cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22c190: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x22c190u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c194: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22c194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c198: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x22c198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22c19c: 0x3e00008  jr          $ra
    ctx->pc = 0x22C19Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C19Cu;
        // 0x22c1a0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C19Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C1A4u;
    // 0x22c1a4: 0x0  nop
    ctx->pc = 0x22c1a4u;
    // NOP
    ctx->pc = 0x22c1a8u;
}
