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

// Function: __rethrow
// Address: 0x320ff8 - 0x3211e0
void ps2___rethrow_0x320ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___rethrow_0x320ff8");
#endif

    switch (ctx->pc) {
        case 0x320ff8u: goto label_320ff8;
        case 0x320ffcu: goto label_320ffc;
        case 0x321000u: goto label_321000;
        case 0x321004u: goto label_321004;
        case 0x321008u: goto label_321008;
        case 0x32100cu: goto label_32100c;
        case 0x321010u: goto label_321010;
        case 0x321014u: goto label_321014;
        case 0x321018u: goto label_321018;
        case 0x32101cu: goto label_32101c;
        case 0x321020u: goto label_321020;
        case 0x321024u: goto label_321024;
        case 0x321028u: goto label_321028;
        case 0x32102cu: goto label_32102c;
        case 0x321030u: goto label_321030;
        case 0x321034u: goto label_321034;
        case 0x321038u: goto label_321038;
        case 0x32103cu: goto label_32103c;
        case 0x321040u: goto label_321040;
        case 0x321044u: goto label_321044;
        case 0x321048u: goto label_321048;
        case 0x32104cu: goto label_32104c;
        case 0x321050u: goto label_321050;
        case 0x321054u: goto label_321054;
        case 0x321058u: goto label_321058;
        case 0x32105cu: goto label_32105c;
        case 0x321060u: goto label_321060;
        case 0x321064u: goto label_321064;
        case 0x321068u: goto label_321068;
        case 0x32106cu: goto label_32106c;
        case 0x321070u: goto label_321070;
        case 0x321074u: goto label_321074;
        case 0x321078u: goto label_321078;
        case 0x32107cu: goto label_32107c;
        case 0x321080u: goto label_321080;
        case 0x321084u: goto label_321084;
        case 0x321088u: goto label_321088;
        case 0x32108cu: goto label_32108c;
        case 0x321090u: goto label_321090;
        case 0x321094u: goto label_321094;
        case 0x321098u: goto label_321098;
        case 0x32109cu: goto label_32109c;
        case 0x3210a0u: goto label_3210a0;
        case 0x3210a4u: goto label_3210a4;
        case 0x3210a8u: goto label_3210a8;
        case 0x3210acu: goto label_3210ac;
        case 0x3210b0u: goto label_3210b0;
        case 0x3210b4u: goto label_3210b4;
        case 0x3210b8u: goto label_3210b8;
        case 0x3210bcu: goto label_3210bc;
        case 0x3210c0u: goto label_3210c0;
        case 0x3210c4u: goto label_3210c4;
        case 0x3210c8u: goto label_3210c8;
        case 0x3210ccu: goto label_3210cc;
        case 0x3210d0u: goto label_3210d0;
        case 0x3210d4u: goto label_3210d4;
        case 0x3210d8u: goto label_3210d8;
        case 0x3210dcu: goto label_3210dc;
        case 0x3210e0u: goto label_3210e0;
        case 0x3210e4u: goto label_3210e4;
        case 0x3210e8u: goto label_3210e8;
        case 0x3210ecu: goto label_3210ec;
        case 0x3210f0u: goto label_3210f0;
        case 0x3210f4u: goto label_3210f4;
        case 0x3210f8u: goto label_3210f8;
        case 0x3210fcu: goto label_3210fc;
        case 0x321100u: goto label_321100;
        case 0x321104u: goto label_321104;
        case 0x321108u: goto label_321108;
        case 0x32110cu: goto label_32110c;
        case 0x321110u: goto label_321110;
        case 0x321114u: goto label_321114;
        case 0x321118u: goto label_321118;
        case 0x32111cu: goto label_32111c;
        case 0x321120u: goto label_321120;
        case 0x321124u: goto label_321124;
        case 0x321128u: goto label_321128;
        case 0x32112cu: goto label_32112c;
        case 0x321130u: goto label_321130;
        case 0x321134u: goto label_321134;
        case 0x321138u: goto label_321138;
        case 0x32113cu: goto label_32113c;
        case 0x321140u: goto label_321140;
        case 0x321144u: goto label_321144;
        case 0x321148u: goto label_321148;
        case 0x32114cu: goto label_32114c;
        case 0x321150u: goto label_321150;
        case 0x321154u: goto label_321154;
        case 0x321158u: goto label_321158;
        case 0x32115cu: goto label_32115c;
        case 0x321160u: goto label_321160;
        case 0x321164u: goto label_321164;
        case 0x321168u: goto label_321168;
        case 0x32116cu: goto label_32116c;
        case 0x321170u: goto label_321170;
        case 0x321174u: goto label_321174;
        case 0x321178u: goto label_321178;
        case 0x32117cu: goto label_32117c;
        case 0x321180u: goto label_321180;
        case 0x321184u: goto label_321184;
        case 0x321188u: goto label_321188;
        case 0x32118cu: goto label_32118c;
        case 0x321190u: goto label_321190;
        case 0x321194u: goto label_321194;
        case 0x321198u: goto label_321198;
        case 0x32119cu: goto label_32119c;
        case 0x3211a0u: goto label_3211a0;
        case 0x3211a4u: goto label_3211a4;
        case 0x3211a8u: goto label_3211a8;
        case 0x3211acu: goto label_3211ac;
        case 0x3211b0u: goto label_3211b0;
        case 0x3211b4u: goto label_3211b4;
        case 0x3211b8u: goto label_3211b8;
        case 0x3211bcu: goto label_3211bc;
        case 0x3211c0u: goto label_3211c0;
        case 0x3211c4u: goto label_3211c4;
        case 0x3211c8u: goto label_3211c8;
        case 0x3211ccu: goto label_3211cc;
        case 0x3211d0u: goto label_3211d0;
        case 0x3211d4u: goto label_3211d4;
        case 0x3211d8u: goto label_3211d8;
        case 0x3211dcu: goto label_3211dc;
        default: break;
    }

    ctx->pc = 0x320ff8u;

