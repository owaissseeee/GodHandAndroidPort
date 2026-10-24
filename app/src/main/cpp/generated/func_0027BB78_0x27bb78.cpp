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

// Function: func_0027BB78
// Address: 0x27bb78 - 0x27bdd8
void func_0027BB78_0x27bb78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0027BB78_0x27bb78");
#endif

    switch (ctx->pc) {
        case 0x27bb78u: goto label_27bb78;
        case 0x27bb7cu: goto label_27bb7c;
        case 0x27bb80u: goto label_27bb80;
        case 0x27bb84u: goto label_27bb84;
        case 0x27bb88u: goto label_27bb88;
        case 0x27bb8cu: goto label_27bb8c;
        case 0x27bb90u: goto label_27bb90;
        case 0x27bb94u: goto label_27bb94;
        case 0x27bb98u: goto label_27bb98;
        case 0x27bb9cu: goto label_27bb9c;
        case 0x27bba0u: goto label_27bba0;
        case 0x27bba4u: goto label_27bba4;
        case 0x27bba8u: goto label_27bba8;
        case 0x27bbacu: goto label_27bbac;
        case 0x27bbb0u: goto label_27bbb0;
        case 0x27bbb4u: goto label_27bbb4;
        case 0x27bbb8u: goto label_27bbb8;
        case 0x27bbbcu: goto label_27bbbc;
        case 0x27bbc0u: goto label_27bbc0;
        case 0x27bbc4u: goto label_27bbc4;
        case 0x27bbc8u: goto label_27bbc8;
        case 0x27bbccu: goto label_27bbcc;
        case 0x27bbd0u: goto label_27bbd0;
        case 0x27bbd4u: goto label_27bbd4;
        case 0x27bbd8u: goto label_27bbd8;
        case 0x27bbdcu: goto label_27bbdc;
        case 0x27bbe0u: goto label_27bbe0;
        case 0x27bbe4u: goto label_27bbe4;
        case 0x27bbe8u: goto label_27bbe8;
        case 0x27bbecu: goto label_27bbec;
        case 0x27bbf0u: goto label_27bbf0;
        case 0x27bbf4u: goto label_27bbf4;
        case 0x27bbf8u: goto label_27bbf8;
        case 0x27bbfcu: goto label_27bbfc;
        case 0x27bc00u: goto label_27bc00;
        case 0x27bc04u: goto label_27bc04;
        case 0x27bc08u: goto label_27bc08;
        case 0x27bc0cu: goto label_27bc0c;
        case 0x27bc10u: goto label_27bc10;
        case 0x27bc14u: goto label_27bc14;
        case 0x27bc18u: goto label_27bc18;
        case 0x27bc1cu: goto label_27bc1c;
        case 0x27bc20u: goto label_27bc20;
        case 0x27bc24u: goto label_27bc24;
        case 0x27bc28u: goto label_27bc28;
        case 0x27bc2cu: goto label_27bc2c;
        case 0x27bc30u: goto label_27bc30;
        case 0x27bc34u: goto label_27bc34;
        case 0x27bc38u: goto label_27bc38;
        case 0x27bc3cu: goto label_27bc3c;
        case 0x27bc40u: goto label_27bc40;
        case 0x27bc44u: goto label_27bc44;
        case 0x27bc48u: goto label_27bc48;
        case 0x27bc4cu: goto label_27bc4c;
        case 0x27bc50u: goto label_27bc50;
        case 0x27bc54u: goto label_27bc54;
        case 0x27bc58u: goto label_27bc58;
        case 0x27bc5cu: goto label_27bc5c;
        case 0x27bc60u: goto label_27bc60;
        case 0x27bc64u: goto label_27bc64;
        case 0x27bc68u: goto label_27bc68;
        case 0x27bc6cu: goto label_27bc6c;
        case 0x27bc70u: goto label_27bc70;
        case 0x27bc74u: goto label_27bc74;
        case 0x27bc78u: goto label_27bc78;
        case 0x27bc7cu: goto label_27bc7c;
        case 0x27bc80u: goto label_27bc80;
        case 0x27bc84u: goto label_27bc84;
        case 0x27bc88u: goto label_27bc88;
        case 0x27bc8cu: goto label_27bc8c;
        case 0x27bc90u: goto label_27bc90;
        case 0x27bc94u: goto label_27bc94;
        case 0x27bc98u: goto label_27bc98;
        case 0x27bc9cu: goto label_27bc9c;
        case 0x27bca0u: goto label_27bca0;
        case 0x27bca4u: goto label_27bca4;
        case 0x27bca8u: goto label_27bca8;
        case 0x27bcacu: goto label_27bcac;
        case 0x27bcb0u: goto label_27bcb0;
        case 0x27bcb4u: goto label_27bcb4;
        case 0x27bcb8u: goto label_27bcb8;
        case 0x27bcbcu: goto label_27bcbc;
        case 0x27bcc0u: goto label_27bcc0;
        case 0x27bcc4u: goto label_27bcc4;
        case 0x27bcc8u: goto label_27bcc8;
        case 0x27bcccu: goto label_27bccc;
        case 0x27bcd0u: goto label_27bcd0;
        case 0x27bcd4u: goto label_27bcd4;
        case 0x27bcd8u: goto label_27bcd8;
        case 0x27bcdcu: goto label_27bcdc;
        case 0x27bce0u: goto label_27bce0;
        case 0x27bce4u: goto label_27bce4;
        case 0x27bce8u: goto label_27bce8;
        case 0x27bcecu: goto label_27bcec;
        case 0x27bcf0u: goto label_27bcf0;
        case 0x27bcf4u: goto label_27bcf4;
        case 0x27bcf8u: goto label_27bcf8;
        case 0x27bcfcu: goto label_27bcfc;
        case 0x27bd00u: goto label_27bd00;
        case 0x27bd04u: goto label_27bd04;
        case 0x27bd08u: goto label_27bd08;
        case 0x27bd0cu: goto label_27bd0c;
        case 0x27bd10u: goto label_27bd10;
        case 0x27bd14u: goto label_27bd14;
        case 0x27bd18u: goto label_27bd18;
        case 0x27bd1cu: goto label_27bd1c;
        case 0x27bd20u: goto label_27bd20;
        case 0x27bd24u: goto label_27bd24;
        case 0x27bd28u: goto label_27bd28;
        case 0x27bd2cu: goto label_27bd2c;
        case 0x27bd30u: goto label_27bd30;
        case 0x27bd34u: goto label_27bd34;
        case 0x27bd38u: goto label_27bd38;
        case 0x27bd3cu: goto label_27bd3c;
        case 0x27bd40u: goto label_27bd40;
        case 0x27bd44u: goto label_27bd44;
        case 0x27bd48u: goto label_27bd48;
        case 0x27bd4cu: goto label_27bd4c;
        case 0x27bd50u: goto label_27bd50;
        case 0x27bd54u: goto label_27bd54;
        case 0x27bd58u: goto label_27bd58;
        case 0x27bd5cu: goto label_27bd5c;
        case 0x27bd60u: goto label_27bd60;
        case 0x27bd64u: goto label_27bd64;
        case 0x27bd68u: goto label_27bd68;
        case 0x27bd6cu: goto label_27bd6c;
        case 0x27bd70u: goto label_27bd70;
        case 0x27bd74u: goto label_27bd74;
        case 0x27bd78u: goto label_27bd78;
        case 0x27bd7cu: goto label_27bd7c;
        case 0x27bd80u: goto label_27bd80;
        case 0x27bd84u: goto label_27bd84;
        case 0x27bd88u: goto label_27bd88;
        case 0x27bd8cu: goto label_27bd8c;
        case 0x27bd90u: goto label_27bd90;
        case 0x27bd94u: goto label_27bd94;
        case 0x27bd98u: goto label_27bd98;
        case 0x27bd9cu: goto label_27bd9c;
        case 0x27bda0u: goto label_27bda0;
        case 0x27bda4u: goto label_27bda4;
        case 0x27bda8u: goto label_27bda8;
        case 0x27bdacu: goto label_27bdac;
        case 0x27bdb0u: goto label_27bdb0;
        case 0x27bdb4u: goto label_27bdb4;
        case 0x27bdb8u: goto label_27bdb8;
        case 0x27bdbcu: goto label_27bdbc;
        case 0x27bdc0u: goto label_27bdc0;
        case 0x27bdc4u: goto label_27bdc4;
        case 0x27bdc8u: goto label_27bdc8;
        case 0x27bdccu: goto label_27bdcc;
        case 0x27bdd0u: goto label_27bdd0;
        case 0x27bdd4u: goto label_27bdd4;
        default: break;
    }

    ctx->pc = 0x27bb78u;

