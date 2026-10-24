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

// Function: func_002FBFB0
// Address: 0x2fbfb0 - 0x2fc1a0
void func_002FBFB0_0x2fbfb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002FBFB0_0x2fbfb0");
#endif

    switch (ctx->pc) {
        case 0x2fbfb0u: goto label_2fbfb0;
        case 0x2fbfb4u: goto label_2fbfb4;
        case 0x2fbfb8u: goto label_2fbfb8;
        case 0x2fbfbcu: goto label_2fbfbc;
        case 0x2fbfc0u: goto label_2fbfc0;
        case 0x2fbfc4u: goto label_2fbfc4;
        case 0x2fbfc8u: goto label_2fbfc8;
        case 0x2fbfccu: goto label_2fbfcc;
        case 0x2fbfd0u: goto label_2fbfd0;
        case 0x2fbfd4u: goto label_2fbfd4;
        case 0x2fbfd8u: goto label_2fbfd8;
        case 0x2fbfdcu: goto label_2fbfdc;
        case 0x2fbfe0u: goto label_2fbfe0;
        case 0x2fbfe4u: goto label_2fbfe4;
        case 0x2fbfe8u: goto label_2fbfe8;
        case 0x2fbfecu: goto label_2fbfec;
        case 0x2fbff0u: goto label_2fbff0;
        case 0x2fbff4u: goto label_2fbff4;
        case 0x2fbff8u: goto label_2fbff8;
        case 0x2fbffcu: goto label_2fbffc;
        case 0x2fc000u: goto label_2fc000;
        case 0x2fc004u: goto label_2fc004;
        case 0x2fc008u: goto label_2fc008;
        case 0x2fc00cu: goto label_2fc00c;
        case 0x2fc010u: goto label_2fc010;
        case 0x2fc014u: goto label_2fc014;
        case 0x2fc018u: goto label_2fc018;
        case 0x2fc01cu: goto label_2fc01c;
        case 0x2fc020u: goto label_2fc020;
        case 0x2fc024u: goto label_2fc024;
        case 0x2fc028u: goto label_2fc028;
        case 0x2fc02cu: goto label_2fc02c;
        case 0x2fc030u: goto label_2fc030;
        case 0x2fc034u: goto label_2fc034;
        case 0x2fc038u: goto label_2fc038;
        case 0x2fc03cu: goto label_2fc03c;
        case 0x2fc040u: goto label_2fc040;
        case 0x2fc044u: goto label_2fc044;
        case 0x2fc048u: goto label_2fc048;
        case 0x2fc04cu: goto label_2fc04c;
        case 0x2fc050u: goto label_2fc050;
        case 0x2fc054u: goto label_2fc054;
        case 0x2fc058u: goto label_2fc058;
        case 0x2fc05cu: goto label_2fc05c;
        case 0x2fc060u: goto label_2fc060;
        case 0x2fc064u: goto label_2fc064;
        case 0x2fc068u: goto label_2fc068;
        case 0x2fc06cu: goto label_2fc06c;
        case 0x2fc070u: goto label_2fc070;
        case 0x2fc074u: goto label_2fc074;
        case 0x2fc078u: goto label_2fc078;
        case 0x2fc07cu: goto label_2fc07c;
        case 0x2fc080u: goto label_2fc080;
        case 0x2fc084u: goto label_2fc084;
        case 0x2fc088u: goto label_2fc088;
        case 0x2fc08cu: goto label_2fc08c;
        case 0x2fc090u: goto label_2fc090;
        case 0x2fc094u: goto label_2fc094;
        case 0x2fc098u: goto label_2fc098;
        case 0x2fc09cu: goto label_2fc09c;
        case 0x2fc0a0u: goto label_2fc0a0;
        case 0x2fc0a4u: goto label_2fc0a4;
        case 0x2fc0a8u: goto label_2fc0a8;
        case 0x2fc0acu: goto label_2fc0ac;
        case 0x2fc0b0u: goto label_2fc0b0;
        case 0x2fc0b4u: goto label_2fc0b4;
        case 0x2fc0b8u: goto label_2fc0b8;
        case 0x2fc0bcu: goto label_2fc0bc;
        case 0x2fc0c0u: goto label_2fc0c0;
        case 0x2fc0c4u: goto label_2fc0c4;
        case 0x2fc0c8u: goto label_2fc0c8;
        case 0x2fc0ccu: goto label_2fc0cc;
        case 0x2fc0d0u: goto label_2fc0d0;
        case 0x2fc0d4u: goto label_2fc0d4;
        case 0x2fc0d8u: goto label_2fc0d8;
        case 0x2fc0dcu: goto label_2fc0dc;
        case 0x2fc0e0u: goto label_2fc0e0;
        case 0x2fc0e4u: goto label_2fc0e4;
        case 0x2fc0e8u: goto label_2fc0e8;
        case 0x2fc0ecu: goto label_2fc0ec;
        case 0x2fc0f0u: goto label_2fc0f0;
        case 0x2fc0f4u: goto label_2fc0f4;
        case 0x2fc0f8u: goto label_2fc0f8;
        case 0x2fc0fcu: goto label_2fc0fc;
        case 0x2fc100u: goto label_2fc100;
        case 0x2fc104u: goto label_2fc104;
        case 0x2fc108u: goto label_2fc108;
        case 0x2fc10cu: goto label_2fc10c;
        case 0x2fc110u: goto label_2fc110;
        case 0x2fc114u: goto label_2fc114;
        case 0x2fc118u: goto label_2fc118;
        case 0x2fc11cu: goto label_2fc11c;
        case 0x2fc120u: goto label_2fc120;
        case 0x2fc124u: goto label_2fc124;
        case 0x2fc128u: goto label_2fc128;
        case 0x2fc12cu: goto label_2fc12c;
        case 0x2fc130u: goto label_2fc130;
        case 0x2fc134u: goto label_2fc134;
        case 0x2fc138u: goto label_2fc138;
        case 0x2fc13cu: goto label_2fc13c;
        case 0x2fc140u: goto label_2fc140;
        case 0x2fc144u: goto label_2fc144;
        case 0x2fc148u: goto label_2fc148;
        case 0x2fc14cu: goto label_2fc14c;
        case 0x2fc150u: goto label_2fc150;
        case 0x2fc154u: goto label_2fc154;
        case 0x2fc158u: goto label_2fc158;
        case 0x2fc15cu: goto label_2fc15c;
        case 0x2fc160u: goto label_2fc160;
        case 0x2fc164u: goto label_2fc164;
        case 0x2fc168u: goto label_2fc168;
        case 0x2fc16cu: goto label_2fc16c;
        case 0x2fc170u: goto label_2fc170;
        case 0x2fc174u: goto label_2fc174;
        case 0x2fc178u: goto label_2fc178;
        case 0x2fc17cu: goto label_2fc17c;
        case 0x2fc180u: goto label_2fc180;
        case 0x2fc184u: goto label_2fc184;
        case 0x2fc188u: goto label_2fc188;
        case 0x2fc18cu: goto label_2fc18c;
        case 0x2fc190u: goto label_2fc190;
        case 0x2fc194u: goto label_2fc194;
        case 0x2fc198u: goto label_2fc198;
        case 0x2fc19cu: goto label_2fc19c;
        default: break;
    }

    ctx->pc = 0x2fbfb0u;