label_320ff8:
    // 0x320ff8: 0x27bdf900  addiu       $sp, $sp, -0x700
    ctx->pc = 0x320ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965504));
label_320ffc:
    // 0x320ffc: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x320ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_321000:
    // 0x321000: 0xffbe0680  sd          $fp, 0x680($sp)
    ctx->pc = 0x321000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1664), GPR_U64(ctx, 30));
label_321004:
    // 0x321004: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x321004u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_321008:
    // 0x321008: 0xffbf0690  sd          $ra, 0x690($sp)
    ctx->pc = 0x321008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1680), GPR_U64(ctx, 31));
label_32100c:
    // 0x32100c: 0xffb70670  sd          $s7, 0x670($sp)
    ctx->pc = 0x32100cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1648), GPR_U64(ctx, 23));
label_321010:
    // 0x321010: 0xffb60660  sd          $s6, 0x660($sp)
    ctx->pc = 0x321010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1632), GPR_U64(ctx, 22));
label_321014:
    // 0x321014: 0xffb50650  sd          $s5, 0x650($sp)
    ctx->pc = 0x321014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1616), GPR_U64(ctx, 21));
label_321018:
    // 0x321018: 0xffb40640  sd          $s4, 0x640($sp)
    ctx->pc = 0x321018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1600), GPR_U64(ctx, 20));
label_32101c:
    // 0x32101c: 0xffb30630  sd          $s3, 0x630($sp)
    ctx->pc = 0x32101cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1584), GPR_U64(ctx, 19));
label_321020:
    // 0x321020: 0xffb20620  sd          $s2, 0x620($sp)
    ctx->pc = 0x321020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1568), GPR_U64(ctx, 18));
label_321024:
    // 0x321024: 0xffb10610  sd          $s1, 0x610($sp)
    ctx->pc = 0x321024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1552), GPR_U64(ctx, 17));
label_321028:
    // 0x321028: 0xffb00600  sd          $s0, 0x600($sp)
    ctx->pc = 0x321028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1536), GPR_U64(ctx, 16));
label_32102c:
    // 0x32102c: 0xe7bf06f8  swc1        $f31, 0x6F8($sp)
    ctx->pc = 0x32102cu;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1784), bits); }
label_321030:
    // 0x321030: 0xe7be06f0  swc1        $f30, 0x6F0($sp)
    ctx->pc = 0x321030u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1776), bits); }
label_321034:
    // 0x321034: 0xe7bd06e8  swc1        $f29, 0x6E8($sp)
    ctx->pc = 0x321034u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1768), bits); }
label_321038:
    // 0x321038: 0xe7bc06e0  swc1        $f28, 0x6E0($sp)
    ctx->pc = 0x321038u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1760), bits); }
