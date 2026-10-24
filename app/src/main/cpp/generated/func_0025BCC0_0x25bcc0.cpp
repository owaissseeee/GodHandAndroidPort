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

// Function: func_0025BCC0
// Address: 0x25bcc0 - 0x25c010
void func_0025BCC0_0x25bcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0025BCC0_0x25bcc0");
#endif

    switch (ctx->pc) {
        case 0x25bcc0u: goto label_25bcc0;
        case 0x25bcc4u: goto label_25bcc4;
        case 0x25bcc8u: goto label_25bcc8;
        case 0x25bcccu: goto label_25bccc;
        case 0x25bcd0u: goto label_25bcd0;
        case 0x25bcd4u: goto label_25bcd4;
        case 0x25bcd8u: goto label_25bcd8;
        case 0x25bcdcu: goto label_25bcdc;
        case 0x25bce0u: goto label_25bce0;
        case 0x25bce4u: goto label_25bce4;
        case 0x25bce8u: goto label_25bce8;
        case 0x25bcecu: goto label_25bcec;
        case 0x25bcf0u: goto label_25bcf0;
        case 0x25bcf4u: goto label_25bcf4;
        case 0x25bcf8u: goto label_25bcf8;
        case 0x25bcfcu: goto label_25bcfc;
        case 0x25bd00u: goto label_25bd00;
        case 0x25bd04u: goto label_25bd04;
        case 0x25bd08u: goto label_25bd08;
        case 0x25bd0cu: goto label_25bd0c;
        case 0x25bd10u: goto label_25bd10;
        case 0x25bd14u: goto label_25bd14;
        case 0x25bd18u: goto label_25bd18;
        case 0x25bd1cu: goto label_25bd1c;
        case 0x25bd20u: goto label_25bd20;
        case 0x25bd24u: goto label_25bd24;
        case 0x25bd28u: goto label_25bd28;
        case 0x25bd2cu: goto label_25bd2c;
        case 0x25bd30u: goto label_25bd30;
        case 0x25bd34u: goto label_25bd34;
        case 0x25bd38u: goto label_25bd38;
        case 0x25bd3cu: goto label_25bd3c;
        case 0x25bd40u: goto label_25bd40;
        case 0x25bd44u: goto label_25bd44;
        case 0x25bd48u: goto label_25bd48;
        case 0x25bd4cu: goto label_25bd4c;
        case 0x25bd50u: goto label_25bd50;
        case 0x25bd54u: goto label_25bd54;
        case 0x25bd58u: goto label_25bd58;
        case 0x25bd5cu: goto label_25bd5c;
        case 0x25bd60u: goto label_25bd60;
        case 0x25bd64u: goto label_25bd64;
        case 0x25bd68u: goto label_25bd68;
        case 0x25bd6cu: goto label_25bd6c;
        case 0x25bd70u: goto label_25bd70;
        case 0x25bd74u: goto label_25bd74;
        case 0x25bd78u: goto label_25bd78;
        case 0x25bd7cu: goto label_25bd7c;
        case 0x25bd80u: goto label_25bd80;
        case 0x25bd84u: goto label_25bd84;
        case 0x25bd88u: goto label_25bd88;
        case 0x25bd8cu: goto label_25bd8c;
        case 0x25bd90u: goto label_25bd90;
        case 0x25bd94u: goto label_25bd94;
        case 0x25bd98u: goto label_25bd98;
        case 0x25bd9cu: goto label_25bd9c;
        case 0x25bda0u: goto label_25bda0;
        case 0x25bda4u: goto label_25bda4;
        case 0x25bda8u: goto label_25bda8;
        case 0x25bdacu: goto label_25bdac;
        case 0x25bdb0u: goto label_25bdb0;
        case 0x25bdb4u: goto label_25bdb4;
        case 0x25bdb8u: goto label_25bdb8;
        case 0x25bdbcu: goto label_25bdbc;
        case 0x25bdc0u: goto label_25bdc0;
        case 0x25bdc4u: goto label_25bdc4;
        case 0x25bdc8u: goto label_25bdc8;
        case 0x25bdccu: goto label_25bdcc;
        case 0x25bdd0u: goto label_25bdd0;
        case 0x25bdd4u: goto label_25bdd4;
        case 0x25bdd8u: goto label_25bdd8;
        case 0x25bddcu: goto label_25bddc;
        case 0x25bde0u: goto label_25bde0;
        case 0x25bde4u: goto label_25bde4;
        case 0x25bde8u: goto label_25bde8;
        case 0x25bdecu: goto label_25bdec;
        case 0x25bdf0u: goto label_25bdf0;
        case 0x25bdf4u: goto label_25bdf4;
        case 0x25bdf8u: goto label_25bdf8;
        case 0x25bdfcu: goto label_25bdfc;
        case 0x25be00u: goto label_25be00;
        case 0x25be04u: goto label_25be04;
        case 0x25be08u: goto label_25be08;
        case 0x25be0cu: goto label_25be0c;
        case 0x25be10u: goto label_25be10;
        case 0x25be14u: goto label_25be14;
        case 0x25be18u: goto label_25be18;
        case 0x25be1cu: goto label_25be1c;
        case 0x25be20u: goto label_25be20;
        case 0x25be24u: goto label_25be24;
        case 0x25be28u: goto label_25be28;
        case 0x25be2cu: goto label_25be2c;
        case 0x25be30u: goto label_25be30;
        case 0x25be34u: goto label_25be34;
        case 0x25be38u: goto label_25be38;
        case 0x25be3cu: goto label_25be3c;
        case 0x25be40u: goto label_25be40;
        case 0x25be44u: goto label_25be44;
        case 0x25be48u: goto label_25be48;
        case 0x25be4cu: goto label_25be4c;
        case 0x25be50u: goto label_25be50;
        case 0x25be54u: goto label_25be54;
        case 0x25be58u: goto label_25be58;
        case 0x25be5cu: goto label_25be5c;
        case 0x25be60u: goto label_25be60;
        case 0x25be64u: goto label_25be64;
        case 0x25be68u: goto label_25be68;
        case 0x25be6cu: goto label_25be6c;
        case 0x25be70u: goto label_25be70;
        case 0x25be74u: goto label_25be74;
        case 0x25be78u: goto label_25be78;
        case 0x25be7cu: goto label_25be7c;
        case 0x25be80u: goto label_25be80;
        case 0x25be84u: goto label_25be84;
        case 0x25be88u: goto label_25be88;
        case 0x25be8cu: goto label_25be8c;
        case 0x25be90u: goto label_25be90;
        case 0x25be94u: goto label_25be94;
        case 0x25be98u: goto label_25be98;
        case 0x25be9cu: goto label_25be9c;
        case 0x25bea0u: goto label_25bea0;
        case 0x25bea4u: goto label_25bea4;
        case 0x25bea8u: goto label_25bea8;
        case 0x25beacu: goto label_25beac;
        case 0x25beb0u: goto label_25beb0;
        case 0x25beb4u: goto label_25beb4;
        case 0x25beb8u: goto label_25beb8;
        case 0x25bebcu: goto label_25bebc;
        case 0x25bec0u: goto label_25bec0;
        case 0x25bec4u: goto label_25bec4;
        case 0x25bec8u: goto label_25bec8;
        case 0x25beccu: goto label_25becc;
        case 0x25bed0u: goto label_25bed0;
        case 0x25bed4u: goto label_25bed4;
        case 0x25bed8u: goto label_25bed8;
        case 0x25bedcu: goto label_25bedc;
        case 0x25bee0u: goto label_25bee0;
        case 0x25bee4u: goto label_25bee4;
        case 0x25bee8u: goto label_25bee8;
        case 0x25beecu: goto label_25beec;
        case 0x25bef0u: goto label_25bef0;
        case 0x25bef4u: goto label_25bef4;
        case 0x25bef8u: goto label_25bef8;
        case 0x25befcu: goto label_25befc;
        case 0x25bf00u: goto label_25bf00;
        case 0x25bf04u: goto label_25bf04;
        case 0x25bf08u: goto label_25bf08;
        case 0x25bf0cu: goto label_25bf0c;
        case 0x25bf10u: goto label_25bf10;
        case 0x25bf14u: goto label_25bf14;
        case 0x25bf18u: goto label_25bf18;
        case 0x25bf1cu: goto label_25bf1c;
        case 0x25bf20u: goto label_25bf20;
        case 0x25bf24u: goto label_25bf24;
        case 0x25bf28u: goto label_25bf28;
        case 0x25bf2cu: goto label_25bf2c;
        case 0x25bf30u: goto label_25bf30;
        case 0x25bf34u: goto label_25bf34;
        case 0x25bf38u: goto label_25bf38;
        case 0x25bf3cu: goto label_25bf3c;
        case 0x25bf40u: goto label_25bf40;
        case 0x25bf44u: goto label_25bf44;
        case 0x25bf48u: goto label_25bf48;
        case 0x25bf4cu: goto label_25bf4c;
        case 0x25bf50u: goto label_25bf50;
        case 0x25bf54u: goto label_25bf54;
        case 0x25bf58u: goto label_25bf58;
        case 0x25bf5cu: goto label_25bf5c;
        case 0x25bf60u: goto label_25bf60;
        case 0x25bf64u: goto label_25bf64;
        case 0x25bf68u: goto label_25bf68;
        case 0x25bf6cu: goto label_25bf6c;
        case 0x25bf70u: goto label_25bf70;
        case 0x25bf74u: goto label_25bf74;
        case 0x25bf78u: goto label_25bf78;
        case 0x25bf7cu: goto label_25bf7c;
        case 0x25bf80u: goto label_25bf80;
        case 0x25bf84u: goto label_25bf84;
        case 0x25bf88u: goto label_25bf88;
        case 0x25bf8cu: goto label_25bf8c;
        case 0x25bf90u: goto label_25bf90;
        case 0x25bf94u: goto label_25bf94;
        case 0x25bf98u: goto label_25bf98;
        case 0x25bf9cu: goto label_25bf9c;
        case 0x25bfa0u: goto label_25bfa0;
        case 0x25bfa4u: goto label_25bfa4;
        case 0x25bfa8u: goto label_25bfa8;
        case 0x25bfacu: goto label_25bfac;
        case 0x25bfb0u: goto label_25bfb0;
        case 0x25bfb4u: goto label_25bfb4;
        case 0x25bfb8u: goto label_25bfb8;
        case 0x25bfbcu: goto label_25bfbc;
        case 0x25bfc0u: goto label_25bfc0;
        case 0x25bfc4u: goto label_25bfc4;
        case 0x25bfc8u: goto label_25bfc8;
        case 0x25bfccu: goto label_25bfcc;
        case 0x25bfd0u: goto label_25bfd0;
        case 0x25bfd4u: goto label_25bfd4;
        case 0x25bfd8u: goto label_25bfd8;
        case 0x25bfdcu: goto label_25bfdc;
        case 0x25bfe0u: goto label_25bfe0;
        case 0x25bfe4u: goto label_25bfe4;
        case 0x25bfe8u: goto label_25bfe8;
        case 0x25bfecu: goto label_25bfec;
        case 0x25bff0u: goto label_25bff0;
        case 0x25bff4u: goto label_25bff4;
        case 0x25bff8u: goto label_25bff8;
        case 0x25bffcu: goto label_25bffc;
        case 0x25c000u: goto label_25c000;
        case 0x25c004u: goto label_25c004;
        case 0x25c008u: goto label_25c008;
        case 0x25c00cu: goto label_25c00c;
        default: break;
    }

    ctx->pc = 0x25bcc0u;