label_2fbfb0:
    // 0x2fbfb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fbfb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2fbfb4:
    // 0x2fbfb4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2fbfb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2fbfb8:
    // 0x2fbfb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fbfb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2fbfbc:
    // 0x2fbfbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fbfbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fbfc0:
    // 0x2fbfc0: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x2fbfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_2fbfc4:
    // 0x2fbfc4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2fbfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2fbfc8:
    // 0x2fbfc8: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x2fbfc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_2fbfcc:
    // 0x2fbfcc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2fbfd0:
    if (ctx->pc == 0x2FBFD0u) {
        ctx->pc = 0x2FBFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBFCCu;
        // 0x2fbfd0: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FBFD4u;
        goto label_2fbfd4;
    }
    ctx->pc = 0x2FBFCCu;
    {
        const bool branch_taken_0x2fbfcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FBFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBFCCu;
        // 0x2fbfd0: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbfcc) {
            ctx->pc = 0x2FBFE4u;
            goto label_2fbfe4;
        }
    }
    ctx->pc = 0x2FBFD4u;
label_2fbfd4:
    // 0x2fbfd4: 0x9202011d  lbu         $v0, 0x11D($s0)
    ctx->pc = 0x2fbfd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 285)));
label_2fbfd8:
    // 0x2fbfd8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2fbfd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2fbfdc:
    // 0x2fbfdc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2fbfe0:
    if (ctx->pc == 0x2FBFE0u) {
        ctx->pc = 0x2FBFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBFDCu;
        // 0x2fbfe0: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FBFE4u;
        goto label_2fbfe4;
    }
    ctx->pc = 0x2FBFDCu;
    {
        const bool branch_taken_0x2fbfdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FBFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBFDCu;
        // 0x2fbfe0: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbfdc) {
            ctx->pc = 0x2FBFF8u;
            goto label_2fbff8;
        }
    }
    ctx->pc = 0x2FBFE4u;
