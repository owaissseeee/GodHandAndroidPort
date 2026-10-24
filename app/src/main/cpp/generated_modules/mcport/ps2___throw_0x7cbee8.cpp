#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: __throw
// Address: 0x7cbee8 - 0x7cc0c8
void ps2___throw_0x7cbee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___throw_0x7cbee8");
#endif

    switch (ctx->pc) {
        case 0x7cbee8u: goto label_7cbee8;
        case 0x7cbeecu: goto label_7cbeec;
        case 0x7cbef0u: goto label_7cbef0;
        case 0x7cbef4u: goto label_7cbef4;
        case 0x7cbef8u: goto label_7cbef8;
        case 0x7cbefcu: goto label_7cbefc;
        case 0x7cbf00u: goto label_7cbf00;
        case 0x7cbf04u: goto label_7cbf04;
        case 0x7cbf08u: goto label_7cbf08;
        case 0x7cbf0cu: goto label_7cbf0c;
        case 0x7cbf10u: goto label_7cbf10;
        case 0x7cbf14u: goto label_7cbf14;
        case 0x7cbf18u: goto label_7cbf18;
        case 0x7cbf1cu: goto label_7cbf1c;
        case 0x7cbf20u: goto label_7cbf20;
        case 0x7cbf24u: goto label_7cbf24;
        case 0x7cbf28u: goto label_7cbf28;
        case 0x7cbf2cu: goto label_7cbf2c;
        case 0x7cbf30u: goto label_7cbf30;
        case 0x7cbf34u: goto label_7cbf34;
        case 0x7cbf38u: goto label_7cbf38;
        case 0x7cbf3cu: goto label_7cbf3c;
        case 0x7cbf40u: goto label_7cbf40;
        case 0x7cbf44u: goto label_7cbf44;
        case 0x7cbf48u: goto label_7cbf48;
        case 0x7cbf4cu: goto label_7cbf4c;
        case 0x7cbf50u: goto label_7cbf50;
        case 0x7cbf54u: goto label_7cbf54;
        case 0x7cbf58u: goto label_7cbf58;
        case 0x7cbf5cu: goto label_7cbf5c;
        case 0x7cbf60u: goto label_7cbf60;
        case 0x7cbf64u: goto label_7cbf64;
        case 0x7cbf68u: goto label_7cbf68;
        case 0x7cbf6cu: goto label_7cbf6c;
        case 0x7cbf70u: goto label_7cbf70;
        case 0x7cbf74u: goto label_7cbf74;
        case 0x7cbf78u: goto label_7cbf78;
        case 0x7cbf7cu: goto label_7cbf7c;
        case 0x7cbf80u: goto label_7cbf80;
        case 0x7cbf84u: goto label_7cbf84;
        case 0x7cbf88u: goto label_7cbf88;
        case 0x7cbf8cu: goto label_7cbf8c;
        case 0x7cbf90u: goto label_7cbf90;
        case 0x7cbf94u: goto label_7cbf94;
        case 0x7cbf98u: goto label_7cbf98;
        case 0x7cbf9cu: goto label_7cbf9c;
        case 0x7cbfa0u: goto label_7cbfa0;
        case 0x7cbfa4u: goto label_7cbfa4;
        case 0x7cbfa8u: goto label_7cbfa8;
        case 0x7cbfacu: goto label_7cbfac;
        case 0x7cbfb0u: goto label_7cbfb0;
        case 0x7cbfb4u: goto label_7cbfb4;
        case 0x7cbfb8u: goto label_7cbfb8;
        case 0x7cbfbcu: goto label_7cbfbc;
        case 0x7cbfc0u: goto label_7cbfc0;
        case 0x7cbfc4u: goto label_7cbfc4;
        case 0x7cbfc8u: goto label_7cbfc8;
        case 0x7cbfccu: goto label_7cbfcc;
        case 0x7cbfd0u: goto label_7cbfd0;
        case 0x7cbfd4u: goto label_7cbfd4;
        case 0x7cbfd8u: goto label_7cbfd8;
        case 0x7cbfdcu: goto label_7cbfdc;
        case 0x7cbfe0u: goto label_7cbfe0;
        case 0x7cbfe4u: goto label_7cbfe4;
        case 0x7cbfe8u: goto label_7cbfe8;
        case 0x7cbfecu: goto label_7cbfec;
        case 0x7cbff0u: goto label_7cbff0;
        case 0x7cbff4u: goto label_7cbff4;
        case 0x7cbff8u: goto label_7cbff8;
        case 0x7cbffcu: goto label_7cbffc;
        case 0x7cc000u: goto label_7cc000;
        case 0x7cc004u: goto label_7cc004;
        case 0x7cc008u: goto label_7cc008;
        case 0x7cc00cu: goto label_7cc00c;
        case 0x7cc010u: goto label_7cc010;
        case 0x7cc014u: goto label_7cc014;
        case 0x7cc018u: goto label_7cc018;
        case 0x7cc01cu: goto label_7cc01c;
        case 0x7cc020u: goto label_7cc020;
        case 0x7cc024u: goto label_7cc024;
        case 0x7cc028u: goto label_7cc028;
        case 0x7cc02cu: goto label_7cc02c;
        case 0x7cc030u: goto label_7cc030;
        case 0x7cc034u: goto label_7cc034;
        case 0x7cc038u: goto label_7cc038;
        case 0x7cc03cu: goto label_7cc03c;
        case 0x7cc040u: goto label_7cc040;
        case 0x7cc044u: goto label_7cc044;
        case 0x7cc048u: goto label_7cc048;
        case 0x7cc04cu: goto label_7cc04c;
        case 0x7cc050u: goto label_7cc050;
        case 0x7cc054u: goto label_7cc054;
        case 0x7cc058u: goto label_7cc058;
        case 0x7cc05cu: goto label_7cc05c;
        case 0x7cc060u: goto label_7cc060;
        case 0x7cc064u: goto label_7cc064;
        case 0x7cc068u: goto label_7cc068;
        case 0x7cc06cu: goto label_7cc06c;
        case 0x7cc070u: goto label_7cc070;
        case 0x7cc074u: goto label_7cc074;
        case 0x7cc078u: goto label_7cc078;
        case 0x7cc07cu: goto label_7cc07c;
        case 0x7cc080u: goto label_7cc080;
        case 0x7cc084u: goto label_7cc084;
        case 0x7cc088u: goto label_7cc088;
        case 0x7cc08cu: goto label_7cc08c;
        case 0x7cc090u: goto label_7cc090;
        case 0x7cc094u: goto label_7cc094;
        case 0x7cc098u: goto label_7cc098;
        case 0x7cc09cu: goto label_7cc09c;
        case 0x7cc0a0u: goto label_7cc0a0;
        case 0x7cc0a4u: goto label_7cc0a4;
        case 0x7cc0a8u: goto label_7cc0a8;
        case 0x7cc0acu: goto label_7cc0ac;
        case 0x7cc0b0u: goto label_7cc0b0;
        case 0x7cc0b4u: goto label_7cc0b4;
        case 0x7cc0b8u: goto label_7cc0b8;
        case 0x7cc0bcu: goto label_7cc0bc;
        case 0x7cc0c0u: goto label_7cc0c0;
        case 0x7cc0c4u: goto label_7cc0c4;
        default: break;
    }

    ctx->pc = 0x7cbee8u;