label_32103c:
    // 0x32103c: 0xe7bb06d8  swc1        $f27, 0x6D8($sp)
    ctx->pc = 0x32103cu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1752), bits); }
label_321040:
    // 0x321040: 0xe7ba06d0  swc1        $f26, 0x6D0($sp)
    ctx->pc = 0x321040u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1744), bits); }
label_321044:
    // 0x321044: 0xe7b906c8  swc1        $f25, 0x6C8($sp)
    ctx->pc = 0x321044u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1736), bits); }
label_321048:
    // 0x321048: 0xe7b806c0  swc1        $f24, 0x6C0($sp)
    ctx->pc = 0x321048u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1728), bits); }
label_32104c:
    // 0x32104c: 0xe7b706b8  swc1        $f23, 0x6B8($sp)
    ctx->pc = 0x32104cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1720), bits); }
label_321050:
    // 0x321050: 0xe7b606b0  swc1        $f22, 0x6B0($sp)
    ctx->pc = 0x321050u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1712), bits); }
label_321054:
    // 0x321054: 0xe7b506a8  swc1        $f21, 0x6A8($sp)
    ctx->pc = 0x321054u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1704), bits); }
label_321058:
    // 0x321058: 0xe7b406a0  swc1        $f20, 0x6A0($sp)
    ctx->pc = 0x321058u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1696), bits); }
label_32105c:
    // 0x32105c: 0xafc405e4  sw          $a0, 0x5E4($fp)
    ctx->pc = 0x32105cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1508), GPR_U32(ctx, 4));
label_321060:
    // 0x321060: 0x8c62490c  lw          $v0, 0x490C($v1)
    ctx->pc = 0x321060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18700)));
label_321064:
    // 0x321064: 0x40f809  jalr        $v0
label_321068:
    if (ctx->pc == 0x321068u) {
        ctx->pc = 0x32106Cu;
        goto label_32106c;
    }
    ctx->pc = 0x321064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32106Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321064u, 0x32106Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32106Cu;
label_32106c:
    // 0x32106c: 0xafc205e8  sw          $v0, 0x5E8($fp)
    ctx->pc = 0x32106cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1512), GPR_U32(ctx, 2));
label_321070:
    // 0x321070: 0x27c202f0  addiu       $v0, $fp, 0x2F0
    ctx->pc = 0x321070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 752));
label_321074:
    // 0x321074: 0x8fc305e8  lw          $v1, 0x5E8($fp)
    ctx->pc = 0x321074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1512)));
label_321078:
    // 0x321078: 0xafc205ec  sw          $v0, 0x5EC($fp)
    ctx->pc = 0x321078u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1516), GPR_U32(ctx, 2));
label_32107c:
    // 0x32107c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x32107cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_321080:
    // 0x321080: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_321084:
    if (ctx->pc == 0x321084u) {
        ctx->pc = 0x321084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321080u;
        // 0x321084: 0xafde05e0  sw          $fp, 0x5E0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1504), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321088u;
        goto label_321088;
    }
    ctx->pc = 0x321080u;
    {
        const bool branch_taken_0x321080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x321084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321080u;
        // 0x321084: 0xafde05e0  sw          $fp, 0x5E0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1504), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321080) {
            ctx->pc = 0x321090u;
            goto label_321090;
        }
    }
    ctx->pc = 0x321088u;
label_321088:
    // 0x321088: 0xc0c80a0  jal         func_320280
label_32108c:
    if (ctx->pc == 0x32108Cu) {
        ctx->pc = 0x321090u;
        goto label_321090;
    }
    ctx->pc = 0x321088u;
    SET_GPR_U32(ctx, 31, 0x321090u);
    ctx->pc = 0x320280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320280u, 0x321088u, 0x321090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321090u;
label_321090:
    // 0x321090: 0x8fc605e4  lw          $a2, 0x5E4($fp)
    ctx->pc = 0x321090u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1508)));
label_321094:
    // 0x321094: 0x27c705e0  addiu       $a3, $fp, 0x5E0
    ctx->pc = 0x321094u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 1504));
label_321098:
    // 0x321098: 0x8fc505e8  lw          $a1, 0x5E8($fp)
    ctx->pc = 0x321098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1512)));