label_2fbfe4:
    // 0x2fbfe4: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x2fbfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
label_2fbfe8:
    // 0x2fbfe8: 0x8c437a84  lw          $v1, 0x7A84($v0)
    ctx->pc = 0x2fbfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31364)));
label_2fbfec:
    // 0x2fbfec: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2fbfecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_2fbff0:
    // 0x2fbff0: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_2fbff4:
    if (ctx->pc == 0x2FBFF4u) {
        ctx->pc = 0x2FBFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBFF0u;
        // 0x2fbff4: 0xc6000228  lwc1        $f0, 0x228($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FBFF8u;
        goto label_2fbff8;
    }
    ctx->pc = 0x2FBFF0u;
    {
        const bool branch_taken_0x2fbff0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fbff0) {
            ctx->pc = 0x2FBFF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FBFF0u;
            // 0x2fbff4: 0xc6000228  lwc1        $f0, 0x228($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FC008u;
            goto label_2fc008;
        }
    }
    ctx->pc = 0x2FBFF8u;
label_2fbff8:
    // 0x2fbff8: 0xc0be8d4  jal         func_2FA350
label_2fbffc:
    if (ctx->pc == 0x2FBFFCu) {
        ctx->pc = 0x2FBFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBFF8u;
        // 0x2fbffc: 0x26040228  addiu       $a0, $s0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC000u;
        goto label_2fc000;
    }
    ctx->pc = 0x2FBFF8u;
    SET_GPR_U32(ctx, 31, 0x2FC000u);
    ctx->pc = 0x2FBFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBFF8u;
    // 0x2fbffc: 0x26040228  addiu       $a0, $s0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA350u, 0x2FBFF8u, 0x2FC000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC000u;
label_2fc000:
    // 0x2fc000: 0x10000007  b           . + 4 + (0x7 << 2)
label_2fc004:
    if (ctx->pc == 0x2FC004u) {
        ctx->pc = 0x2FC004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC000u;
        // 0x2fc004: 0xc6000228  lwc1        $f0, 0x228($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC008u;
        goto label_2fc008;
    }
    ctx->pc = 0x2FC000u;
    {
        const bool branch_taken_0x2fc000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC000u;
        // 0x2fc004: 0xc6000228  lwc1        $f0, 0x228($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc000) {
            ctx->pc = 0x2FC020u;
            goto label_2fc020;
        }
    }
    ctx->pc = 0x2FC008u;
label_2fc008:
    // 0x2fc008: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2fc008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2fc00c:
    // 0x2fc00c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2fc00cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2fc010:
    // 0x2fc010: 0x0  nop
    ctx->pc = 0x2fc010u;
    // NOP
label_2fc014:
    // 0x2fc014: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fc014u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2fc018:
    // 0x2fc018: 0xe6000228  swc1        $f0, 0x228($s0)
    ctx->pc = 0x2fc018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 552), bits); }
label_2fc01c:
    // 0x2fc01c: 0xc6000228  lwc1        $f0, 0x228($s0)
    ctx->pc = 0x2fc01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2fc020:
    // 0x2fc020: 0x9604022c  lhu         $a0, 0x22C($s0)
    ctx->pc = 0x2fc020u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 556)));