label_25bcc0:
    // 0x25bcc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x25bcc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_25bcc4:
    // 0x25bcc4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x25bcc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_25bcc8:
    // 0x25bcc8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25bcc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25bccc:
    // 0x25bccc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x25bcccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_25bcd0:
    // 0x25bcd0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x25bcd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_25bcd4:
    // 0x25bcd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25bcd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_25bcd8:
    // 0x25bcd8: 0xc0b6dac  jal         func_2DB6B0
label_25bcdc:
    if (ctx->pc == 0x25BCDCu) {
        ctx->pc = 0x25BCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BCD8u;
        // 0x25bcdc: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BCE0u;
        goto label_25bce0;
    }
    ctx->pc = 0x25BCD8u;
    SET_GPR_U32(ctx, 31, 0x25BCE0u);
    ctx->pc = 0x25BCDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BCD8u;
    // 0x25bcdc: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x25BCD8u, 0x25BCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BCE0u;
label_25bce0:
    // 0x25bce0: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x25bce0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_25bce4:
    // 0x25bce4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25bce4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25bce8:
    // 0x25bce8: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x25bce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
label_25bcec:
    // 0x25bcec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25bcecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25bcf0:
    // 0x25bcf0: 0xc04d476  jal         func_1351D8
label_25bcf4:
    if (ctx->pc == 0x25BCF4u) {
        ctx->pc = 0x25BCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BCF0u;
        // 0x25bcf4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BCF8u;
        goto label_25bcf8;
    }
    ctx->pc = 0x25BCF0u;
    SET_GPR_U32(ctx, 31, 0x25BCF8u);
    ctx->pc = 0x25BCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BCF0u;
    // 0x25bcf4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x25BCF0u, 0x25BCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BCF8u;