label_32109c:
    // 0x32109c: 0xaca6000c  sw          $a2, 0xC($a1)
    ctx->pc = 0x32109cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 6));
label_3210a0:
    // 0x3210a0: 0xafc705f0  sw          $a3, 0x5F0($fp)
    ctx->pc = 0x3210a0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1520), GPR_U32(ctx, 7));
label_3210a4:
    // 0x3210a4: 0x3c080032  lui         $t0, 0x32
    ctx->pc = 0x3210a4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)50 << 16));
label_3210a8:
    // 0x3210a8: 0x8fc505e0  lw          $a1, 0x5E0($fp)
    ctx->pc = 0x3210a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1504)));
label_3210ac:
    // 0x3210ac: 0xc0c895c  jal         func_322570
label_3210b0:
    if (ctx->pc == 0x3210B0u) {
        ctx->pc = 0x3210B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3210ACu;
        // 0x3210b0: 0x250410a4  addiu       $a0, $t0, 0x10A4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 4260));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3210B4u;
        goto label_3210b4;
    }
    ctx->pc = 0x3210ACu;
    SET_GPR_U32(ctx, 31, 0x3210B4u);
    ctx->pc = 0x3210B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3210ACu;
    // 0x3210b0: 0x250410a4  addiu       $a0, $t0, 0x10A4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 4260));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322570u, 0x3210ACu, 0x3210B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3210B4u;
label_3210b4:
    // 0x3210b4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3210b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3210b8:
    // 0x3210b8: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_3210bc:
    if (ctx->pc == 0x3210BCu) {
        ctx->pc = 0x3210BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3210B8u;
        // 0x3210bc: 0xafc205e0  sw          $v0, 0x5E0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1504), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3210C0u;
        goto label_3210c0;
    }
    ctx->pc = 0x3210B8u;
    {
        const bool branch_taken_0x3210b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3210BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3210B8u;
        // 0x3210bc: 0xafc205e0  sw          $v0, 0x5E0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1504), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3210b8) {
            ctx->pc = 0x3210CCu;
            goto label_3210cc;
        }
    }
    ctx->pc = 0x3210C0u;
label_3210c0:
    // 0x3210c0: 0xc0c80a0  jal         func_320280
label_3210c4:
    if (ctx->pc == 0x3210C4u) {
        ctx->pc = 0x3210C8u;
        goto label_3210c8;
    }
    ctx->pc = 0x3210C0u;
    SET_GPR_U32(ctx, 31, 0x3210C8u);
    ctx->pc = 0x320280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320280u, 0x3210C0u, 0x3210C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3210C8u;
label_3210c8:
    // 0x3210c8: 0x8fc305e0  lw          $v1, 0x5E0($fp)
    ctx->pc = 0x3210c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1504)));
label_3210cc:
    // 0x3210cc: 0x27c20700  addiu       $v0, $fp, 0x700
    ctx->pc = 0x3210ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1792));
label_3210d0:
    // 0x3210d0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3210d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3210d4:
    // 0x3210d4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3210d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_3210d8:
    // 0x3210d8: 0x8fc205ec  lw          $v0, 0x5EC($fp)
    ctx->pc = 0x3210d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1516)));
label_3210dc:
    // 0x3210dc: 0x248302e0  addiu       $v1, $a0, 0x2E0
    ctx->pc = 0x3210dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 736));
label_3210e0:
    // 0x3210e0: 0xdc850000  ld          $a1, 0x0($a0)
    ctx->pc = 0x3210e0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_3210e4:
    // 0x3210e4: 0xdc860008  ld          $a2, 0x8($a0)
    ctx->pc = 0x3210e4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 8)));
label_3210e8:
    // 0x3210e8: 0xdc870010  ld          $a3, 0x10($a0)
    ctx->pc = 0x3210e8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 16)));
label_3210ec:
    // 0x3210ec: 0xdc880018  ld          $t0, 0x18($a0)
    ctx->pc = 0x3210ecu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 24)));
label_3210f0:
    // 0x3210f0: 0xfc450000  sd          $a1, 0x0($v0)
    ctx->pc = 0x3210f0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
label_3210f4:
    // 0x3210f4: 0xfc460008  sd          $a2, 0x8($v0)
    ctx->pc = 0x3210f4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 6));
label_3210f8:
    // 0x3210f8: 0xfc470010  sd          $a3, 0x10($v0)
    ctx->pc = 0x3210f8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 7));