label_2fc024:
    // 0x2fc024: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2fc024u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2fc028:
    // 0x2fc028: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2fc028u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2fc02c:
    // 0x2fc02c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2fc02cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fc030:
    // 0x2fc030: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_2fc034:
    if (ctx->pc == 0x2FC034u) {
        ctx->pc = 0x2FC034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC030u;
        // 0x2fc034: 0xa6020224  sh          $v0, 0x224($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 548), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC038u;
        goto label_2fc038;
    }
    ctx->pc = 0x2FC030u;
    {
        const bool branch_taken_0x2fc030 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC030u;
        // 0x2fc034: 0xa6020224  sh          $v0, 0x224($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 548), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc030) {
            ctx->pc = 0x2FC058u;
            goto label_2fc058;
        }
    }
    ctx->pc = 0x2FC038u;
label_2fc038:
    // 0x2fc038: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x2fc038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_2fc03c:
    // 0x2fc03c: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2fc03cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2fc040:
    // 0x2fc040: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2fc044:
    if (ctx->pc == 0x2FC044u) {
        ctx->pc = 0x2FC048u;
        goto label_2fc048;
    }
    ctx->pc = 0x2FC040u;
    {
        const bool branch_taken_0x2fc040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fc040) {
            ctx->pc = 0x2FC058u;
            goto label_2fc058;
        }
    }
    ctx->pc = 0x2FC048u;
label_2fc048:
    // 0x2fc048: 0xc0bef94  jal         func_2FBE50
label_2fc04c:
    if (ctx->pc == 0x2FC04Cu) {
        ctx->pc = 0x2FC04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC048u;
        // 0x2fc04c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC050u;
        goto label_2fc050;
    }
    ctx->pc = 0x2FC048u;
    SET_GPR_U32(ctx, 31, 0x2FC050u);
    ctx->pc = 0x2FC04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC048u;
    // 0x2fc04c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBE50u, 0x2FC048u, 0x2FC050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC050u;
label_2fc050:
    // 0x2fc050: 0x10000050  b           . + 4 + (0x50 << 2)
label_2fc054:
    if (ctx->pc == 0x2FC054u) {
        ctx->pc = 0x2FC054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC050u;
        // 0x2fc054: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC058u;
        goto label_2fc058;
    }
    ctx->pc = 0x2FC050u;
    {
        const bool branch_taken_0x2fc050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC050u;
        // 0x2fc054: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc050) {
            ctx->pc = 0x2FC194u;
            goto label_2fc194;
        }
    }
    ctx->pc = 0x2FC058u;
label_2fc058:
    // 0x2fc058: 0xc0bf2b2  jal         func_2FCAC8
label_2fc05c:
    if (ctx->pc == 0x2FC05Cu) {
        ctx->pc = 0x2FC05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC058u;
        // 0x2fc05c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC060u;
        goto label_2fc060;
    }
    ctx->pc = 0x2FC058u;
    SET_GPR_U32(ctx, 31, 0x2FC060u);
    ctx->pc = 0x2FC05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC058u;
    // 0x2fc05c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCAC8u, 0x2FC058u, 0x2FC060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC060u;
label_2fc060:
    // 0x2fc060: 0x5440004c  bnel        $v0, $zero, . + 4 + (0x4C << 2)
label_2fc064:
    if (ctx->pc == 0x2FC064u) {
        ctx->pc = 0x2FC064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC060u;
        // 0x2fc064: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC068u;
        goto label_2fc068;
    }
    ctx->pc = 0x2FC060u;
    {
        const bool branch_taken_0x2fc060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fc060) {
            ctx->pc = 0x2FC064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FC060u;
            // 0x2fc064: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FC194u;
            goto label_2fc194;
        }
    }
    ctx->pc = 0x2FC068u;
label_2fc068:
    // 0x2fc068: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x2fc068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_2fc06c:
    // 0x2fc06c: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x2fc06cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_2fc070:
    // 0x2fc070: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x2fc070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_2fc074:
    // 0x2fc074: 0x40f809  jalr        $v0
label_2fc078:
    if (ctx->pc == 0x2FC078u) {
        ctx->pc = 0x2FC078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC074u;
        // 0x2fc078: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC07Cu;
        goto label_2fc07c;
    }
    ctx->pc = 0x2FC074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FC07Cu);
        ctx->pc = 0x2FC078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC074u;
        // 0x2fc078: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC074u, 0x2FC07Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FC07Cu;