label_25bcf8:
    // 0x25bcf8: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x25bcf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_25bcfc:
    // 0x25bcfc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25bcfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25bd00:
    // 0x25bd00: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x25bd00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_25bd04:
    // 0x25bd04: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_25bd08:
    if (ctx->pc == 0x25BD08u) {
        ctx->pc = 0x25BD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BD04u;
        // 0x25bd08: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BD0Cu;
        goto label_25bd0c;
    }
    ctx->pc = 0x25BD04u;
    {
        const bool branch_taken_0x25bd04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BD04u;
        // 0x25bd08: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bd04) {
            ctx->pc = 0x25BD20u;
            goto label_25bd20;
        }
    }
    ctx->pc = 0x25BD0Cu;
label_25bd0c:
    // 0x25bd0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25bd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25bd10:
    // 0x25bd10: 0x10620038  beq         $v1, $v0, . + 4 + (0x38 << 2)
label_25bd14:
    if (ctx->pc == 0x25BD14u) {
        ctx->pc = 0x25BD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BD10u;
        // 0x25bd14: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BD18u;
        goto label_25bd18;
    }
    ctx->pc = 0x25BD10u;
    {
        const bool branch_taken_0x25bd10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25BD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BD10u;
        // 0x25bd14: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bd10) {
            ctx->pc = 0x25BDF4u;
            goto label_25bdf4;
        }
    }
    ctx->pc = 0x25BD18u;
label_25bd18:
    // 0x25bd18: 0x100000b2  b           . + 4 + (0xB2 << 2)
label_25bd1c:
    if (ctx->pc == 0x25BD1Cu) {
        ctx->pc = 0x25BD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BD18u;
        // 0x25bd1c: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BD20u;
        goto label_25bd20;
    }
    ctx->pc = 0x25BD18u;
    {
        const bool branch_taken_0x25bd18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BD18u;
        // 0x25bd1c: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bd18) {
            ctx->pc = 0x25BFE4u;
            goto label_25bfe4;
        }
    }
    ctx->pc = 0x25BD20u;
label_25bd20:
    // 0x25bd20: 0xc09ac7a  jal         func_26B1E8
label_25bd24:
    if (ctx->pc == 0x25BD24u) {
        ctx->pc = 0x25BD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BD20u;
        // 0x25bd24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BD28u;
        goto label_25bd28;
    }
    ctx->pc = 0x25BD20u;
    SET_GPR_U32(ctx, 31, 0x25BD28u);
    ctx->pc = 0x25BD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BD20u;
    // 0x25bd24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B1E8u, 0x25BD20u, 0x25BD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BD28u;
label_25bd28:
    // 0x25bd28: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x25bd28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_25bd2c:
    // 0x25bd2c: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x25bd2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_25bd30:
    // 0x25bd30: 0x8612054a  lh          $s2, 0x54A($s0)
    ctx->pc = 0x25bd30u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
label_25bd34:
    // 0x25bd34: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x25bd34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25bd38:
    // 0x25bd38: 0x846400a8  lh          $a0, 0xA8($v1)
    ctx->pc = 0x25bd38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_25bd3c:
    // 0x25bd3c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x25bd3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25bd40:
    // 0x25bd40: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x25bd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_25bd44:
    // 0x25bd44: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25bd44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25bd48:
    // 0x25bd48: 0x40f809  jalr        $v0