label_27bb78:
    // 0x27bb78: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x27bb78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_27bb7c:
    // 0x27bb7c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x27bb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_27bb80:
    // 0x27bb80: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x27bb80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_27bb84:
    // 0x27bb84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27bb84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27bb88:
    // 0x27bb88: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x27bb88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_27bb8c:
    // 0x27bb8c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x27bb8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_27bb90:
    // 0x27bb90: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x27bb90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
label_27bb94:
    // 0x27bb94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27bb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_27bb98:
    // 0x27bb98: 0x8c437a78  lw          $v1, 0x7A78($v0)
    ctx->pc = 0x27bb98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31352)));
label_27bb9c:
    // 0x27bb9c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x27bb9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_27bba0:
    // 0x27bba0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x27bba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_27bba4:
    // 0x27bba4: 0x14600085  bnez        $v1, . + 4 + (0x85 << 2)
label_27bba8:
    if (ctx->pc == 0x27BBA8u) {
        ctx->pc = 0x27BBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BBA4u;
        // 0x27bba8: 0x8e331580  lw          $s3, 0x1580($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5504)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BBACu;
        goto label_27bbac;
    }
    ctx->pc = 0x27BBA4u;
    {
        const bool branch_taken_0x27bba4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27BBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BBA4u;
        // 0x27bba8: 0x8e331580  lw          $s3, 0x1580($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bba4) {
            ctx->pc = 0x27BDBCu;
            goto label_27bdbc;
        }
    }
    ctx->pc = 0x27BBACu;