label_2fc07c:
    // 0x2fc07c: 0x54400045  bnel        $v0, $zero, . + 4 + (0x45 << 2)
label_2fc080:
    if (ctx->pc == 0x2FC080u) {
        ctx->pc = 0x2FC080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC07Cu;
        // 0x2fc080: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC084u;
        goto label_2fc084;
    }
    ctx->pc = 0x2FC07Cu;
    {
        const bool branch_taken_0x2fc07c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fc07c) {
            ctx->pc = 0x2FC080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FC07Cu;
            // 0x2fc080: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FC194u;
            goto label_2fc194;
        }
    }
    ctx->pc = 0x2FC084u;
label_2fc084:
    // 0x2fc084: 0xc0bf068  jal         func_2FC1A0
label_2fc088:
    if (ctx->pc == 0x2FC088u) {
        ctx->pc = 0x2FC088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC084u;
        // 0x2fc088: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC08Cu;
        goto label_2fc08c;
    }
    ctx->pc = 0x2FC084u;
    SET_GPR_U32(ctx, 31, 0x2FC08Cu);
    ctx->pc = 0x2FC088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC084u;
    // 0x2fc088: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC1A0u, 0x2FC084u, 0x2FC08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC08Cu;
label_2fc08c:
    // 0x2fc08c: 0x54400041  bnel        $v0, $zero, . + 4 + (0x41 << 2)
label_2fc090:
    if (ctx->pc == 0x2FC090u) {
        ctx->pc = 0x2FC090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC08Cu;
        // 0x2fc090: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC094u;
        goto label_2fc094;
    }
    ctx->pc = 0x2FC08Cu;
    {
        const bool branch_taken_0x2fc08c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fc08c) {
            ctx->pc = 0x2FC090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FC08Cu;
            // 0x2fc090: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FC194u;
            goto label_2fc194;
        }
    }
    ctx->pc = 0x2FC094u;
label_2fc094:
    // 0x2fc094: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x2fc094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_2fc098:
    // 0x2fc098: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x2fc098u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_2fc09c:
    // 0x2fc09c: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x2fc09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_2fc0a0:
    // 0x2fc0a0: 0x60f809  jalr        $v1
label_2fc0a4:
    if (ctx->pc == 0x2FC0A4u) {
        ctx->pc = 0x2FC0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC0A0u;
        // 0x2fc0a4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC0A8u;
        goto label_2fc0a8;
    }
    ctx->pc = 0x2FC0A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2FC0A8u);
        ctx->pc = 0x2FC0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC0A0u;
        // 0x2fc0a4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC0A0u, 0x2FC0A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FC0A8u;
label_2fc0a8:
    // 0x2fc0a8: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x2fc0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_2fc0ac:
    // 0x2fc0ac: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x2fc0acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_2fc0b0:
    // 0x2fc0b0: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x2fc0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_2fc0b4:
    // 0x2fc0b4: 0x60f809  jalr        $v1
label_2fc0b8:
    if (ctx->pc == 0x2FC0B8u) {
        ctx->pc = 0x2FC0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC0B4u;
        // 0x2fc0b8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC0BCu;
        goto label_2fc0bc;
    }
    ctx->pc = 0x2FC0B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2FC0BCu);
        ctx->pc = 0x2FC0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC0B4u;
        // 0x2fc0b8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC0B4u, 0x2FC0BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FC0BCu;
label_2fc0bc:
    // 0x2fc0bc: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x2fc0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_2fc0c0:
    // 0x2fc0c0: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x2fc0c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_2fc0c4:
    // 0x2fc0c4: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x2fc0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_2fc0c8:
    // 0x2fc0c8: 0x60f809  jalr        $v1
label_2fc0cc:
    if (ctx->pc == 0x2FC0CCu) {
        ctx->pc = 0x2FC0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC0C8u;
        // 0x2fc0cc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC0D0u;
        goto label_2fc0d0;
    }
    ctx->pc = 0x2FC0C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2FC0D0u);
        ctx->pc = 0x2FC0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC0C8u;
        // 0x2fc0cc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC0C8u, 0x2FC0D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FC0D0u;