label_25bd4c:
    if (ctx->pc == 0x25BD4Cu) {
        ctx->pc = 0x25BD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BD48u;
        // 0x25bd4c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BD50u;
        goto label_25bd50;
    }
    ctx->pc = 0x25BD48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25BD50u);
        ctx->pc = 0x25BD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BD48u;
        // 0x25bd4c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25BD48u, 0x25BD50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25BD50u;
label_25bd50:
    // 0x25bd50: 0x8603054a  lh          $v1, 0x54A($s0)
    ctx->pc = 0x25bd50u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
label_25bd54:
    // 0x25bd54: 0x1c60000e  bgtz        $v1, . + 4 + (0xE << 2)
label_25bd58:
    if (ctx->pc == 0x25BD58u) {
        ctx->pc = 0x25BD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BD54u;
        // 0x25bd58: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BD5Cu;
        goto label_25bd5c;
    }
    ctx->pc = 0x25BD54u;
    {
        const bool branch_taken_0x25bd54 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x25BD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BD54u;
        // 0x25bd58: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bd54) {
            ctx->pc = 0x25BD90u;
            goto label_25bd90;
        }
    }
    ctx->pc = 0x25BD5Cu;
label_25bd5c:
    // 0x25bd5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25bd5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25bd60:
    // 0x25bd60: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25bd60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25bd64:
    // 0x25bd64: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25bd64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25bd68:
    // 0x25bd68: 0x8c450530  lw          $a1, 0x530($v0)
    ctx->pc = 0x25bd68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1328)));
label_25bd6c:
    // 0x25bd6c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25bd6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25bd70:
    // 0x25bd70: 0x8c460534  lw          $a2, 0x534($v0)
    ctx->pc = 0x25bd70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1332)));
label_25bd74:
    // 0x25bd74: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25bd74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25bd78:
    // 0x25bd78: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x25bd78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_25bd7c:
    // 0x25bd7c: 0xc0aa15e  jal         func_2A8578
label_25bd80:
    if (ctx->pc == 0x25BD80u) {
        ctx->pc = 0x25BD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BD7Cu;
        // 0x25bd80: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BD84u;
        goto label_25bd84;
    }
    ctx->pc = 0x25BD7Cu;
    SET_GPR_U32(ctx, 31, 0x25BD84u);
    ctx->pc = 0x25BD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BD7Cu;
    // 0x25bd80: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x25BD7Cu, 0x25BD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BD84u;
label_25bd84:
    // 0x25bd84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25bd84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25bd88:
    // 0x25bd88: 0x1000000c  b           . + 4 + (0xC << 2)
label_25bd8c:
    if (ctx->pc == 0x25BD8Cu) {
        ctx->pc = 0x25BD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BD88u;
        // 0x25bd8c: 0xa6020568  sh          $v0, 0x568($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BD90u;
        goto label_25bd90;
    }
    ctx->pc = 0x25BD88u;
    {
        const bool branch_taken_0x25bd88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BD88u;
        // 0x25bd8c: 0xa6020568  sh          $v0, 0x568($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bd88) {
            ctx->pc = 0x25BDBCu;
            goto label_25bdbc;
        }
    }
    ctx->pc = 0x25BD90u;
label_25bd90:
    // 0x25bd90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25bd90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25bd94:
    // 0x25bd94: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25bd94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25bd98:
    // 0x25bd98: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25bd98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25bd9c:
    // 0x25bd9c: 0x8c450528  lw          $a1, 0x528($v0)
    ctx->pc = 0x25bd9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1320)));
label_25bda0:
    // 0x25bda0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25bda0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25bda4:
    // 0x25bda4: 0x8c46052c  lw          $a2, 0x52C($v0)
    ctx->pc = 0x25bda4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1324)));
label_25bda8:
    // 0x25bda8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25bda8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25bdac:
    // 0x25bdac: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x25bdacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_25bdb0:
    // 0x25bdb0: 0xc0aa15e  jal         func_2A8578
label_25bdb4:
    if (ctx->pc == 0x25BDB4u) {
        ctx->pc = 0x25BDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BDB0u;
        // 0x25bdb4: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BDB8u;
        goto label_25bdb8;
    }
    ctx->pc = 0x25BDB0u;
    SET_GPR_U32(ctx, 31, 0x25BDB8u);
    ctx->pc = 0x25BDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BDB0u;
    // 0x25bdb4: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x25BDB0u, 0x25BDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BDB8u;
label_25bdb8:
    // 0x25bdb8: 0xa6000568  sh          $zero, 0x568($s0)
    ctx->pc = 0x25bdb8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 0));
label_25bdbc:
    // 0x25bdbc: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x25bdbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_25bdc0:
    // 0x25bdc0: 0x2404002a  addiu       $a0, $zero, 0x2A
    ctx->pc = 0x25bdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
label_25bdc4:
    // 0x25bdc4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25bdc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25bdc8:
    // 0x25bdc8: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x25bdc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_25bdcc:
    // 0x25bdcc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25bdccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_25bdd0:
    // 0x25bdd0: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x25bdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_25bdd4:
    // 0x25bdd4: 0xa612054a  sh          $s2, 0x54A($s0)
    ctx->pc = 0x25bdd4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 18));
label_25bdd8:
    // 0x25bdd8: 0xae0405f0  sw          $a0, 0x5F0($s0)
    ctx->pc = 0x25bdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 4));
label_25bddc:
    // 0x25bddc: 0xae0505f4  sw          $a1, 0x5F4($s0)
    ctx->pc = 0x25bddcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1524), GPR_U32(ctx, 5));
label_25bde0:
    // 0x25bde0: 0xa606056e  sh          $a2, 0x56E($s0)
    ctx->pc = 0x25bde0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 6));
label_25bde4:
    // 0x25bde4: 0xa603056a  sh          $v1, 0x56A($s0)
    ctx->pc = 0x25bde4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 3));