label_7cbee8:
    // 0x7cbee8: 0x27bdf910  addiu       $sp, $sp, -0x6F0
    ctx->pc = 0x7cbee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965520));
label_7cbeec:
    // 0x7cbeec: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7cbeecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
label_7cbef0:
    // 0x7cbef0: 0xffbe0670  sd          $fp, 0x670($sp)
    ctx->pc = 0x7cbef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1648), GPR_U64(ctx, 30));
label_7cbef4:
    // 0x7cbef4: 0xffbf0680  sd          $ra, 0x680($sp)
    ctx->pc = 0x7cbef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1664), GPR_U64(ctx, 31));
label_7cbef8:
    // 0x7cbef8: 0xffb70660  sd          $s7, 0x660($sp)
    ctx->pc = 0x7cbef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1632), GPR_U64(ctx, 23));
label_7cbefc:
    // 0x7cbefc: 0xffb60650  sd          $s6, 0x650($sp)
    ctx->pc = 0x7cbefcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1616), GPR_U64(ctx, 22));
label_7cbf00:
    // 0x7cbf00: 0xffb50640  sd          $s5, 0x640($sp)
    ctx->pc = 0x7cbf00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1600), GPR_U64(ctx, 21));
label_7cbf04:
    // 0x7cbf04: 0xffb40630  sd          $s4, 0x630($sp)
    ctx->pc = 0x7cbf04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1584), GPR_U64(ctx, 20));