label_27bbac:
    // 0x27bbac: 0x52600003  beql        $s3, $zero, . + 4 + (0x3 << 2)
label_27bbb0:
    if (ctx->pc == 0x27BBB0u) {
        ctx->pc = 0x27BBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BBACu;
        // 0x27bbb0: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BBB4u;
        goto label_27bbb4;
    }
    ctx->pc = 0x27BBACu;
    {
        const bool branch_taken_0x27bbac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x27bbac) {
            ctx->pc = 0x27BBB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27BBACu;
            // 0x27bbb0: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27BBBCu;
            goto label_27bbbc;
        }
    }
    ctx->pc = 0x27BBB4u;
label_27bbb4:
    // 0x27bbb4: 0x10000003  b           . + 4 + (0x3 << 2)
label_27bbb8:
    if (ctx->pc == 0x27BBB8u) {
        ctx->pc = 0x27BBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BBB4u;
        // 0x27bbb8: 0xc66005a8  lwc1        $f0, 0x5A8($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BBBCu;
        goto label_27bbbc;
    }
    ctx->pc = 0x27BBB4u;
    {
        const bool branch_taken_0x27bbb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BBB4u;
        // 0x27bbb8: 0xc66005a8  lwc1        $f0, 0x5A8($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bbb4) {
            ctx->pc = 0x27BBC4u;
            goto label_27bbc4;
        }
    }
    ctx->pc = 0x27BBBCu;
label_27bbbc:
    // 0x27bbbc: 0xc0a4bd4  jal         func_292F50
label_27bbc0:
    if (ctx->pc == 0x27BBC0u) {
        ctx->pc = 0x27BBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BBBCu;
        // 0x27bbc0: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BBC4u;
        goto label_27bbc4;
    }
    ctx->pc = 0x27BBBCu;
    SET_GPR_U32(ctx, 31, 0x27BBC4u);
    ctx->pc = 0x27BBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BBBCu;
    // 0x27bbc0: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x27BBBCu, 0x27BBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BBC4u;
label_27bbc4:
    // 0x27bbc4: 0xe62005a8  swc1        $f0, 0x5A8($s1)
    ctx->pc = 0x27bbc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
label_27bbc8:
    // 0x27bbc8: 0xc62c05a8  lwc1        $f12, 0x5A8($s1)
    ctx->pc = 0x27bbc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_27bbcc:
    // 0x27bbcc: 0xc0560a2  jal         func_158288
label_27bbd0:
    if (ctx->pc == 0x27BBD0u) {
        ctx->pc = 0x27BBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BBCCu;
        // 0x27bbd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BBD4u;
        goto label_27bbd4;
    }
    ctx->pc = 0x27BBCCu;
    SET_GPR_U32(ctx, 31, 0x27BBD4u);
    ctx->pc = 0x27BBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BBCCu;
    // 0x27bbd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158288u, 0x27BBCCu, 0x27BBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BBD4u;
label_27bbd4:
    // 0x27bbd4: 0xc0b6dac  jal         func_2DB6B0