label_25bde8:
    // 0x25bde8: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x25bde8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_25bdec:
    // 0x25bdec: 0xae0016ec  sw          $zero, 0x16EC($s0)
    ctx->pc = 0x25bdecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5868), GPR_U32(ctx, 0));
label_25bdf0:
    // 0x25bdf0: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x25bdf0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_25bdf4:
    // 0x25bdf4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x25bdf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_25bdf8:
    // 0x25bdf8: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_25bdfc:
    if (ctx->pc == 0x25BDFCu) {
        ctx->pc = 0x25BDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BDF8u;
        // 0x25bdfc: 0x8602056e  lh          $v0, 0x56E($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BE00u;
        goto label_25be00;
    }
    ctx->pc = 0x25BDF8u;
    {
        const bool branch_taken_0x25bdf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25bdf8) {
            ctx->pc = 0x25BDFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BDF8u;
            // 0x25bdfc: 0x8602056e  lh          $v0, 0x56E($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BE48u;
            goto label_25be48;
        }
    }
    ctx->pc = 0x25BE00u;
label_25be00:
    // 0x25be00: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x25be00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
label_25be04:
    // 0x25be04: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x25be04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_25be08:
    // 0x25be08: 0xc6010114  lwc1        $f1, 0x114($s0)
    ctx->pc = 0x25be08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25be0c:
    // 0x25be0c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25be0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_25be10:
    // 0x25be10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25be10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25be14:
    // 0x25be14: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x25be14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_25be18:
    // 0x25be18: 0xae0216d0  sw          $v0, 0x16D0($s0)
    ctx->pc = 0x25be18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
label_25be1c:
    // 0x25be1c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x25be1cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_25be20:
    // 0x25be20: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x25be20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_25be24:
    // 0x25be24: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x25be24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_25be28:
    // 0x25be28: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x25be28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_25be2c:
    // 0x25be2c: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x25be2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_25be30:
    // 0x25be30: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x25be30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_25be34:
    // 0x25be34: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x25be34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_25be38:
    // 0x25be38: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x25be38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25be3c:
    // 0x25be3c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x25be3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_25be40:
    // 0x25be40: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x25be40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_25be44:
    // 0x25be44: 0x8602056e  lh          $v0, 0x56E($s0)
    ctx->pc = 0x25be44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
label_25be48:
    // 0x25be48: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_25be4c:
    if (ctx->pc == 0x25BE4Cu) {
        ctx->pc = 0x25BE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BE48u;
        // 0x25be4c: 0x9603056e  lhu         $v1, 0x56E($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BE50u;
        goto label_25be50;
    }
    ctx->pc = 0x25BE48u;
    {
        const bool branch_taken_0x25be48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BE48u;
        // 0x25be4c: 0x9603056e  lhu         $v1, 0x56E($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25be48) {
            ctx->pc = 0x25BE70u;
            goto label_25be70;
        }
    }
    ctx->pc = 0x25BE50u;
label_25be50:
    // 0x25be50: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x25be50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_25be54:
    // 0x25be54: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x25be54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_25be58:
    // 0x25be58: 0xa602056e  sh          $v0, 0x56E($s0)
    ctx->pc = 0x25be58u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 2));
label_25be5c:
    // 0x25be5c: 0x26230550  addiu       $v1, $s1, 0x550
    ctx->pc = 0x25be5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
label_25be60:
    // 0x25be60: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x25be60u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_25be64:
    // 0x25be64: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x25be64u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_25be68:
    // 0x25be68: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x25be68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_25be6c:
    // 0x25be6c: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x25be6cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_25be70:
    // 0x25be70: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x25be70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_25be74:
    // 0x25be74: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x25be74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_25be78:
    // 0x25be78: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_25be7c:
    if (ctx->pc == 0x25BE7Cu) {
        ctx->pc = 0x25BE80u;
        goto label_25be80;
    }
    ctx->pc = 0x25BE78u;
    {
        const bool branch_taken_0x25be78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25be78) {
            ctx->pc = 0x25BED4u;
            goto label_25bed4;
        }
    }
    ctx->pc = 0x25BE80u;
label_25be80:
    // 0x25be80: 0x8e0205f4  lw          $v0, 0x5F4($s0)
    ctx->pc = 0x25be80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1524)));
label_25be84:
    // 0x25be84: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_25be88:
    if (ctx->pc == 0x25BE88u) {
        ctx->pc = 0x25BE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BE84u;
        // 0x25be88: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BE8Cu;
        goto label_25be8c;
    }
    ctx->pc = 0x25BE84u;
    {
        const bool branch_taken_0x25be84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BE84u;
        // 0x25be88: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25be84) {
            ctx->pc = 0x25BED4u;
            goto label_25bed4;
        }
    }
    ctx->pc = 0x25BE8Cu;
label_25be8c:
    // 0x25be8c: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x25be8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_25be90:
    // 0x25be90: 0xae0005f4  sw          $zero, 0x5F4($s0)
    ctx->pc = 0x25be90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1524), GPR_U32(ctx, 0));
label_25be94:
    // 0x25be94: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x25be94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25be98:
    // 0x25be98: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x25be98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25be9c:
    // 0x25be9c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25be9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25bea0:
    // 0x25bea0: 0x846400a8  lh          $a0, 0xA8($v1)
    ctx->pc = 0x25bea0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_25bea4:
    // 0x25bea4: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x25bea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_25bea8:
    // 0x25bea8: 0x40f809  jalr        $v0