label_7cbf08:
    // 0x7cbf08: 0xffb30620  sd          $s3, 0x620($sp)
    ctx->pc = 0x7cbf08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1568), GPR_U64(ctx, 19));
label_7cbf0c:
    // 0x7cbf0c: 0xffb20610  sd          $s2, 0x610($sp)
    ctx->pc = 0x7cbf0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1552), GPR_U64(ctx, 18));
label_7cbf10:
    // 0x7cbf10: 0xffb10600  sd          $s1, 0x600($sp)
    ctx->pc = 0x7cbf10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1536), GPR_U64(ctx, 17));
label_7cbf14:
    // 0x7cbf14: 0xffb005f0  sd          $s0, 0x5F0($sp)
    ctx->pc = 0x7cbf14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1520), GPR_U64(ctx, 16));
label_7cbf18:
    // 0x7cbf18: 0xe7bf06e8  swc1        $f31, 0x6E8($sp)
    ctx->pc = 0x7cbf18u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1768), bits); }
label_7cbf1c:
    // 0x7cbf1c: 0xe7be06e0  swc1        $f30, 0x6E0($sp)
    ctx->pc = 0x7cbf1cu;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1760), bits); }
label_7cbf20:
    // 0x7cbf20: 0xe7bd06d8  swc1        $f29, 0x6D8($sp)
    ctx->pc = 0x7cbf20u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1752), bits); }
label_7cbf24:
    // 0x7cbf24: 0xe7bc06d0  swc1        $f28, 0x6D0($sp)
    ctx->pc = 0x7cbf24u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1744), bits); }
label_7cbf28:
    // 0x7cbf28: 0xe7bb06c8  swc1        $f27, 0x6C8($sp)
    ctx->pc = 0x7cbf28u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1736), bits); }
label_7cbf2c:
    // 0x7cbf2c: 0xe7ba06c0  swc1        $f26, 0x6C0($sp)
    ctx->pc = 0x7cbf2cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1728), bits); }
label_7cbf30:
    // 0x7cbf30: 0xe7b906b8  swc1        $f25, 0x6B8($sp)
    ctx->pc = 0x7cbf30u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1720), bits); }
label_7cbf34:
    // 0x7cbf34: 0xe7b806b0  swc1        $f24, 0x6B0($sp)
    ctx->pc = 0x7cbf34u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1712), bits); }
label_7cbf38:
    // 0x7cbf38: 0xe7b706a8  swc1        $f23, 0x6A8($sp)
    ctx->pc = 0x7cbf38u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1704), bits); }
label_7cbf3c:
    // 0x7cbf3c: 0xe7b606a0  swc1        $f22, 0x6A0($sp)
    ctx->pc = 0x7cbf3cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1696), bits); }
label_7cbf40:
    // 0x7cbf40: 0xe7b50698  swc1        $f21, 0x698($sp)
    ctx->pc = 0x7cbf40u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1688), bits); }
label_7cbf44:
    // 0x7cbf44: 0xe7b40690  swc1        $f20, 0x690($sp)
    ctx->pc = 0x7cbf44u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1680), bits); }
label_7cbf48:
    // 0x7cbf48: 0x8c6201a4  lw          $v0, 0x1A4($v1)
    ctx->pc = 0x7cbf48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 420)));
label_7cbf4c:
    // 0x7cbf4c: 0x40f809  jalr        $v0
label_7cbf50:
    if (ctx->pc == 0x7CBF50u) {
        ctx->pc = 0x7CBF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CBF4Cu;
        // 0x7cbf50: 0x3a0f02d  daddu       $fp, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CBF54u;
        goto label_7cbf54;
    }
    ctx->pc = 0x7CBF4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x7CBF54u);
        ctx->pc = 0x7CBF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CBF4Cu;
        // 0x7cbf50: 0x3a0f02d  daddu       $fp, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CBF4Cu, 0x7CBF54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7CBF54u;
label_7cbf54:
    // 0x7cbf54: 0xafc205e4  sw          $v0, 0x5E4($fp)
    ctx->pc = 0x7cbf54u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1508), GPR_U32(ctx, 2));
label_7cbf58:
    // 0x7cbf58: 0x27c202f0  addiu       $v0, $fp, 0x2F0
    ctx->pc = 0x7cbf58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 752));