label_27bbd8:
    if (ctx->pc == 0x27BBD8u) {
        ctx->pc = 0x27BBDCu;
        goto label_27bbdc;
    }
    ctx->pc = 0x27BBD4u;
    SET_GPR_U32(ctx, 31, 0x27BBDCu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x27BBD4u, 0x27BBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BBDCu;
label_27bbdc:
    // 0x27bbdc: 0x8c4400f0  lw          $a0, 0xF0($v0)
    ctx->pc = 0x27bbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_27bbe0:
    // 0x27bbe0: 0xc07dfac  jal         func_1F7EB0
label_27bbe4:
    if (ctx->pc == 0x27BBE4u) {
        ctx->pc = 0x27BBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BBE0u;
        // 0x27bbe4: 0x8e2500f0  lw          $a1, 0xF0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BBE8u;
        goto label_27bbe8;
    }
    ctx->pc = 0x27BBE0u;
    SET_GPR_U32(ctx, 31, 0x27BBE8u);
    ctx->pc = 0x27BBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BBE0u;
    // 0x27bbe4: 0x8e2500f0  lw          $a1, 0xF0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x27BBE0u, 0x27BBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BBE8u;
label_27bbe8:
    // 0x27bbe8: 0xe6200618  swc1        $f0, 0x618($s1)
    ctx->pc = 0x27bbe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1560), bits); }
label_27bbec:
    // 0x27bbec: 0xc09ef76  jal         func_27BDD8
label_27bbf0:
    if (ctx->pc == 0x27BBF0u) {
        ctx->pc = 0x27BBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BBECu;
        // 0x27bbf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BBF4u;
        goto label_27bbf4;
    }
    ctx->pc = 0x27BBECu;
    SET_GPR_U32(ctx, 31, 0x27BBF4u);
    ctx->pc = 0x27BBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BBECu;
    // 0x27bbf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27BDD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BDD8u, 0x27BBECu, 0x27BBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BBF4u;
label_27bbf4:
    // 0x27bbf4: 0xc62115b4  lwc1        $f1, 0x15B4($s1)
    ctx->pc = 0x27bbf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27bbf8:
    // 0x27bbf8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x27bbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_27bbfc:
    // 0x27bbfc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27bbfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27bc00:
    // 0x27bc00: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x27bc00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
label_27bc04:
    // 0x27bc04: 0x8e231560  lw          $v1, 0x1560($s1)
    ctx->pc = 0x27bc04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5472)));
label_27bc08:
    // 0x27bc08: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x27bc08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27bc0c:
    // 0x27bc0c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x27bc0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_27bc10:
    // 0x27bc10: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_27bc14:
    if (ctx->pc == 0x27BC14u) {
        ctx->pc = 0x27BC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BC10u;
        // 0x27bc14: 0xae231560  sw          $v1, 0x1560($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5472), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BC18u;
        goto label_27bc18;
    }
    ctx->pc = 0x27BC10u;
    {
        const bool branch_taken_0x27bc10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27BC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BC10u;
        // 0x27bc14: 0xae231560  sw          $v1, 0x1560($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5472), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bc10) {
            ctx->pc = 0x27BC24u;
            goto label_27bc24;
        }
    }
    ctx->pc = 0x27BC18u;
label_27bc18:
    // 0x27bc18: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x27bc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27bc1c:
    // 0x27bc1c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x27bc1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27bc20:
    // 0x27bc20: 0xe62015b4  swc1        $f0, 0x15B4($s1)
    ctx->pc = 0x27bc20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5556), bits); }
label_27bc24:
    // 0x27bc24: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x27bc24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_27bc28:
    // 0x27bc28: 0x922302f4  lbu         $v1, 0x2F4($s1)
    ctx->pc = 0x27bc28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 756)));
label_27bc2c:
    // 0x27bc2c: 0x2446fe00  addiu       $a2, $v0, -0x200
    ctx->pc = 0x27bc2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966784));
label_27bc30:
    // 0x27bc30: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x27bc30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27bc34:
    // 0x27bc34: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x27bc34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_27bc38:
    // 0x27bc38: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x27bc38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_27bc3c:
    // 0x27bc3c: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x27bc3cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_27bc40:
    // 0x27bc40: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_27bc44:
    if (ctx->pc == 0x27BC44u) {
        ctx->pc = 0x27BC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BC40u;
        // 0x27bc44: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BC48u;
        goto label_27bc48;
    }
    ctx->pc = 0x27BC40u;
    {
        const bool branch_taken_0x27bc40 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x27BC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BC40u;
        // 0x27bc44: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bc40) {
            ctx->pc = 0x27BC6Cu;
            goto label_27bc6c;
        }
    }
    ctx->pc = 0x27BC48u;