label_25beac:
    if (ctx->pc == 0x25BEACu) {
        ctx->pc = 0x25BEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BEA8u;
        // 0x25beac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BEB0u;
        goto label_25beb0;
    }
    ctx->pc = 0x25BEA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25BEB0u);
        ctx->pc = 0x25BEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BEA8u;
        // 0x25beac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25BEA8u, 0x25BEB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25BEB0u;
label_25beb0:
    // 0x25beb0: 0x86030568  lh          $v1, 0x568($s0)
    ctx->pc = 0x25beb0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
label_25beb4:
    // 0x25beb4: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
label_25beb8:
    if (ctx->pc == 0x25BEB8u) {
        ctx->pc = 0x25BEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BEB4u;
        // 0x25beb8: 0xa600054a  sh          $zero, 0x54A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BEBCu;
        goto label_25bebc;
    }
    ctx->pc = 0x25BEB4u;
    {
        const bool branch_taken_0x25beb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25beb4) {
            ctx->pc = 0x25BEB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BEB4u;
            // 0x25beb8: 0xa600054a  sh          $zero, 0x54A($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BEBCu;
            goto label_25bebc;
        }
    }
    ctx->pc = 0x25BEBCu;
label_25bebc:
    // 0x25bebc: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x25bebcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
label_25bec0:
    // 0x25bec0: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x25bec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_25bec4:
    // 0x25bec4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25bec4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25bec8:
    // 0x25bec8: 0x2484b000  addiu       $a0, $a0, -0x5000
    ctx->pc = 0x25bec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946816));
label_25becc:
    // 0x25becc: 0xc0aa65e  jal         func_2A9978
label_25bed0:
    if (ctx->pc == 0x25BED0u) {
        ctx->pc = 0x25BED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BECCu;
        // 0x25bed0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BED4u;
        goto label_25bed4;
    }
    ctx->pc = 0x25BECCu;
    SET_GPR_U32(ctx, 31, 0x25BED4u);
    ctx->pc = 0x25BED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BECCu;
    // 0x25bed0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9978u, 0x25BECCu, 0x25BED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BED4u;
label_25bed4:
    // 0x25bed4: 0xc055f06  jal         func_157C18
label_25bed8:
    if (ctx->pc == 0x25BED8u) {
        ctx->pc = 0x25BED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BED4u;
        // 0x25bed8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BEDCu;
        goto label_25bedc;
    }
    ctx->pc = 0x25BED4u;
    SET_GPR_U32(ctx, 31, 0x25BEDCu);
    ctx->pc = 0x25BED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BED4u;
    // 0x25bed8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x25BED4u, 0x25BEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BEDCu;
label_25bedc:
    // 0x25bedc: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_25bee0:
    if (ctx->pc == 0x25BEE0u) {
        ctx->pc = 0x25BEE4u;
        goto label_25bee4;
    }
    ctx->pc = 0x25BEDCu;
    {
        const bool branch_taken_0x25bedc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bedc) {
            ctx->pc = 0x25BF48u;
            goto label_25bf48;
        }
    }
    ctx->pc = 0x25BEE4u;
label_25bee4:
    // 0x25bee4: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x25bee4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
label_25bee8:
    // 0x25bee8: 0x1c400015  bgtz        $v0, . + 4 + (0x15 << 2)
label_25beec:
    if (ctx->pc == 0x25BEECu) {
        ctx->pc = 0x25BEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BEE8u;
        // 0x25beec: 0x3c030080  lui         $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BEF0u;
        goto label_25bef0;
    }
    ctx->pc = 0x25BEE8u;
    {
        const bool branch_taken_0x25bee8 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x25BEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BEE8u;
        // 0x25beec: 0x3c030080  lui         $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bee8) {
            ctx->pc = 0x25BF40u;
            goto label_25bf40;
        }
    }
    ctx->pc = 0x25BEF0u;
label_25bef0:
    // 0x25bef0: 0x8e021644  lw          $v0, 0x1644($s0)
    ctx->pc = 0x25bef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5700)));
label_25bef4:
    // 0x25bef4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x25bef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_25bef8:
    // 0x25bef8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_25befc:
    if (ctx->pc == 0x25BEFCu) {
        ctx->pc = 0x25BEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BEF8u;
        // 0x25befc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BF00u;
        goto label_25bf00;
    }
    ctx->pc = 0x25BEF8u;
    {
        const bool branch_taken_0x25bef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BEF8u;
        // 0x25befc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bef8) {
            ctx->pc = 0x25BF18u;
            goto label_25bf18;
        }
    }
    ctx->pc = 0x25BF00u;
label_25bf00:
    // 0x25bf00: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x25bf00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_25bf04:
    // 0x25bf04: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x25bf04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
label_25bf08:
    // 0x25bf08: 0xa20302f5  sb          $v1, 0x2F5($s0)
    ctx->pc = 0x25bf08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
label_25bf0c:
    // 0x25bf0c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x25bf0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_25bf10:
    // 0x25bf10: 0x10000038  b           . + 4 + (0x38 << 2)
label_25bf14:
    if (ctx->pc == 0x25BF14u) {
        ctx->pc = 0x25BF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BF10u;
        // 0x25bf14: 0xa20002f6  sb          $zero, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BF18u;
        goto label_25bf18;
    }
    ctx->pc = 0x25BF10u;
    {
        const bool branch_taken_0x25bf10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BF10u;
        // 0x25bf14: 0xa20002f6  sb          $zero, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bf10) {
            ctx->pc = 0x25BFF4u;
            goto label_25bff4;
        }
    }
    ctx->pc = 0x25BF18u;
label_25bf18:
    // 0x25bf18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25bf18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25bf1c:
    // 0x25bf1c: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x25bf1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
label_25bf20:
    // 0x25bf20: 0xc097f8c  jal         func_25FE30