label_7cbf5c:
    // 0x7cbf5c: 0x8fc305e4  lw          $v1, 0x5E4($fp)
    ctx->pc = 0x7cbf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1508)));
label_7cbf60:
    // 0x7cbf60: 0xafc205e8  sw          $v0, 0x5E8($fp)
    ctx->pc = 0x7cbf60u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1512), GPR_U32(ctx, 2));
label_7cbf64:
    // 0x7cbf64: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x7cbf64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_7cbf68:
    // 0x7cbf68: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_7cbf6c:
    if (ctx->pc == 0x7CBF6Cu) {
        ctx->pc = 0x7CBF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CBF68u;
        // 0x7cbf6c: 0xafde05e0  sw          $fp, 0x5E0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1504), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CBF70u;
        goto label_7cbf70;
    }
    ctx->pc = 0x7CBF68u;
    {
        const bool branch_taken_0x7cbf68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CBF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CBF68u;
        // 0x7cbf6c: 0xafde05e0  sw          $fp, 0x5E0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1504), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cbf68) {
            ctx->pc = 0x7CBF84u;
            goto label_7cbf84;
        }
    }
    ctx->pc = 0x7CBF70u;
label_7cbf70:
    // 0x7cbf70: 0xc1f2cd4  jal         func_7CB350
label_7cbf74:
    if (ctx->pc == 0x7CBF74u) {
        ctx->pc = 0x7CBF78u;
        goto label_7cbf78;
    }
    ctx->pc = 0x7CBF70u;
    SET_GPR_U32(ctx, 31, 0x7CBF78u);
    ctx->pc = 0x7CB350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CB350u, 0x7CBF70u, 0x7CBF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CBF78u;
label_7cbf78:
    // 0x7cbf78: 0x27c505e0  addiu       $a1, $fp, 0x5E0
    ctx->pc = 0x7cbf78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 1504));
label_7cbf7c:
    // 0x7cbf7c: 0x10000003  b           . + 4 + (0x3 << 2)
label_7cbf80:
    if (ctx->pc == 0x7CBF80u) {
        ctx->pc = 0x7CBF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CBF7Cu;
        // 0x7cbf80: 0xafc505ec  sw          $a1, 0x5EC($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1516), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CBF84u;
        goto label_7cbf84;
    }
    ctx->pc = 0x7CBF7Cu;
    {
        const bool branch_taken_0x7cbf7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CBF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CBF7Cu;
        // 0x7cbf80: 0xafc505ec  sw          $a1, 0x5EC($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1516), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cbf7c) {
            ctx->pc = 0x7CBF8Cu;
            goto label_7cbf8c;
        }
    }
    ctx->pc = 0x7CBF84u;
label_7cbf84:
    // 0x7cbf84: 0x27c605e0  addiu       $a2, $fp, 0x5E0
    ctx->pc = 0x7cbf84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 1504));
label_7cbf88:
    // 0x7cbf88: 0xafc605ec  sw          $a2, 0x5EC($fp)
    ctx->pc = 0x7cbf88u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1516), GPR_U32(ctx, 6));
label_7cbf8c:
    // 0x7cbf8c: 0x3c07007d  lui         $a3, 0x7D
    ctx->pc = 0x7cbf8cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)125 << 16));
label_7cbf90:
    // 0x7cbf90: 0x8fc505e0  lw          $a1, 0x5E0($fp)
    ctx->pc = 0x7cbf90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1504)));
label_7cbf94:
    // 0x7cbf94: 0xc1f33e4  jal         func_7CCF90
label_7cbf98:
    if (ctx->pc == 0x7CBF98u) {
        ctx->pc = 0x7CBF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CBF94u;
        // 0x7cbf98: 0x24e4bf8c  addiu       $a0, $a3, -0x4074 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950796));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CBF9Cu;
        goto label_7cbf9c;
    }
    ctx->pc = 0x7CBF94u;
    SET_GPR_U32(ctx, 31, 0x7CBF9Cu);
    ctx->pc = 0x7CBF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CBF94u;
    // 0x7cbf98: 0x24e4bf8c  addiu       $a0, $a3, -0x4074 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950796));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CCF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CCF90u, 0x7CBF94u, 0x7CBF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CBF9Cu;