label_3210fc:
    // 0x3210fc: 0xfc480018  sd          $t0, 0x18($v0)
    ctx->pc = 0x3210fcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 8));
label_321100:
    // 0x321100: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x321100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_321104:
    // 0x321104: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x321104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_321108:
    // 0x321108: 0x0  nop
    ctx->pc = 0x321108u;
    // NOP
label_32110c:
    // 0x32110c: 0x1483fff4  bne         $a0, $v1, . + 4 + (-0xC << 2)
label_321110:
    if (ctx->pc == 0x321110u) {
        ctx->pc = 0x321114u;
        goto label_321114;
    }
    ctx->pc = 0x32110Cu;
    {
        const bool branch_taken_0x32110c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x32110c) {
            ctx->pc = 0x3210E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3210e0;
        }
    }
    ctx->pc = 0x321114u;
label_321114:
    // 0x321114: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x321114u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_321118:
    // 0x321118: 0xdc850008  ld          $a1, 0x8($a0)
    ctx->pc = 0x321118u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 8)));
label_32111c:
    // 0x32111c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x32111cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
label_321120:
    // 0x321120: 0xfc450008  sd          $a1, 0x8($v0)
    ctx->pc = 0x321120u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 5));
label_321124:
    // 0x321124: 0x27c20690  addiu       $v0, $fp, 0x690
    ctx->pc = 0x321124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1680));
label_321128:
    // 0x321128: 0x8fc405e8  lw          $a0, 0x5E8($fp)
    ctx->pc = 0x321128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1512)));
label_32112c:
    // 0x32112c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x32112cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_321130:
    // 0x321130: 0x8fc605ec  lw          $a2, 0x5EC($fp)
    ctx->pc = 0x321130u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1516)));
label_321134:
    // 0x321134: 0x8fc705f0  lw          $a3, 0x5F0($fp)
    ctx->pc = 0x321134u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1520)));
label_321138:
    // 0x321138: 0xc0c82ba  jal         func_320AE8
label_32113c:
    if (ctx->pc == 0x32113Cu) {
        ctx->pc = 0x32113Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321138u;
        // 0x32113c: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321140u;
        goto label_321140;
    }
    ctx->pc = 0x321138u;
    SET_GPR_U32(ctx, 31, 0x321140u);
    ctx->pc = 0x32113Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321138u;
    // 0x32113c: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320AE8u, 0x321138u, 0x321140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321140u;
label_321140:
    // 0x321140: 0x8fc605e0  lw          $a2, 0x5E0($fp)
    ctx->pc = 0x321140u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1504)));
label_321144:
    // 0x321144: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x321144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
label_321148:
    // 0x321148: 0x8fc805ec  lw          $t0, 0x5EC($fp)
    ctx->pc = 0x321148u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1516)));
label_32114c:
    // 0x32114c: 0x24651170  addiu       $a1, $v1, 0x1170
    ctx->pc = 0x32114cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4464));
label_321150:
    // 0x321150: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x321150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_321154:
    // 0x321154: 0x27c40690  addiu       $a0, $fp, 0x690
    ctx->pc = 0x321154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 1680));
label_321158:
    // 0x321158: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x321158u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_32115c:
    // 0x32115c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x32115cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_321160:
    // 0x321160: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x321160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_321164:
    // 0x321164: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x321164u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_321168:
    // 0x321168: 0x10000003  b           . + 4 + (0x3 << 2)
label_32116c:
    if (ctx->pc == 0x32116Cu) {
        ctx->pc = 0x32116Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321168u;
        // 0x32116c: 0x8fc205e8  lw          $v0, 0x5E8($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1512)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321170u;
        goto label_321170;
    }
    ctx->pc = 0x321168u;
    {
        const bool branch_taken_0x321168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32116Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321168u;
        // 0x32116c: 0x8fc205e8  lw          $v0, 0x5E8($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321168) {
            ctx->pc = 0x321178u;
            goto label_321178;
        }
    }
    ctx->pc = 0x321170u;
label_321170:
    // 0x321170: 0x800008  jr          $a0
label_321174:
    if (ctx->pc == 0x321174u) {
        ctx->pc = 0x321174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321170u;
        // 0x321174: 0x3a3e821  addu        $sp, $sp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321178u;
        goto label_321178;
    }
    ctx->pc = 0x321170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = 0x321174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321170u;
        // 0x321174: 0x3a3e821  addu        $sp, $sp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321170u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x321178u;