label_25bf24:
    if (ctx->pc == 0x25BF24u) {
        ctx->pc = 0x25BF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BF20u;
        // 0x25bf24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BF28u;
        goto label_25bf28;
    }
    ctx->pc = 0x25BF20u;
    SET_GPR_U32(ctx, 31, 0x25BF28u);
    ctx->pc = 0x25BF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BF20u;
    // 0x25bf24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FE30u, 0x25BF20u, 0x25BF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BF28u;
label_25bf28:
    // 0x25bf28: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x25bf28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_25bf2c:
    // 0x25bf2c: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x25bf2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_25bf30:
    // 0x25bf30: 0xa20302f5  sb          $v1, 0x2F5($s0)
    ctx->pc = 0x25bf30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
label_25bf34:
    // 0x25bf34: 0xa20302f4  sb          $v1, 0x2F4($s0)
    ctx->pc = 0x25bf34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 3));
label_25bf38:
    // 0x25bf38: 0x10000003  b           . + 4 + (0x3 << 2)
label_25bf3c:
    if (ctx->pc == 0x25BF3Cu) {
        ctx->pc = 0x25BF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BF38u;
        // 0x25bf3c: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BF40u;
        goto label_25bf40;
    }
    ctx->pc = 0x25BF38u;
    {
        const bool branch_taken_0x25bf38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BF38u;
        // 0x25bf3c: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bf38) {
            ctx->pc = 0x25BF48u;
            goto label_25bf48;
        }
    }
    ctx->pc = 0x25BF40u;
label_25bf40:
    // 0x25bf40: 0xc09d3fa  jal         func_274FE8
label_25bf44:
    if (ctx->pc == 0x25BF44u) {
        ctx->pc = 0x25BF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BF40u;
        // 0x25bf44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BF48u;
        goto label_25bf48;
    }
    ctx->pc = 0x25BF40u;
    SET_GPR_U32(ctx, 31, 0x25BF48u);
    ctx->pc = 0x25BF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BF40u;
    // 0x25bf44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274FE8u, 0x25BF40u, 0x25BF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BF48u;
label_25bf48:
    // 0x25bf48: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25bf48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_25bf4c:
    // 0x25bf4c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25bf4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_25bf50:
    // 0x25bf50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25bf50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25bf54:
    // 0x25bf54: 0xc053e7c  jal         func_14F9F0
label_25bf58:
    if (ctx->pc == 0x25BF58u) {
        ctx->pc = 0x25BF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BF54u;
        // 0x25bf58: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BF5Cu;
        goto label_25bf5c;
    }
    ctx->pc = 0x25BF54u;
    SET_GPR_U32(ctx, 31, 0x25BF5Cu);
    ctx->pc = 0x25BF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BF54u;
    // 0x25bf58: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x25BF54u, 0x25BF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BF5Cu;
label_25bf5c:
    // 0x25bf5c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25bf5cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_25bf60:
    // 0x25bf60: 0xc053e4a  jal         func_14F928
label_25bf64:
    if (ctx->pc == 0x25BF64u) {
        ctx->pc = 0x25BF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BF60u;
        // 0x25bf64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BF68u;
        goto label_25bf68;
    }
    ctx->pc = 0x25BF60u;
    SET_GPR_U32(ctx, 31, 0x25BF68u);
    ctx->pc = 0x25BF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BF60u;
    // 0x25bf64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x25BF60u, 0x25BF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BF68u;
label_25bf68:
    // 0x25bf68: 0x8602056a  lh          $v0, 0x56A($s0)
    ctx->pc = 0x25bf68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1386)));
label_25bf6c:
    // 0x25bf6c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_25bf70:
    if (ctx->pc == 0x25BF70u) {
        ctx->pc = 0x25BF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BF6Cu;
        // 0x25bf70: 0x9603056a  lhu         $v1, 0x56A($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1386)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BF74u;
        goto label_25bf74;
    }
    ctx->pc = 0x25BF6Cu;
    {
        const bool branch_taken_0x25bf6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BF6Cu;
        // 0x25bf70: 0x9603056a  lhu         $v1, 0x56A($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1386)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bf6c) {
            ctx->pc = 0x25BF80u;
            goto label_25bf80;
        }
    }
    ctx->pc = 0x25BF74u;
label_25bf74:
    // 0x25bf74: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x25bf74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_25bf78:
    // 0x25bf78: 0x10000018  b           . + 4 + (0x18 << 2)
label_25bf7c:
    if (ctx->pc == 0x25BF7Cu) {
        ctx->pc = 0x25BF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BF78u;
        // 0x25bf7c: 0xa602056a  sh          $v0, 0x56A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BF80u;
        goto label_25bf80;
    }
    ctx->pc = 0x25BF78u;
    {
        const bool branch_taken_0x25bf78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BF78u;
        // 0x25bf7c: 0xa602056a  sh          $v0, 0x56A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bf78) {
            ctx->pc = 0x25BFDCu;
            goto label_25bfdc;
        }
    }
    ctx->pc = 0x25BF80u;
label_25bf80:
    // 0x25bf80: 0x9202186b  lbu         $v0, 0x186B($s0)
    ctx->pc = 0x25bf80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6251)));
label_25bf84:
    // 0x25bf84: 0x240303e7  addiu       $v1, $zero, 0x3E7
    ctx->pc = 0x25bf84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