label_2fc0d0:
    // 0x2fc0d0: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x2fc0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_2fc0d4:
    // 0x2fc0d4: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x2fc0d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_2fc0d8:
    // 0x2fc0d8: 0x8c450074  lw          $a1, 0x74($v0)
    ctx->pc = 0x2fc0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_2fc0dc:
    // 0x2fc0dc: 0xa0f809  jalr        $a1
label_2fc0e0:
    if (ctx->pc == 0x2FC0E0u) {
        ctx->pc = 0x2FC0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC0DCu;
        // 0x2fc0e0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC0E4u;
        goto label_2fc0e4;
    }
    ctx->pc = 0x2FC0DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2FC0E4u);
        ctx->pc = 0x2FC0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC0DCu;
        // 0x2fc0e0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC0DCu, 0x2FC0E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FC0E4u;
label_2fc0e4:
    // 0x2fc0e4: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x2fc0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_2fc0e8:
    // 0x2fc0e8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2fc0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2fc0ec:
    // 0x2fc0ec: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x2fc0ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_2fc0f0:
    // 0x2fc0f0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2fc0f4:
    if (ctx->pc == 0x2FC0F4u) {
        ctx->pc = 0x2FC0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC0F0u;
        // 0x2fc0f4: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC0F8u;
        goto label_2fc0f8;
    }
    ctx->pc = 0x2FC0F0u;
    {
        const bool branch_taken_0x2fc0f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FC0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC0F0u;
        // 0x2fc0f4: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc0f0) {
            ctx->pc = 0x2FC10Cu;
            goto label_2fc10c;
        }
    }
    ctx->pc = 0x2FC0F8u;
label_2fc0f8:
    // 0x2fc0f8: 0x9202011d  lbu         $v0, 0x11D($s0)
    ctx->pc = 0x2fc0f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 285)));
label_2fc0fc:
    // 0x2fc0fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2fc0fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2fc100:
    // 0x2fc100: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_2fc104:
    if (ctx->pc == 0x2FC104u) {
        ctx->pc = 0x2FC104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC100u;
        // 0x2fc104: 0x86030230  lh          $v1, 0x230($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 560)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC108u;
        goto label_2fc108;
    }
    ctx->pc = 0x2FC100u;
    {
        const bool branch_taken_0x2fc100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fc100) {
            ctx->pc = 0x2FC104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FC100u;
            // 0x2fc104: 0x86030230  lh          $v1, 0x230($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 560)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FC124u;
            goto label_2fc124;
        }
    }
    ctx->pc = 0x2FC108u;
label_2fc108:
    // 0x2fc108: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2fc108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_2fc10c:
    // 0x2fc10c: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x2fc10cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
label_2fc110:
    // 0x2fc110: 0x8c437a84  lw          $v1, 0x7A84($v0)
    ctx->pc = 0x2fc110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31364)));
label_2fc114:
    // 0x2fc114: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2fc114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_2fc118:
    // 0x2fc118: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
label_2fc11c:
    if (ctx->pc == 0x2FC11Cu) {
        ctx->pc = 0x2FC11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC118u;
        // 0x2fc11c: 0xc6000124  lwc1        $f0, 0x124($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC120u;
        goto label_2fc120;
    }
    ctx->pc = 0x2FC118u;
    {
        const bool branch_taken_0x2fc118 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc118) {
            ctx->pc = 0x2FC11Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FC118u;
            // 0x2fc11c: 0xc6000124  lwc1        $f0, 0x124($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FC134u;
            goto label_2fc134;
        }
    }
    ctx->pc = 0x2FC120u;
label_2fc120:
    // 0x2fc120: 0x86030230  lh          $v1, 0x230($s0)
    ctx->pc = 0x2fc120u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 560)));
label_2fc124:
    // 0x2fc124: 0x8602022e  lh          $v0, 0x22E($s0)
    ctx->pc = 0x2fc124u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 558)));
label_2fc128:
    // 0x2fc128: 0x5062000e  beql        $v1, $v0, . + 4 + (0xE << 2)