label_27bc48:
    // 0x27bc48: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x27bc48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_27bc4c:
    // 0x27bc4c: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x27bc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_27bc50:
    // 0x27bc50: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x27bc50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_27bc54:
    // 0x27bc54: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x27bc54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_27bc58:
    // 0x27bc58: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27bc58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_27bc5c:
    // 0x27bc5c: 0xdc70fff8  ld          $s0, -0x8($v1)
    ctx->pc = 0x27bc5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_27bc60:
    // 0x27bc60: 0x10303f  dsra32      $a2, $s0, 0
    ctx->pc = 0x27bc60u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 16) >> (32 + 0));
label_27bc64:
    // 0x27bc64: 0x10000004  b           . + 4 + (0x4 << 2)
label_27bc68:
    if (ctx->pc == 0x27BC68u) {
        ctx->pc = 0x27BC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BC64u;
        // 0x27bc68: 0x2503fe00  addiu       $v1, $t0, -0x200 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294966784));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BC6Cu;
        goto label_27bc6c;
    }
    ctx->pc = 0x27BC64u;
    {
        const bool branch_taken_0x27bc64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BC64u;
        // 0x27bc68: 0x2503fe00  addiu       $v1, $t0, -0x200 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294966784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bc64) {
            ctx->pc = 0x27BC78u;
            goto label_27bc78;
        }
    }
    ctx->pc = 0x27BC6Cu;
label_27bc6c:
    // 0x27bc6c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x27bc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_27bc70:
    // 0x27bc70: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x27bc70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_27bc74:
    // 0x27bc74: 0x2503fe00  addiu       $v1, $t0, -0x200
    ctx->pc = 0x27bc74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294966784));
label_27bc78:
    // 0x27bc78: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x27bc78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_27bc7c:
    // 0x27bc7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27bc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_27bc80:
    // 0x27bc80: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_27bc84:
    if (ctx->pc == 0x27BC84u) {
        ctx->pc = 0x27BC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BC80u;
        // 0x27bc84: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BC88u;
        goto label_27bc88;
    }
    ctx->pc = 0x27BC80u;
    {
        const bool branch_taken_0x27bc80 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x27BC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BC80u;
        // 0x27bc84: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bc80) {
            ctx->pc = 0x27BC9Cu;
            goto label_27bc9c;
        }
    }
    ctx->pc = 0x27BC88u;
label_27bc88:
    // 0x27bc88: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x27bc88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_27bc8c:
    // 0x27bc8c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x27bc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_27bc90:
    // 0x27bc90: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x27bc90u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_27bc94:
    // 0x27bc94: 0x10000002  b           . + 4 + (0x2 << 2)
label_27bc98:
    if (ctx->pc == 0x27BC98u) {
        ctx->pc = 0x27BC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BC94u;
        // 0x27bc98: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BC9Cu;
        goto label_27bc9c;
    }
    ctx->pc = 0x27BC94u;
    {
        const bool branch_taken_0x27bc94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BC94u;
        // 0x27bc98: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bc94) {
            ctx->pc = 0x27BCA0u;
            goto label_27bca0;
        }
    }
    ctx->pc = 0x27BC9Cu;
label_27bc9c:
    // 0x27bc9c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x27bc9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_27bca0:
    // 0x27bca0: 0xc0f809  jalr        $a2
label_27bca4:
    if (ctx->pc == 0x27BCA4u) {
        ctx->pc = 0x27BCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BCA0u;
        // 0x27bca4: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BCA8u;
        goto label_27bca8;
    }
    ctx->pc = 0x27BCA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x27BCA8u);
        ctx->pc = 0x27BCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BCA0u;
        // 0x27bca4: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27BCA0u, 0x27BCA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27BCA8u;
label_27bca8:
    // 0x27bca8: 0xc053ed2  jal         func_14FB48
label_27bcac:
    if (ctx->pc == 0x27BCACu) {
        ctx->pc = 0x27BCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BCA8u;
        // 0x27bcac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BCB0u;
        goto label_27bcb0;
    }
    ctx->pc = 0x27BCA8u;
    SET_GPR_U32(ctx, 31, 0x27BCB0u);
    ctx->pc = 0x27BCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BCA8u;
    // 0x27bcac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FB48u, 0x27BCA8u, 0x27BCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BCB0u;
label_27bcb0:
    // 0x27bcb0: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x27bcb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_27bcb4:
    // 0x27bcb4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_27bcb8:
    if (ctx->pc == 0x27BCB8u) {
        ctx->pc = 0x27BCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BCB4u;
        // 0x27bcb8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BCBCu;
        goto label_27bcbc;
    }
    ctx->pc = 0x27BCB4u;
    {
        const bool branch_taken_0x27bcb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BCB4u;
        // 0x27bcb8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bcb4) {
            ctx->pc = 0x27BCC8u;
            goto label_27bcc8;
        }
    }
    ctx->pc = 0x27BCBCu;