label_321178:
    // 0x321178: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x321178u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_32117c:
    // 0x32117c: 0xdfbf0690  ld          $ra, 0x690($sp)
    ctx->pc = 0x32117cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1680)));
label_321180:
    // 0x321180: 0xdfbe0680  ld          $fp, 0x680($sp)
    ctx->pc = 0x321180u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 1664)));
label_321184:
    // 0x321184: 0xdfb70670  ld          $s7, 0x670($sp)
    ctx->pc = 0x321184u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 1648)));
label_321188:
    // 0x321188: 0xdfb60660  ld          $s6, 0x660($sp)
    ctx->pc = 0x321188u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 1632)));
label_32118c:
    // 0x32118c: 0xdfb50650  ld          $s5, 0x650($sp)
    ctx->pc = 0x32118cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1616)));
label_321190:
    // 0x321190: 0xdfb40640  ld          $s4, 0x640($sp)
    ctx->pc = 0x321190u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1600)));
label_321194:
    // 0x321194: 0xdfb30630  ld          $s3, 0x630($sp)
    ctx->pc = 0x321194u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1584)));
label_321198:
    // 0x321198: 0xdfb20620  ld          $s2, 0x620($sp)
    ctx->pc = 0x321198u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1568)));
label_32119c:
    // 0x32119c: 0xdfb10610  ld          $s1, 0x610($sp)
    ctx->pc = 0x32119cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1552)));
label_3211a0:
    // 0x3211a0: 0xdfb00600  ld          $s0, 0x600($sp)
    ctx->pc = 0x3211a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1536)));
label_3211a4:
    // 0x3211a4: 0xc7bf06f8  lwc1        $f31, 0x6F8($sp)
    ctx->pc = 0x3211a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
label_3211a8:
    // 0x3211a8: 0xc7be06f0  lwc1        $f30, 0x6F0($sp)
    ctx->pc = 0x3211a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
label_3211ac:
    // 0x3211ac: 0xc7bd06e8  lwc1        $f29, 0x6E8($sp)
    ctx->pc = 0x3211acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
label_3211b0:
    // 0x3211b0: 0xc7bc06e0  lwc1        $f28, 0x6E0($sp)
    ctx->pc = 0x3211b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_3211b4:
    // 0x3211b4: 0xc7bb06d8  lwc1        $f27, 0x6D8($sp)
    ctx->pc = 0x3211b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_3211b8:
    // 0x3211b8: 0xc7ba06d0  lwc1        $f26, 0x6D0($sp)
    ctx->pc = 0x3211b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_3211bc:
    // 0x3211bc: 0xc7b906c8  lwc1        $f25, 0x6C8($sp)
    ctx->pc = 0x3211bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_3211c0:
    // 0x3211c0: 0xc7b806c0  lwc1        $f24, 0x6C0($sp)
    ctx->pc = 0x3211c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_3211c4:
    // 0x3211c4: 0xc7b706b8  lwc1        $f23, 0x6B8($sp)
    ctx->pc = 0x3211c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3211c8:
    // 0x3211c8: 0xc7b606b0  lwc1        $f22, 0x6B0($sp)
    ctx->pc = 0x3211c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3211cc:
    // 0x3211cc: 0xc7b506a8  lwc1        $f21, 0x6A8($sp)
    ctx->pc = 0x3211ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3211d0:
    // 0x3211d0: 0xc7b406a0  lwc1        $f20, 0x6A0($sp)
    ctx->pc = 0x3211d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3211d4:
    // 0x3211d4: 0x3e00008  jr          $ra
label_3211d8:
    if (ctx->pc == 0x3211D8u) {
        ctx->pc = 0x3211D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3211D4u;
        // 0x3211d8: 0x27bd0700  addiu       $sp, $sp, 0x700 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1792));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3211DCu;
        goto label_3211dc;
    }
    ctx->pc = 0x3211D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3211D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3211D4u;
        // 0x3211d8: 0x27bd0700  addiu       $sp, $sp, 0x700 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1792));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3211D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3211DCu;
label_3211dc:
    // 0x3211dc: 0x0  nop
    ctx->pc = 0x3211dcu;
    // NOP
    ctx->pc = 0x3211e0u;
}