label_7cbf9c:
    // 0x7cbf9c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x7cbf9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7cbfa0:
    // 0x7cbfa0: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_7cbfa4:
    if (ctx->pc == 0x7CBFA4u) {
        ctx->pc = 0x7CBFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CBFA0u;
        // 0x7cbfa4: 0xafc205e0  sw          $v0, 0x5E0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1504), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CBFA8u;
        goto label_7cbfa8;
    }
    ctx->pc = 0x7CBFA0u;
    {
        const bool branch_taken_0x7cbfa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CBFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CBFA0u;
        // 0x7cbfa4: 0xafc205e0  sw          $v0, 0x5E0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1504), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cbfa0) {
            ctx->pc = 0x7CBFB4u;
            goto label_7cbfb4;
        }
    }
    ctx->pc = 0x7CBFA8u;
label_7cbfa8:
    // 0x7cbfa8: 0xc1f2cd4  jal         func_7CB350
label_7cbfac:
    if (ctx->pc == 0x7CBFACu) {
        ctx->pc = 0x7CBFB0u;
        goto label_7cbfb0;
    }
    ctx->pc = 0x7CBFA8u;
    SET_GPR_U32(ctx, 31, 0x7CBFB0u);
    ctx->pc = 0x7CB350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CB350u, 0x7CBFA8u, 0x7CBFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CBFB0u;
label_7cbfb0:
    // 0x7cbfb0: 0x8fc305e0  lw          $v1, 0x5E0($fp)
    ctx->pc = 0x7cbfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1504)));
label_7cbfb4:
    // 0x7cbfb4: 0x27c806f0  addiu       $t0, $fp, 0x6F0
    ctx->pc = 0x7cbfb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 30), 1776));
label_7cbfb8:
    // 0x7cbfb8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x7cbfb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_7cbfbc:
    // 0x7cbfbc: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x7cbfbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
label_7cbfc0:
    // 0x7cbfc0: 0x248302e0  addiu       $v1, $a0, 0x2E0
    ctx->pc = 0x7cbfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 736));
label_7cbfc4:
    // 0x7cbfc4: 0x8fc205e8  lw          $v0, 0x5E8($fp)
    ctx->pc = 0x7cbfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1512)));
label_7cbfc8:
    // 0x7cbfc8: 0xdc850000  ld          $a1, 0x0($a0)
    ctx->pc = 0x7cbfc8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_7cbfcc:
    // 0x7cbfcc: 0xdc860008  ld          $a2, 0x8($a0)
    ctx->pc = 0x7cbfccu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 8)));
label_7cbfd0:
    // 0x7cbfd0: 0xdc870010  ld          $a3, 0x10($a0)
    ctx->pc = 0x7cbfd0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 16)));
label_7cbfd4:
    // 0x7cbfd4: 0xdc880018  ld          $t0, 0x18($a0)
    ctx->pc = 0x7cbfd4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 24)));
label_7cbfd8:
    // 0x7cbfd8: 0xfc450000  sd          $a1, 0x0($v0)
    ctx->pc = 0x7cbfd8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
label_7cbfdc:
    // 0x7cbfdc: 0xfc460008  sd          $a2, 0x8($v0)
    ctx->pc = 0x7cbfdcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 6));
label_7cbfe0:
    // 0x7cbfe0: 0xfc470010  sd          $a3, 0x10($v0)
    ctx->pc = 0x7cbfe0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 7));
label_7cbfe4:
    // 0x7cbfe4: 0xfc480018  sd          $t0, 0x18($v0)
    ctx->pc = 0x7cbfe4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 8));
label_7cbfe8:
    // 0x7cbfe8: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x7cbfe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_7cbfec:
    // 0x7cbfec: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x7cbfecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_7cbff0:
    // 0x7cbff0: 0x0  nop
    ctx->pc = 0x7cbff0u;
    // NOP
label_7cbff4:
    // 0x7cbff4: 0x1483fff4  bne         $a0, $v1, . + 4 + (-0xC << 2)
label_7cbff8:
    if (ctx->pc == 0x7CBFF8u) {
        ctx->pc = 0x7CBFFCu;
        goto label_7cbffc;
    }
    ctx->pc = 0x7CBFF4u;
    {
        const bool branch_taken_0x7cbff4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x7cbff4) {
            ctx->pc = 0x7CBFC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7cbfc8;
        }
    }
    ctx->pc = 0x7CBFFCu;