label_2fc12c:
    if (ctx->pc == 0x2FC12Cu) {
        ctx->pc = 0x2FC12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC128u;
        // 0x2fc12c: 0x8e0200f0  lw          $v0, 0xF0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC130u;
        goto label_2fc130;
    }
    ctx->pc = 0x2FC128u;
    {
        const bool branch_taken_0x2fc128 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2fc128) {
            ctx->pc = 0x2FC12Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FC128u;
            // 0x2fc12c: 0x8e0200f0  lw          $v0, 0xF0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FC164u;
            goto label_2fc164;
        }
    }
    ctx->pc = 0x2FC130u;
label_2fc130:
    // 0x2fc130: 0xc6000124  lwc1        $f0, 0x124($s0)
    ctx->pc = 0x2fc130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2fc134:
    // 0x2fc134: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x2fc134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2fc138:
    // 0x2fc138: 0xc602012c  lwc1        $f2, 0x12C($s0)
    ctx->pc = 0x2fc138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2fc13c:
    // 0x2fc13c: 0xc6030134  lwc1        $f3, 0x134($s0)
    ctx->pc = 0x2fc13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2fc140:
    // 0x2fc140: 0xc6040138  lwc1        $f4, 0x138($s0)
    ctx->pc = 0x2fc140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2fc144:
    // 0x2fc144: 0xc605013c  lwc1        $f5, 0x13C($s0)
    ctx->pc = 0x2fc144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2fc148:
    // 0x2fc148: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2fc148u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_2fc14c:
    // 0x2fc14c: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x2fc14cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_2fc150:
    // 0x2fc150: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x2fc150u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
label_2fc154:
    // 0x2fc154: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x2fc154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
label_2fc158:
    // 0x2fc158: 0xe6010128  swc1        $f1, 0x128($s0)
    ctx->pc = 0x2fc158u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
label_2fc15c:
    // 0x2fc15c: 0xe602012c  swc1        $f2, 0x12C($s0)
    ctx->pc = 0x2fc15cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
label_2fc160:
    // 0x2fc160: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x2fc160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_2fc164:
    // 0x2fc164: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x2fc164u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
label_2fc168:
    // 0x2fc168: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x2fc168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_2fc16c:
    // 0x2fc16c: 0x60f809  jalr        $v1
label_2fc170:
    if (ctx->pc == 0x2FC170u) {
        ctx->pc = 0x2FC170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC16Cu;
        // 0x2fc170: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC174u;
        goto label_2fc174;
    }
    ctx->pc = 0x2FC16Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2FC174u);
        ctx->pc = 0x2FC170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC16Cu;
        // 0x2fc170: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC16Cu, 0x2FC174u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FC174u;
label_2fc174:
    // 0x2fc174: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x2fc174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_2fc178:
    // 0x2fc178: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x2fc178u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_2fc17c:
    // 0x2fc17c: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x2fc17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_2fc180:
    // 0x2fc180: 0x60f809  jalr        $v1
label_2fc184:
    if (ctx->pc == 0x2FC184u) {
        ctx->pc = 0x2FC184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC180u;
        // 0x2fc184: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC188u;
        goto label_2fc188;
    }
    ctx->pc = 0x2FC180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2FC188u);
        ctx->pc = 0x2FC184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC180u;
        // 0x2fc184: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC180u, 0x2FC188u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FC188u;
label_2fc188:
    // 0x2fc188: 0x9602022e  lhu         $v0, 0x22E($s0)
    ctx->pc = 0x2fc188u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 558)));
label_2fc18c:
    // 0x2fc18c: 0xa6020230  sh          $v0, 0x230($s0)
    ctx->pc = 0x2fc18cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 560), (uint16_t)GPR_U32(ctx, 2));
label_2fc190:
    // 0x2fc190: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2fc190u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2fc194:
    // 0x2fc194: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fc194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2fc198:
    // 0x2fc198: 0x3e00008  jr          $ra
label_2fc19c:
    if (ctx->pc == 0x2FC19Cu) {
        ctx->pc = 0x2FC19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC198u;
        // 0x2fc19c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC1A0u;
        goto label_fallthrough_0x2fc198;
    }
    ctx->pc = 0x2FC198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC198u;
        // 0x2fc19c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2fc198:
    ctx->pc = 0x2FC1A0u;
}