label_27bcbc:
    // 0x27bcbc: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x27bcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
label_27bcc0:
    // 0x27bcc0: 0x10000002  b           . + 4 + (0x2 << 2)
label_27bcc4:
    if (ctx->pc == 0x27BCC4u) {
        ctx->pc = 0x27BCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BCC0u;
        // 0x27bcc4: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BCC8u;
        goto label_27bcc8;
    }
    ctx->pc = 0x27BCC0u;
    {
        const bool branch_taken_0x27bcc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BCC0u;
        // 0x27bcc4: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bcc0) {
            ctx->pc = 0x27BCCCu;
            goto label_27bccc;
        }
    }
    ctx->pc = 0x27BCC8u;
label_27bcc8:
    // 0x27bcc8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x27bcc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27bccc:
    // 0x27bccc: 0x12400021  beqz        $s2, . + 4 + (0x21 << 2)
label_27bcd0:
    if (ctx->pc == 0x27BCD0u) {
        ctx->pc = 0x27BCD4u;
        goto label_27bcd4;
    }
    ctx->pc = 0x27BCCCu;
    {
        const bool branch_taken_0x27bccc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x27bccc) {
            ctx->pc = 0x27BD54u;
            goto label_27bd54;
        }
    }
    ctx->pc = 0x27BCD4u;
label_27bcd4:
    // 0x27bcd4: 0x1260001f  beqz        $s3, . + 4 + (0x1F << 2)
label_27bcd8:
    if (ctx->pc == 0x27BCD8u) {
        ctx->pc = 0x27BCDCu;
        goto label_27bcdc;
    }
    ctx->pc = 0x27BCD4u;
    {
        const bool branch_taken_0x27bcd4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x27bcd4) {
            ctx->pc = 0x27BD54u;
            goto label_27bd54;
        }
    }
    ctx->pc = 0x27BCDCu;
label_27bcdc:
    // 0x27bcdc: 0x8e221560  lw          $v0, 0x1560($s1)
    ctx->pc = 0x27bcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5472)));
label_27bce0:
    // 0x27bce0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x27bce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_27bce4:
    // 0x27bce4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_27bce8:
    if (ctx->pc == 0x27BCE8u) {
        ctx->pc = 0x27BCECu;
        goto label_27bcec;
    }
    ctx->pc = 0x27BCE4u;
    {
        const bool branch_taken_0x27bce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27bce4) {
            ctx->pc = 0x27BD18u;
            goto label_27bd18;
        }
    }
    ctx->pc = 0x27BCECu;
label_27bcec:
    // 0x27bcec: 0xc0b6dac  jal         func_2DB6B0
label_27bcf0:
    if (ctx->pc == 0x27BCF0u) {
        ctx->pc = 0x27BCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BCECu;
        // 0x27bcf0: 0x8e7000f0  lw          $s0, 0xF0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BCF4u;
        goto label_27bcf4;
    }
    ctx->pc = 0x27BCECu;
    SET_GPR_U32(ctx, 31, 0x27BCF4u);
    ctx->pc = 0x27BCF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BCECu;
    // 0x27bcf0: 0x8e7000f0  lw          $s0, 0xF0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x27BCECu, 0x27BCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BCF4u;
label_27bcf4:
    // 0x27bcf4: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x27bcf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_27bcf8:
    // 0x27bcf8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x27bcf8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_27bcfc:
    // 0x27bcfc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x27bcfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_27bd00:
    // 0x27bd00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27bd00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27bd04:
    // 0x27bd04: 0xc66c0104  lwc1        $f12, 0x104($s3)
    ctx->pc = 0x27bd04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_27bd08:
    // 0x27bd08: 0xc0b680e  jal         func_2DA038
label_27bd0c:
    if (ctx->pc == 0x27BD0Cu) {
        ctx->pc = 0x27BD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BD08u;
        // 0x27bd0c: 0x8c4500f0  lw          $a1, 0xF0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BD10u;
        goto label_27bd10;
    }
    ctx->pc = 0x27BD08u;
    SET_GPR_U32(ctx, 31, 0x27BD10u);
    ctx->pc = 0x27BD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BD08u;
    // 0x27bd0c: 0x8c4500f0  lw          $a1, 0xF0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x27BD08u, 0x27BD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BD10u;
label_27bd10:
    // 0x27bd10: 0x10000002  b           . + 4 + (0x2 << 2)