label_7cbffc:
    // 0x7cbffc: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x7cbffcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_7cc000:
    // 0x7cc000: 0xdc850008  ld          $a1, 0x8($a0)
    ctx->pc = 0x7cc000u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 8)));
label_7cc004:
    // 0x7cc004: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x7cc004u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
label_7cc008:
    // 0x7cc008: 0xfc450008  sd          $a1, 0x8($v0)
    ctx->pc = 0x7cc008u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 5));
label_7cc00c:
    // 0x7cc00c: 0x27c20680  addiu       $v0, $fp, 0x680
    ctx->pc = 0x7cc00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1664));
label_7cc010:
    // 0x7cc010: 0x8fc405e4  lw          $a0, 0x5E4($fp)
    ctx->pc = 0x7cc010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1508)));
label_7cc014:
    // 0x7cc014: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x7cc014u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_7cc018:
    // 0x7cc018: 0x8fc605e8  lw          $a2, 0x5E8($fp)
    ctx->pc = 0x7cc018u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1512)));
label_7cc01c:
    // 0x7cc01c: 0x8fc705ec  lw          $a3, 0x5EC($fp)
    ctx->pc = 0x7cc01cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1516)));
label_7cc020:
    // 0x7cc020: 0xc1f2eee  jal         func_7CBBB8
label_7cc024:
    if (ctx->pc == 0x7CC024u) {
        ctx->pc = 0x7CC024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CC020u;
        // 0x7cc024: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CC028u;
        goto label_7cc028;
    }
    ctx->pc = 0x7CC020u;
    SET_GPR_U32(ctx, 31, 0x7CC028u);
    ctx->pc = 0x7CC024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CC020u;
    // 0x7cc024: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CBBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CBBB8u, 0x7CC020u, 0x7CC028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CC028u;
label_7cc028:
    // 0x7cc028: 0x8fc605e0  lw          $a2, 0x5E0($fp)
    ctx->pc = 0x7cc028u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1504)));
label_7cc02c:
    // 0x7cc02c: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7cc02cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
label_7cc030:
    // 0x7cc030: 0x8fc805e8  lw          $t0, 0x5E8($fp)
    ctx->pc = 0x7cc030u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1512)));
label_7cc034:
    // 0x7cc034: 0x2465c058  addiu       $a1, $v1, -0x3FA8
    ctx->pc = 0x7cc034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951000));
label_7cc038:
    // 0x7cc038: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x7cc038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_7cc03c:
    // 0x7cc03c: 0x27c40680  addiu       $a0, $fp, 0x680
    ctx->pc = 0x7cc03cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 1664));
label_7cc040:
    // 0x7cc040: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x7cc040u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_7cc044:
    // 0x7cc044: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x7cc044u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_7cc048:
    // 0x7cc048: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x7cc048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7cc04c:
    // 0x7cc04c: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x7cc04cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_7cc050:
    // 0x7cc050: 0x10000003  b           . + 4 + (0x3 << 2)
label_7cc054:
    if (ctx->pc == 0x7CC054u) {
        ctx->pc = 0x7CC054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CC050u;
        // 0x7cc054: 0x8fc205e4  lw          $v0, 0x5E4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1508)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CC058u;
        goto label_7cc058;
    }
    ctx->pc = 0x7CC050u;
    {
        const bool branch_taken_0x7cc050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CC054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CC050u;
        // 0x7cc054: 0x8fc205e4  lw          $v0, 0x5E4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1508)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cc050) {
            ctx->pc = 0x7CC060u;
            goto label_7cc060;
        }
    }
    ctx->pc = 0x7CC058u;
label_7cc058:
    // 0x7cc058: 0x800008  jr          $a0
label_7cc05c:
    if (ctx->pc == 0x7CC05Cu) {
        ctx->pc = 0x7CC05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CC058u;
        // 0x7cc05c: 0x3a3e821  addu        $sp, $sp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CC060u;
        goto label_7cc060;
    }
    ctx->pc = 0x7CC058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = 0x7CC05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CC058u;
        // 0x7cc05c: 0x3a3e821  addu        $sp, $sp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CC058u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x7CC060u;
label_7cc060:
    // 0x7cc060: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x7cc060u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_7cc064:
    // 0x7cc064: 0xdfbf0680  ld          $ra, 0x680($sp)
    ctx->pc = 0x7cc064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1664)));