label_25bf88:
    // 0x25bf88: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x25bf88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_25bf8c:
    // 0x25bf8c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_25bf90:
    if (ctx->pc == 0x25BF90u) {
        ctx->pc = 0x25BF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BF8Cu;
        // 0x25bf90: 0xa603056a  sh          $v1, 0x56A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BF94u;
        goto label_25bf94;
    }
    ctx->pc = 0x25BF8Cu;
    {
        const bool branch_taken_0x25bf8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25BF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BF8Cu;
        // 0x25bf90: 0xa603056a  sh          $v1, 0x56A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bf8c) {
            ctx->pc = 0x25BFDCu;
            goto label_25bfdc;
        }
    }
    ctx->pc = 0x25BF94u;
label_25bf94:
    // 0x25bf94: 0x920302f7  lbu         $v1, 0x2F7($s0)
    ctx->pc = 0x25bf94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
label_25bf98:
    // 0x25bf98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25bf98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25bf9c:
    // 0x25bf9c: 0x54620010  bnel        $v1, $v0, . + 4 + (0x10 << 2)
label_25bfa0:
    if (ctx->pc == 0x25BFA0u) {
        ctx->pc = 0x25BFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BF9Cu;
        // 0x25bfa0: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BFA4u;
        goto label_25bfa4;
    }
    ctx->pc = 0x25BF9Cu;
    {
        const bool branch_taken_0x25bf9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25bf9c) {
            ctx->pc = 0x25BFA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BF9Cu;
            // 0x25bfa0: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BFE0u;
            goto label_25bfe0;
        }
    }
    ctx->pc = 0x25BFA4u;
label_25bfa4:
    // 0x25bfa4: 0xc0c73f8  jal         func_31CFE0
label_25bfa8:
    if (ctx->pc == 0x25BFA8u) {
        ctx->pc = 0x25BFACu;
        goto label_25bfac;
    }
    ctx->pc = 0x25BFA4u;
    SET_GPR_U32(ctx, 31, 0x25BFACu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x25BFA4u, 0x25BFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BFACu;
label_25bfac:
    // 0x25bfac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25bfacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_25bfb0:
    // 0x25bfb0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_25bfb4:
    if (ctx->pc == 0x25BFB4u) {
        ctx->pc = 0x25BFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BFB0u;
        // 0x25bfb4: 0x2402004d  addiu       $v0, $zero, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BFB8u;
        goto label_25bfb8;
    }
    ctx->pc = 0x25BFB0u;
    {
        const bool branch_taken_0x25bfb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BFB0u;
        // 0x25bfb4: 0x2402004d  addiu       $v0, $zero, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bfb0) {
            ctx->pc = 0x25BFDCu;
            goto label_25bfdc;
        }
    }
    ctx->pc = 0x25BFB8u;
label_25bfb8:
    // 0x25bfb8: 0x920302f7  lbu         $v1, 0x2F7($s0)
    ctx->pc = 0x25bfb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
label_25bfbc:
    // 0x25bfbc: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x25bfbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
label_25bfc0:
    // 0x25bfc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25bfc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25bfc4:
    // 0x25bfc4: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x25bfc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_25bfc8:
    // 0x25bfc8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25bfc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25bfcc:
    // 0x25bfcc: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x25bfccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
label_25bfd0:
    // 0x25bfd0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x25bfd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_25bfd4:
    // 0x25bfd4: 0xc04a5c6  jal         func_129718
label_25bfd8:
    if (ctx->pc == 0x25BFD8u) {
        ctx->pc = 0x25BFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BFD4u;
        // 0x25bfd8: 0xa20302f7  sb          $v1, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BFDCu;
        goto label_25bfdc;
    }
    ctx->pc = 0x25BFD4u;
    SET_GPR_U32(ctx, 31, 0x25BFDCu);
    ctx->pc = 0x25BFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BFD4u;
    // 0x25bfd8: 0xa20302f7  sb          $v1, 0x2F7($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129718u, 0x25BFD4u, 0x25BFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BFDCu;
label_25bfdc:
    // 0x25bfdc: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x25bfdcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_25bfe0:
    // 0x25bfe0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25bfe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_25bfe4:
    // 0x25bfe4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_25bfe8:
    if (ctx->pc == 0x25BFE8u) {
        ctx->pc = 0x25BFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BFE4u;
        // 0x25bfe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BFECu;
        goto label_25bfec;
    }
    ctx->pc = 0x25BFE4u;
    {
        const bool branch_taken_0x25bfe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BFE4u;
        // 0x25bfe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bfe4) {
            ctx->pc = 0x25BFF4u;
            goto label_25bff4;
        }
    }
    ctx->pc = 0x25BFECu;
label_25bfec:
    // 0x25bfec: 0xc0989d4  jal         func_262750
label_25bff0:
    if (ctx->pc == 0x25BFF0u) {
        ctx->pc = 0x25BFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BFECu;
        // 0x25bff0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BFF4u;
        goto label_25bff4;
    }
    ctx->pc = 0x25BFECu;
    SET_GPR_U32(ctx, 31, 0x25BFF4u);
    ctx->pc = 0x25BFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BFECu;
    // 0x25bff0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262750u, 0x25BFECu, 0x25BFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BFF4u;
label_25bff4:
    // 0x25bff4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x25bff4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_25bff8:
    // 0x25bff8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x25bff8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25bffc:
    // 0x25bffc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x25bffcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25c000:
    // 0x25c000: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25c000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25c004:
    // 0x25c004: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x25c004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_25c008:
    // 0x25c008: 0x3e00008  jr          $ra
label_25c00c:
    if (ctx->pc == 0x25C00Cu) {
        ctx->pc = 0x25C00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C008u;
        // 0x25c00c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C010u;
        goto label_fallthrough_0x25c008;
    }
    ctx->pc = 0x25C008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C008u;
        // 0x25c00c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x25c008:
    ctx->pc = 0x25C010u;
}