label_27bd14:
    if (ctx->pc == 0x27BD14u) {
        ctx->pc = 0x27BD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BD10u;
        // 0x27bd14: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BD18u;
        goto label_27bd18;
    }
    ctx->pc = 0x27BD10u;
    {
        const bool branch_taken_0x27bd10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BD10u;
        // 0x27bd14: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bd10) {
            ctx->pc = 0x27BD1Cu;
            goto label_27bd1c;
        }
    }
    ctx->pc = 0x27BD18u;
label_27bd18:
    // 0x27bd18: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x27bd18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_27bd1c:
    // 0x27bd1c: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x27bd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27bd20:
    // 0x27bd20: 0x3c013d49  lui         $at, 0x3D49
    ctx->pc = 0x27bd20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15689 << 16));
label_27bd24:
    // 0x27bd24: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x27bd24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_27bd28:
    // 0x27bd28: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x27bd28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_27bd2c:
    // 0x27bd2c: 0xc62c15d4  lwc1        $f12, 0x15D4($s1)
    ctx->pc = 0x27bd2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_27bd30:
    // 0x27bd30: 0xc0b687e  jal         func_2DA1F8
label_27bd34:
    if (ctx->pc == 0x27BD34u) {
        ctx->pc = 0x27BD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BD30u;
        // 0x27bd34: 0x460e0382  mul.s       $f14, $f0, $f14 (Delay Slot)
        ctx->f[14] = FPU_MUL_S(ctx->f[0], ctx->f[14]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BD38u;
        goto label_27bd38;
    }
    ctx->pc = 0x27BD30u;
    SET_GPR_U32(ctx, 31, 0x27BD38u);
    ctx->pc = 0x27BD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BD30u;
    // 0x27bd34: 0x460e0382  mul.s       $f14, $f0, $f14 (Delay Slot)
    ctx->f[14] = FPU_MUL_S(ctx->f[0], ctx->f[14]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA1F8u, 0x27BD30u, 0x27BD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BD38u;
label_27bd38:
    // 0x27bd38: 0xc62115d4  lwc1        $f1, 0x15D4($s1)
    ctx->pc = 0x27bd38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27bd3c:
    // 0x27bd3c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x27bd3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_27bd40:
    // 0x27bd40: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x27bd40u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
label_27bd44:
    // 0x27bd44: 0xc07df52  jal         func_1F7D48
label_27bd48:
    if (ctx->pc == 0x27BD48u) {
        ctx->pc = 0x27BD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BD44u;
        // 0x27bd48: 0xe62115d4  swc1        $f1, 0x15D4($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5588), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BD4Cu;
        goto label_27bd4c;
    }
    ctx->pc = 0x27BD44u;
    SET_GPR_U32(ctx, 31, 0x27BD4Cu);
    ctx->pc = 0x27BD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BD44u;
    // 0x27bd48: 0xe62115d4  swc1        $f1, 0x15D4($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5588), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x27BD44u, 0x27BD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BD4Cu;
label_27bd4c:
    // 0x27bd4c: 0xe62015d4  swc1        $f0, 0x15D4($s1)
    ctx->pc = 0x27bd4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5588), bits); }
label_27bd50:
    // 0x27bd50: 0xe6400104  swc1        $f0, 0x104($s2)
    ctx->pc = 0x27bd50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
label_27bd54:
    // 0x27bd54: 0xc09f4c0  jal         func_27D300
label_27bd58:
    if (ctx->pc == 0x27BD58u) {
        ctx->pc = 0x27BD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BD54u;
        // 0x27bd58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BD5Cu;
        goto label_27bd5c;
    }
    ctx->pc = 0x27BD54u;
    SET_GPR_U32(ctx, 31, 0x27BD5Cu);
    ctx->pc = 0x27BD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BD54u;
    // 0x27bd58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D300u, 0x27BD54u, 0x27BD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BD5Cu;
label_27bd5c:
    // 0x27bd5c: 0xc0527ae  jal         func_149EB8
label_27bd60:
    if (ctx->pc == 0x27BD60u) {
        ctx->pc = 0x27BD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BD5Cu;
        // 0x27bd60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BD64u;
        goto label_27bd64;
    }
    ctx->pc = 0x27BD5Cu;
    SET_GPR_U32(ctx, 31, 0x27BD64u);
    ctx->pc = 0x27BD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BD5Cu;
    // 0x27bd60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x27BD5Cu, 0x27BD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BD64u;
label_27bd64:
    // 0x27bd64: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27bd64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27bd68:
    // 0x27bd68: 0xc054a88  jal         func_152A20