label_7cc068:
    // 0x7cc068: 0xdfbe0670  ld          $fp, 0x670($sp)
    ctx->pc = 0x7cc068u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 1648)));
label_7cc06c:
    // 0x7cc06c: 0xdfb70660  ld          $s7, 0x660($sp)
    ctx->pc = 0x7cc06cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 1632)));
label_7cc070:
    // 0x7cc070: 0xdfb60650  ld          $s6, 0x650($sp)
    ctx->pc = 0x7cc070u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 1616)));
label_7cc074:
    // 0x7cc074: 0xdfb50640  ld          $s5, 0x640($sp)
    ctx->pc = 0x7cc074u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1600)));
label_7cc078:
    // 0x7cc078: 0xdfb40630  ld          $s4, 0x630($sp)
    ctx->pc = 0x7cc078u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1584)));
label_7cc07c:
    // 0x7cc07c: 0xdfb30620  ld          $s3, 0x620($sp)
    ctx->pc = 0x7cc07cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1568)));
label_7cc080:
    // 0x7cc080: 0xdfb20610  ld          $s2, 0x610($sp)
    ctx->pc = 0x7cc080u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1552)));
label_7cc084:
    // 0x7cc084: 0xdfb10600  ld          $s1, 0x600($sp)
    ctx->pc = 0x7cc084u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1536)));
label_7cc088:
    // 0x7cc088: 0xdfb005f0  ld          $s0, 0x5F0($sp)
    ctx->pc = 0x7cc088u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1520)));
label_7cc08c:
    // 0x7cc08c: 0xc7bf06e8  lwc1        $f31, 0x6E8($sp)
    ctx->pc = 0x7cc08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
label_7cc090:
    // 0x7cc090: 0xc7be06e0  lwc1        $f30, 0x6E0($sp)
    ctx->pc = 0x7cc090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
label_7cc094:
    // 0x7cc094: 0xc7bd06d8  lwc1        $f29, 0x6D8($sp)
    ctx->pc = 0x7cc094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
label_7cc098:
    // 0x7cc098: 0xc7bc06d0  lwc1        $f28, 0x6D0($sp)
    ctx->pc = 0x7cc098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_7cc09c:
    // 0x7cc09c: 0xc7bb06c8  lwc1        $f27, 0x6C8($sp)
    ctx->pc = 0x7cc09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_7cc0a0:
    // 0x7cc0a0: 0xc7ba06c0  lwc1        $f26, 0x6C0($sp)
    ctx->pc = 0x7cc0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_7cc0a4:
    // 0x7cc0a4: 0xc7b906b8  lwc1        $f25, 0x6B8($sp)
    ctx->pc = 0x7cc0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_7cc0a8:
    // 0x7cc0a8: 0xc7b806b0  lwc1        $f24, 0x6B0($sp)
    ctx->pc = 0x7cc0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_7cc0ac:
    // 0x7cc0ac: 0xc7b706a8  lwc1        $f23, 0x6A8($sp)
    ctx->pc = 0x7cc0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_7cc0b0:
    // 0x7cc0b0: 0xc7b606a0  lwc1        $f22, 0x6A0($sp)
    ctx->pc = 0x7cc0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_7cc0b4:
    // 0x7cc0b4: 0xc7b50698  lwc1        $f21, 0x698($sp)
    ctx->pc = 0x7cc0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_7cc0b8:
    // 0x7cc0b8: 0xc7b40690  lwc1        $f20, 0x690($sp)
    ctx->pc = 0x7cc0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_7cc0bc:
    // 0x7cc0bc: 0x3e00008  jr          $ra
label_7cc0c0:
    if (ctx->pc == 0x7CC0C0u) {
        ctx->pc = 0x7CC0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CC0BCu;
        // 0x7cc0c0: 0x27bd06f0  addiu       $sp, $sp, 0x6F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CC0C4u;
        goto label_7cc0c4;
    }
    ctx->pc = 0x7CC0BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CC0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CC0BCu;
        // 0x7cc0c0: 0x27bd06f0  addiu       $sp, $sp, 0x6F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1776));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CC0BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CC0C4u;
label_7cc0c4:
    // 0x7cc0c4: 0x0  nop
    ctx->pc = 0x7cc0c4u;
    // NOP
    ctx->pc = 0x7cc0c8u;
}
} // namespace gh_mcport