label_27bd6c:
    if (ctx->pc == 0x27BD6Cu) {
        ctx->pc = 0x27BD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BD68u;
        // 0x27bd6c: 0x26240448  addiu       $a0, $s1, 0x448 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BD70u;
        goto label_27bd70;
    }
    ctx->pc = 0x27BD68u;
    SET_GPR_U32(ctx, 31, 0x27BD70u);
    ctx->pc = 0x27BD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BD68u;
    // 0x27bd6c: 0x26240448  addiu       $a0, $s1, 0x448 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152A20u, 0x27BD68u, 0x27BD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BD70u;
label_27bd70:
    // 0x27bd70: 0xc05280e  jal         func_14A038
label_27bd74:
    if (ctx->pc == 0x27BD74u) {
        ctx->pc = 0x27BD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BD70u;
        // 0x27bd74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BD78u;
        goto label_27bd78;
    }
    ctx->pc = 0x27BD70u;
    SET_GPR_U32(ctx, 31, 0x27BD78u);
    ctx->pc = 0x27BD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BD70u;
    // 0x27bd74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A038u, 0x27BD70u, 0x27BD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BD78u;
label_27bd78:
    // 0x27bd78: 0xc09f500  jal         func_27D400
label_27bd7c:
    if (ctx->pc == 0x27BD7Cu) {
        ctx->pc = 0x27BD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BD78u;
        // 0x27bd7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BD80u;
        goto label_27bd80;
    }
    ctx->pc = 0x27BD78u;
    SET_GPR_U32(ctx, 31, 0x27BD80u);
    ctx->pc = 0x27BD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BD78u;
    // 0x27bd7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D400u, 0x27BD78u, 0x27BD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BD80u;
label_27bd80:
    // 0x27bd80: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x27bd80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_27bd84:
    // 0x27bd84: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27bd84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27bd88:
    // 0x27bd88: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x27bd88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
label_27bd8c:
    // 0x27bd8c: 0xc04d476  jal         func_1351D8
label_27bd90:
    if (ctx->pc == 0x27BD90u) {
        ctx->pc = 0x27BD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BD8Cu;
        // 0x27bd90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BD94u;
        goto label_27bd94;
    }
    ctx->pc = 0x27BD8Cu;
    SET_GPR_U32(ctx, 31, 0x27BD94u);
    ctx->pc = 0x27BD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BD8Cu;
    // 0x27bd90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x27BD8Cu, 0x27BD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BD94u;
label_27bd94:
    // 0x27bd94: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x27bd94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_27bd98:
    // 0x27bd98: 0x26230490  addiu       $v1, $s1, 0x490
    ctx->pc = 0x27bd98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1168));
label_27bd9c:
    // 0x27bd9c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_27bda0:
    if (ctx->pc == 0x27BDA0u) {
        ctx->pc = 0x27BDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BD9Cu;
        // 0x27bda0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BDA4u;
        goto label_27bda4;
    }
    ctx->pc = 0x27BD9Cu;
    {
        const bool branch_taken_0x27bd9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27BDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BD9Cu;
        // 0x27bda0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bd9c) {
            ctx->pc = 0x27BDC0u;
            goto label_27bdc0;
        }
    }
    ctx->pc = 0x27BDA4u;
label_27bda4:
    // 0x27bda4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x27bda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27bda8:
    // 0x27bda8: 0xe6200490  swc1        $f0, 0x490($s1)
    ctx->pc = 0x27bda8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1168), bits); }
label_27bdac:
    // 0x27bdac: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x27bdacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27bdb0:
    // 0x27bdb0: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x27bdb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_27bdb4:
    // 0x27bdb4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x27bdb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27bdb8:
    // 0x27bdb8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x27bdb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_27bdbc:
    // 0x27bdbc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x27bdbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_27bdc0:
    // 0x27bdc0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x27bdc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_27bdc4:
    // 0x27bdc4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x27bdc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_27bdc8:
    // 0x27bdc8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x27bdc8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27bdcc:
    // 0x27bdcc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27bdccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_27bdd0:
    // 0x27bdd0: 0x3e00008  jr          $ra
label_27bdd4:
    if (ctx->pc == 0x27BDD4u) {
        ctx->pc = 0x27BDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BDD0u;
        // 0x27bdd4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BDD8u;
        goto label_fallthrough_0x27bdd0;
    }
    ctx->pc = 0x27BDD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27BDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BDD0u;
        // 0x27bdd4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27BDD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x27bdd0:
    ctx->pc = 0x27BDD8u;
}
