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

// Function: func_002873B8
// Address: 0x2873b8 - 0x287e50
void func_002873B8_0x2873b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002873B8_0x2873b8");
#endif

    switch (ctx->pc) {
        case 0x2873e0u: goto label_2873e0;
        case 0x2873f4u: goto label_2873f4;
        case 0x287470u: goto label_287470;
        case 0x287484u: goto label_287484;
        case 0x28748cu: goto label_28748c;
        case 0x287494u: goto label_287494;
        case 0x28750cu: goto label_28750c;
        case 0x287560u: goto label_287560;
        case 0x287594u: goto label_287594;
        case 0x2875bcu: goto label_2875bc;
        case 0x2875c4u: goto label_2875c4;
        case 0x2875f8u: goto label_2875f8;
        case 0x287608u: goto label_287608;
        case 0x287620u: goto label_287620;
        case 0x287628u: goto label_287628;
        case 0x287630u: goto label_287630;
        case 0x287638u: goto label_287638;
        case 0x287644u: goto label_287644;
        case 0x2876d8u: goto label_2876d8;
        case 0x28773cu: goto label_28773c;
        case 0x28778cu: goto label_28778c;
        case 0x287794u: goto label_287794;
        case 0x2877ecu: goto label_2877ec;
        case 0x28780cu: goto label_28780c;
        case 0x287814u: goto label_287814;
        case 0x28781cu: goto label_28781c;
        case 0x2878a4u: goto label_2878a4;
        case 0x2878f8u: goto label_2878f8;
        case 0x28792cu: goto label_28792c;
        case 0x287954u: goto label_287954;
        case 0x287968u: goto label_287968;
        case 0x287978u: goto label_287978;
        case 0x287984u: goto label_287984;
        case 0x28799cu: goto label_28799c;
        case 0x2879a4u: goto label_2879a4;
        case 0x2879acu: goto label_2879ac;
        case 0x2879b4u: goto label_2879b4;
        case 0x287a20u: goto label_287a20;
        case 0x287a34u: goto label_287a34;
        case 0x287a70u: goto label_287a70;
        case 0x287aacu: goto label_287aac;
        case 0x287aecu: goto label_287aec;
        case 0x287b30u: goto label_287b30;
        case 0x287b44u: goto label_287b44;
        case 0x287b88u: goto label_287b88;
        case 0x287b9cu: goto label_287b9c;
        case 0x287bbcu: goto label_287bbc;
        case 0x287bccu: goto label_287bcc;
        case 0x287bd4u: goto label_287bd4;
        case 0x287bdcu: goto label_287bdc;
        case 0x287be4u: goto label_287be4;
        case 0x287c18u: goto label_287c18;
        case 0x287c44u: goto label_287c44;
        case 0x287c60u: goto label_287c60;
        case 0x287c68u: goto label_287c68;
        case 0x287c9cu: goto label_287c9c;
        case 0x287cc4u: goto label_287cc4;
        case 0x287cccu: goto label_287ccc;
        case 0x287cd4u: goto label_287cd4;
        case 0x287d14u: goto label_287d14;
        case 0x287d90u: goto label_287d90;
        case 0x287dccu: goto label_287dcc;
        case 0x287e00u: goto label_287e00;
        case 0x287e14u: goto label_287e14;
        case 0x287e28u: goto label_287e28;
        case 0x287e30u: goto label_287e30;
        default: break;
    }

    ctx->pc = 0x2873b8u;

    // 0x2873b8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2873b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2873bc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2873bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2873c0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2873c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2873c4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2873c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2873c8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2873c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2873cc: 0x3c100046  lui         $s0, 0x46
    ctx->pc = 0x2873ccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
    // 0x2873d0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2873d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2873d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2873d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2873d8: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2873D8u;
    SET_GPR_U32(ctx, 31, 0x2873E0u);
    ctx->pc = 0x2873DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2873D8u;
    // 0x2873dc: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2873D8u, 0x2873E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2873E0u;
label_2873e0:
    // 0x2873e0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2873e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2873e4: 0x26042fc0  addiu       $a0, $s0, 0x2FC0
    ctx->pc = 0x2873e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12224));
    // 0x2873e8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2873e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2873ec: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x2873ECu;
    SET_GPR_U32(ctx, 31, 0x2873F4u);
    ctx->pc = 0x2873F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2873ECu;
    // 0x2873f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x2873ECu, 0x2873F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2873F4u;
label_2873f4:
    // 0x2873f4: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x2873f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x2873f8: 0x26431590  addiu       $v1, $s2, 0x1590
    ctx->pc = 0x2873f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 5520));
    // 0x2873fc: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2873FCu;
    {
        const bool branch_taken_0x2873fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x287400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2873FCu;
        // 0x287400: 0xa2401604  sb          $zero, 0x1604($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 5636), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2873fc) {
            ctx->pc = 0x28741Cu;
            goto label_28741c;
        }
    }
    ctx->pc = 0x287404u;
    // 0x287404: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x287404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287408: 0xe6401590  swc1        $f0, 0x1590($s2)
    ctx->pc = 0x287408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 5520), bits); }
    // 0x28740c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x28740cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x287410: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x287410u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x287414: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x287414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287418: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x287418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_28741c:
    // 0x28741c: 0x924302f6  lbu         $v1, 0x2F6($s2)
    ctx->pc = 0x28741cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x287420: 0x2c620016  sltiu       $v0, $v1, 0x16
    ctx->pc = 0x287420u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
    // 0x287424: 0x10400282  beqz        $v0, . + 4 + (0x282 << 2)
    ctx->pc = 0x287424u;
    {
        const bool branch_taken_0x287424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287424u;
        // 0x287428: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287424) {
            ctx->pc = 0x287E30u;
            goto label_287e30;
        }
    }
    ctx->pc = 0x28742Cu;
    // 0x28742c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28742cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x287430: 0x24428c10  addiu       $v0, $v0, -0x73F0
    ctx->pc = 0x287430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937616));
    // 0x287434: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x287434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x287438: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x287438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28743c: 0x800008  jr          $a0
    ctx->pc = 0x28743Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x287444u: goto label_287444;
            case 0x28747Cu: goto label_28747c;
            case 0x2874ACu: goto label_2874ac;
            case 0x2875E4u: goto label_2875e4;
            case 0x287710u: goto label_287710;
            case 0x287748u: goto label_287748;
            case 0x2877C0u: goto label_2877c0;
            case 0x287804u: goto label_287804;
            case 0x287844u: goto label_287844;
            case 0x287960u: goto label_287960;
            case 0x287A44u: goto label_287a44;
            case 0x287AB8u: goto label_287ab8;
            case 0x287B04u: goto label_287b04;
            case 0x287B3Cu: goto label_287b3c;
            case 0x287B5Cu: goto label_287b5c;
            case 0x287B94u: goto label_287b94;
            case 0x287BECu: goto label_287bec;
            case 0x287C24u: goto label_287c24;
            case 0x287C70u: goto label_287c70;
            case 0x287CB0u: goto label_287cb0;
            case 0x287DD4u: goto label_287dd4;
            case 0x287E0Cu: goto label_287e0c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28743Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x287444u;
label_287444:
    // 0x287444: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x287444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x287448: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x287448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28744c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28744cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x287450: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x287450u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x287454: 0x8c450140  lw          $a1, 0x140($v0)
    ctx->pc = 0x287454u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 320)));
    // 0x287458: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x287458u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28745c: 0x8c460144  lw          $a2, 0x144($v0)
    ctx->pc = 0x28745cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 324)));
    // 0x287460: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x287460u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287464: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x287464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x287468: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x287468u;
    SET_GPR_U32(ctx, 31, 0x287470u);
    ctx->pc = 0x28746Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287468u;
    // 0x28746c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x287468u, 0x287470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287470u;
label_287470:
    // 0x287470: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x287470u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x287474: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x287474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x287478: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x287478u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_28747c:
    // 0x28747c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x28747Cu;
    SET_GPR_U32(ctx, 31, 0x287484u);
    ctx->pc = 0x287480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28747Cu;
    // 0x287480: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x28747Cu, 0x287484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287484u;
label_287484:
    // 0x287484: 0xc0528ac  jal         func_14A2B0
    ctx->pc = 0x287484u;
    SET_GPR_U32(ctx, 31, 0x28748Cu);
    ctx->pc = 0x287488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287484u;
    // 0x287488: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A2B0u, 0x287484u, 0x28748Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28748Cu;
label_28748c:
    // 0x28748c: 0xc0b6a6e  jal         func_2DA9B8
    ctx->pc = 0x28748Cu;
    SET_GPR_U32(ctx, 31, 0x287494u);
    ctx->pc = 0x287490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28748Cu;
    // 0x287490: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA9B8u, 0x28748Cu, 0x287494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287494u;
label_287494:
    // 0x287494: 0x8e4215b0  lw          $v0, 0x15B0($s2)
    ctx->pc = 0x287494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5552)));
    // 0x287498: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x287498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x28749c: 0x10400265  beqz        $v0, . + 4 + (0x265 << 2)
    ctx->pc = 0x28749Cu;
    {
        const bool branch_taken_0x28749c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2874A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28749Cu;
        // 0x2874a0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28749c) {
            ctx->pc = 0x287E34u;
            goto label_287e34;
        }
    }
    ctx->pc = 0x2874A4u;
    // 0x2874a4: 0x10000164  b           . + 4 + (0x164 << 2)
    ctx->pc = 0x2874A4u;
    {
        const bool branch_taken_0x2874a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2874A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2874A4u;
        // 0x2874a8: 0x924202f6  lbu         $v0, 0x2F6($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2874a4) {
            ctx->pc = 0x287A38u;
            goto label_287a38;
        }
    }
    ctx->pc = 0x2874ACu;
label_2874ac:
    // 0x2874ac: 0x8642054a  lh          $v0, 0x54A($s2)
    ctx->pc = 0x2874acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1354)));
    // 0x2874b0: 0x86430548  lh          $v1, 0x548($s2)
    ctx->pc = 0x2874b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1352)));
    // 0x2874b4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2874b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2874b8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2874B8u;
    {
        const bool branch_taken_0x2874b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2874BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2874B8u;
        // 0x2874bc: 0x240202a7  addiu       $v0, $zero, 0x2A7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 679));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2874b8) {
            ctx->pc = 0x2874F0u;
            goto label_2874f0;
        }
    }
    ctx->pc = 0x2874C0u;
    // 0x2874c0: 0x8e430564  lw          $v1, 0x564($s2)
    ctx->pc = 0x2874c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x2874c4: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2874C4u;
    {
        const bool branch_taken_0x2874c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2874C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2874C4u;
        // 0x2874c8: 0x240202ab  addiu       $v0, $zero, 0x2AB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 683));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2874c4) {
            ctx->pc = 0x287534u;
            goto label_287534;
        }
    }
    ctx->pc = 0x2874CCu;
    // 0x2874cc: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2874CCu;
    {
        const bool branch_taken_0x2874cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2874D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2874CCu;
        // 0x2874d0: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2874cc) {
            ctx->pc = 0x287534u;
            goto label_287534;
        }
    }
    ctx->pc = 0x2874D4u;
    // 0x2874d4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2874d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2874d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2874d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2874dc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2874dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2874e0: 0x8c4500b8  lw          $a1, 0xB8($v0)
    ctx->pc = 0x2874e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x2874e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2874e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2874e8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2874E8u;
    {
        const bool branch_taken_0x2874e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2874ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2874E8u;
        // 0x2874ec: 0x8c4600bc  lw          $a2, 0xBC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2874e8) {
            ctx->pc = 0x287550u;
            goto label_287550;
        }
    }
    ctx->pc = 0x2874F0u;
label_2874f0:
    // 0x2874f0: 0x8e430564  lw          $v1, 0x564($s2)
    ctx->pc = 0x2874f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x2874f4: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2874F4u;
    {
        const bool branch_taken_0x2874f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2874F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2874F4u;
        // 0x2874f8: 0x240202ab  addiu       $v0, $zero, 0x2AB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 683));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2874f4) {
            ctx->pc = 0x287568u;
            goto label_287568;
        }
    }
    ctx->pc = 0x2874FCu;
    // 0x2874fc: 0x5062001b  beql        $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2874FCu;
    {
        const bool branch_taken_0x2874fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2874fc) {
            ctx->pc = 0x287500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2874FCu;
            // 0x287500: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28756Cu;
            goto label_28756c;
        }
    }
    ctx->pc = 0x287504u;
    // 0x287504: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x287504u;
    SET_GPR_U32(ctx, 31, 0x28750Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x287504u, 0x28750Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28750Cu;
label_28750c:
    // 0x28750c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28750cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x287510: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x287510u;
    {
        const bool branch_taken_0x287510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287510u;
        // 0x287514: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287510) {
            ctx->pc = 0x287534u;
            goto label_287534;
        }
    }
    ctx->pc = 0x287518u;
    // 0x287518: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x287518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x28751c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28751cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287520: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x287520u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x287524: 0x8c450038  lw          $a1, 0x38($v0)
    ctx->pc = 0x287524u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x287528: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x287528u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28752c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28752Cu;
    {
        const bool branch_taken_0x28752c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28752Cu;
        // 0x287530: 0x8c46003c  lw          $a2, 0x3C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28752c) {
            ctx->pc = 0x287550u;
            goto label_287550;
        }
    }
    ctx->pc = 0x287534u;
label_287534:
    // 0x287534: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x287534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x287538: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x287538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28753c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28753cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x287540: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x287540u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x287544: 0x8c450040  lw          $a1, 0x40($v0)
    ctx->pc = 0x287544u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x287548: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x287548u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28754c: 0x8c460044  lw          $a2, 0x44($v0)
    ctx->pc = 0x28754cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_287550:
    // 0x287550: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x287550u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287554: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x287554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x287558: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x287558u;
    SET_GPR_U32(ctx, 31, 0x287560u);
    ctx->pc = 0x28755Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287558u;
    // 0x28755c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x287558u, 0x287560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287560u;
label_287560:
    // 0x287560: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x287560u;
    {
        const bool branch_taken_0x287560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287560u;
        // 0x287564: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287560) {
            ctx->pc = 0x287598u;
            goto label_287598;
        }
    }
    ctx->pc = 0x287568u;
label_287568:
    // 0x287568: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x287568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_28756c:
    // 0x28756c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28756cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287570: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x287570u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x287574: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x287574u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x287578: 0x8c450038  lw          $a1, 0x38($v0)
    ctx->pc = 0x287578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x28757c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28757cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287580: 0x8c46003c  lw          $a2, 0x3C($v0)
    ctx->pc = 0x287580u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x287584: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x287584u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287588: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x287588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x28758c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x28758Cu;
    SET_GPR_U32(ctx, 31, 0x287594u);
    ctx->pc = 0x287590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28758Cu;
    // 0x287590: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x28758Cu, 0x287594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287594u;
label_287594:
    // 0x287594: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x287594u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_287598:
    // 0x287598: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x287598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28759c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x28759cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x2875a0: 0x2406005a  addiu       $a2, $zero, 0x5A
    ctx->pc = 0x2875a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x2875a4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2875a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2875a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2875a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2875ac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2875acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2875b0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2875b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2875b4: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x2875B4u;
    SET_GPR_U32(ctx, 31, 0x2875BCu);
    ctx->pc = 0x2875B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2875B4u;
    // 0x2875b8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x2875B4u, 0x2875BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2875BCu;
label_2875bc:
    // 0x2875bc: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x2875BCu;
    SET_GPR_U32(ctx, 31, 0x2875C4u);
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x2875BCu, 0x2875C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2875C4u;
label_2875c4:
    // 0x2875c4: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2875c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2875c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2875c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2875cc: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x2875ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x2875d0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2875d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2875d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2875d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2875d8: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x2875d8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x2875dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2875dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2875e0: 0xe64015bc  swc1        $f0, 0x15BC($s2)
    ctx->pc = 0x2875e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 5564), bits); }
label_2875e4:
    // 0x2875e4: 0x265115a0  addiu       $s1, $s2, 0x15A0
    ctx->pc = 0x2875e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 5536));
    // 0x2875e8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2875e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2875ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2875ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2875f0: 0xc0a9d38  jal         func_2A74E0
    ctx->pc = 0x2875F0u;
    SET_GPR_U32(ctx, 31, 0x2875F8u);
    ctx->pc = 0x2875F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2875F0u;
    // 0x2875f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A74E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A74E0u, 0x2875F0u, 0x2875F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2875F8u;
label_2875f8:
    // 0x2875f8: 0x26501570  addiu       $s0, $s2, 0x1570
    ctx->pc = 0x2875f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 5488));
    // 0x2875fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2875fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287600: 0xc0a9f28  jal         func_2A7CA0
    ctx->pc = 0x287600u;
    SET_GPR_U32(ctx, 31, 0x287608u);
    ctx->pc = 0x287604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287600u;
    // 0x287604: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7CA0u, 0x287600u, 0x287608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287608u;
label_287608:
    // 0x287608: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x287608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x28760c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x28760cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x287610: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x287610u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x287614: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x287614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287618: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x287618u;
    SET_GPR_U32(ctx, 31, 0x287620u);
    ctx->pc = 0x28761Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287618u;
    // 0x28761c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x287618u, 0x287620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287620u;
label_287620:
    // 0x287620: 0xc055f06  jal         func_157C18
    ctx->pc = 0x287620u;
    SET_GPR_U32(ctx, 31, 0x287628u);
    ctx->pc = 0x287624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287620u;
    // 0x287624: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x287620u, 0x287628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287628u;
label_287628:
    // 0x287628: 0xc0528ac  jal         func_14A2B0
    ctx->pc = 0x287628u;
    SET_GPR_U32(ctx, 31, 0x287630u);
    ctx->pc = 0x28762Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287628u;
    // 0x28762c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A2B0u, 0x287628u, 0x287630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287630u;
label_287630:
    // 0x287630: 0xc0b6a6e  jal         func_2DA9B8
    ctx->pc = 0x287630u;
    SET_GPR_U32(ctx, 31, 0x287638u);
    ctx->pc = 0x287634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287630u;
    // 0x287634: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA9B8u, 0x287630u, 0x287638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287638u;
label_287638:
    // 0x287638: 0x8e4500f0  lw          $a1, 0xF0($s2)
    ctx->pc = 0x287638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x28763c: 0xc07dfac  jal         func_1F7EB0
    ctx->pc = 0x28763Cu;
    SET_GPR_U32(ctx, 31, 0x287644u);
    ctx->pc = 0x287640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28763Cu;
    // 0x287640: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x28763Cu, 0x287644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287644u;
label_287644:
    // 0x287644: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x287644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x287648: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x287648u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x28764c: 0x0  nop
    ctx->pc = 0x28764cu;
    // NOP
    // 0x287650: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x287650u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x287654: 0x0  nop
    ctx->pc = 0x287654u;
    // NOP
    // 0x287658: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x287658u;
    {
        const bool branch_taken_0x287658 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28765Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287658u;
        // 0x28765c: 0x8e4200f0  lw          $v0, 0xF0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287658) {
            ctx->pc = 0x28769Cu;
            goto label_28769c;
        }
    }
    ctx->pc = 0x287660u;
    // 0x287660: 0xc6421594  lwc1        $f2, 0x1594($s2)
    ctx->pc = 0x287660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x287664: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x287664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287668: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x287668u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28766c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x28766cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x287670: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x287670u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x287674: 0x0  nop
    ctx->pc = 0x287674u;
    // NOP
    // 0x287678: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x287678u;
    {
        const bool branch_taken_0x287678 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28767Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287678u;
        // 0x28767c: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x287678) {
            ctx->pc = 0x287684u;
            goto label_287684;
        }
    }
    ctx->pc = 0x287680u;
    // 0x287680: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x287680u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
label_287684:
    // 0x287684: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x287684u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x287688: 0x0  nop
    ctx->pc = 0x287688u;
    // NOP
    // 0x28768c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x28768Cu;
    {
        const bool branch_taken_0x28768c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x287690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28768Cu;
        // 0x287690: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28768c) {
            ctx->pc = 0x287698u;
            goto label_287698;
        }
    }
    ctx->pc = 0x287694u;
    // 0x287694: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x287694u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_287698:
    // 0x287698: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x287698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_28769c:
    // 0x28769c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x28769cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2876a0: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2876a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2876a4: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2876a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x2876a8: 0xc64c0104  lwc1        $f12, 0x104($s2)
    ctx->pc = 0x2876a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2876ac: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2876acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x2876b0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2876b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2876b4: 0x248464f0  addiu       $a0, $a0, 0x64F0
    ctx->pc = 0x2876b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    // 0x2876b8: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2876b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x2876bc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2876bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2876c0: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2876c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2876c4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2876c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2876c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2876c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2876cc: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2876ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2876d0: 0xc0a4404  jal         func_291010
    ctx->pc = 0x2876D0u;
    SET_GPR_U32(ctx, 31, 0x2876D8u);
    ctx->pc = 0x2876D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2876D0u;
    // 0x2876d4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291010u, 0x2876D0u, 0x2876D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2876D8u;
label_2876d8:
    // 0x2876d8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2876d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2876dc: 0x106001d5  beqz        $v1, . + 4 + (0x1D5 << 2)
    ctx->pc = 0x2876DCu;
    {
        const bool branch_taken_0x2876dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2876E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2876DCu;
        // 0x2876e0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2876dc) {
            ctx->pc = 0x287E34u;
            goto label_287e34;
        }
    }
    ctx->pc = 0x2876E4u;
    // 0x2876e4: 0x8c6200f0  lw          $v0, 0xF0($v1)
    ctx->pc = 0x2876e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x2876e8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2876e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2876ec: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2876ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2876f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2876f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2876f4: 0x0  nop
    ctx->pc = 0x2876f4u;
    // NOP
    // 0x2876f8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2876F8u;
    {
        const bool branch_taken_0x2876f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2876f8) {
            ctx->pc = 0x2876FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2876F8u;
            // 0x2876fc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287700u;
            goto label_287700;
        }
    }
    ctx->pc = 0x287700u;
label_287700:
    // 0x287700: 0x106001cb  beqz        $v1, . + 4 + (0x1CB << 2)
    ctx->pc = 0x287700u;
    {
        const bool branch_taken_0x287700 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x287704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287700u;
        // 0x287704: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287700) {
            ctx->pc = 0x287E30u;
            goto label_287e30;
        }
    }
    ctx->pc = 0x287708u;
    // 0x287708: 0x100001c9  b           . + 4 + (0x1C9 << 2)
    ctx->pc = 0x287708u;
    {
        const bool branch_taken_0x287708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28770Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287708u;
        // 0x28770c: 0xa24202f6  sb          $v0, 0x2F6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287708) {
            ctx->pc = 0x287E30u;
            goto label_287e30;
        }
    }
    ctx->pc = 0x287710u;
label_287710:
    // 0x287710: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x287710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x287714: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x287714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287718: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x287718u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28771c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x28771cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x287720: 0x8c450138  lw          $a1, 0x138($v0)
    ctx->pc = 0x287720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 312)));
    // 0x287724: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x287724u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287728: 0x8c46013c  lw          $a2, 0x13C($v0)
    ctx->pc = 0x287728u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 316)));
    // 0x28772c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x28772cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287730: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x287730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x287734: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x287734u;
    SET_GPR_U32(ctx, 31, 0x28773Cu);
    ctx->pc = 0x287738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287734u;
    // 0x287738: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x287734u, 0x28773Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28773Cu;
label_28773c:
    // 0x28773c: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x28773cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x287740: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x287740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x287744: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x287744u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_287748:
    // 0x287748: 0x3c01c118  lui         $at, 0xC118
    ctx->pc = 0x287748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49432 << 16));
    // 0x28774c: 0x3421ed91  ori         $at, $at, 0xED91
    ctx->pc = 0x28774cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60817);
    // 0x287750: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x287750u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x287754: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x287754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287758: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x287758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x28775c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28775cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x287760: 0x264505c0  addiu       $a1, $s2, 0x5C0
    ctx->pc = 0x287760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1472));
    // 0x287764: 0x3c0141c9  lui         $at, 0x41C9
    ctx->pc = 0x287764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16841 << 16));
    // 0x287768: 0x3421d2f2  ori         $at, $at, 0xD2F2
    ctx->pc = 0x287768u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)54002);
    // 0x28776c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28776cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287770: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x287770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x287774: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x287774u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x287778: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x287778u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28777c: 0xe64205c0  swc1        $f2, 0x5C0($s2)
    ctx->pc = 0x28777cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1472), bits); }
    // 0x287780: 0xe64105c4  swc1        $f1, 0x5C4($s2)
    ctx->pc = 0x287780u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1476), bits); }
    // 0x287784: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x287784u;
    SET_GPR_U32(ctx, 31, 0x28778Cu);
    ctx->pc = 0x287788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287784u;
    // 0x287788: 0xe64005c8  swc1        $f0, 0x5C8($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1480), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x287784u, 0x28778Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28778Cu;
label_28778c:
    // 0x28778c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x28778Cu;
    SET_GPR_U32(ctx, 31, 0x287794u);
    ctx->pc = 0x287790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28778Cu;
    // 0x287790: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x28778Cu, 0x287794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287794u;
label_287794:
    // 0x287794: 0x1040010f  beqz        $v0, . + 4 + (0x10F << 2)
    ctx->pc = 0x287794u;
    {
        const bool branch_taken_0x287794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x287794) {
            ctx->pc = 0x287BD4u;
            goto label_287bd4;
        }
    }
    ctx->pc = 0x28779Cu;
    // 0x28779c: 0x8e4215b0  lw          $v0, 0x15B0($s2)
    ctx->pc = 0x28779cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5552)));
    // 0x2877a0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2877a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2877a4: 0x924402f6  lbu         $a0, 0x2F6($s2)
    ctx->pc = 0x2877a4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x2877a8: 0x3463ff7f  ori         $v1, $v1, 0xFF7F
    ctx->pc = 0x2877a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65407);
    // 0x2877ac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2877acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2877b0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2877b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2877b4: 0xae4215b0  sw          $v0, 0x15B0($s2)
    ctx->pc = 0x2877b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5552), GPR_U32(ctx, 2));
    // 0x2877b8: 0x10000106  b           . + 4 + (0x106 << 2)
    ctx->pc = 0x2877B8u;
    {
        const bool branch_taken_0x2877b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2877BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2877B8u;
        // 0x2877bc: 0xa24402f6  sb          $a0, 0x2F6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2877b8) {
            ctx->pc = 0x287BD4u;
            goto label_287bd4;
        }
    }
    ctx->pc = 0x2877C0u;
label_2877c0:
    // 0x2877c0: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2877c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2877c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2877c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2877c8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2877c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2877cc: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x2877ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2877d0: 0x8c450140  lw          $a1, 0x140($v0)
    ctx->pc = 0x2877d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 320)));
    // 0x2877d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2877d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2877d8: 0x8c460144  lw          $a2, 0x144($v0)
    ctx->pc = 0x2877d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 324)));
    // 0x2877dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2877dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2877e0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2877e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2877e4: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2877E4u;
    SET_GPR_U32(ctx, 31, 0x2877ECu);
    ctx->pc = 0x2877E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2877E4u;
    // 0x2877e8: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2877E4u, 0x2877ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2877ECu;
label_2877ec:
    // 0x2877ec: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x2877ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x2877f0: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2877f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2877f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2877f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2877f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2877f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2877fc: 0xe6400600  swc1        $f0, 0x600($s2)
    ctx->pc = 0x2877fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1536), bits); }
    // 0x287800: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x287800u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_287804:
    // 0x287804: 0xc055f06  jal         func_157C18
    ctx->pc = 0x287804u;
    SET_GPR_U32(ctx, 31, 0x28780Cu);
    ctx->pc = 0x287808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287804u;
    // 0x287808: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x287804u, 0x28780Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28780Cu;
label_28780c:
    // 0x28780c: 0xc0528ac  jal         func_14A2B0
    ctx->pc = 0x28780Cu;
    SET_GPR_U32(ctx, 31, 0x287814u);
    ctx->pc = 0x287810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28780Cu;
    // 0x287810: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A2B0u, 0x28780Cu, 0x287814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287814u;
label_287814:
    // 0x287814: 0xc0b6a6e  jal         func_2DA9B8
    ctx->pc = 0x287814u;
    SET_GPR_U32(ctx, 31, 0x28781Cu);
    ctx->pc = 0x287818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287814u;
    // 0x287818: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA9B8u, 0x287814u, 0x28781Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28781Cu;
label_28781c:
    // 0x28781c: 0xc6400600  lwc1        $f0, 0x600($s2)
    ctx->pc = 0x28781cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287820: 0xc64105a8  lwc1        $f1, 0x5A8($s2)
    ctx->pc = 0x287820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x287824: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x287824u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x287828: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x287828u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28782c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x28782cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x287830: 0x0  nop
    ctx->pc = 0x287830u;
    // NOP
    // 0x287834: 0x4500017e  bc1f        . + 4 + (0x17E << 2)
    ctx->pc = 0x287834u;
    {
        const bool branch_taken_0x287834 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x287838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287834u;
        // 0x287838: 0xe6400600  swc1        $f0, 0x600($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x287834) {
            ctx->pc = 0x287E30u;
            goto label_287e30;
        }
    }
    ctx->pc = 0x28783Cu;
    // 0x28783c: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x28783Cu;
    {
        const bool branch_taken_0x28783c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28783Cu;
        // 0x287840: 0x924202f6  lbu         $v0, 0x2F6($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28783c) {
            ctx->pc = 0x287A38u;
            goto label_287a38;
        }
    }
    ctx->pc = 0x287844u;
label_287844:
    // 0x287844: 0x8642054a  lh          $v0, 0x54A($s2)
    ctx->pc = 0x287844u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1354)));
    // 0x287848: 0x86430548  lh          $v1, 0x548($s2)
    ctx->pc = 0x287848u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1352)));
    // 0x28784c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x28784cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x287850: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x287850u;
    {
        const bool branch_taken_0x287850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287850u;
        // 0x287854: 0x240202a7  addiu       $v0, $zero, 0x2A7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 679));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287850) {
            ctx->pc = 0x287888u;
            goto label_287888;
        }
    }
    ctx->pc = 0x287858u;
    // 0x287858: 0x8e430564  lw          $v1, 0x564($s2)
    ctx->pc = 0x287858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x28785c: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x28785Cu;
    {
        const bool branch_taken_0x28785c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x287860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28785Cu;
        // 0x287860: 0x240202ab  addiu       $v0, $zero, 0x2AB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 683));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28785c) {
            ctx->pc = 0x2878CCu;
            goto label_2878cc;
        }
    }
    ctx->pc = 0x287864u;
    // 0x287864: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x287864u;
    {
        const bool branch_taken_0x287864 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x287868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287864u;
        // 0x287868: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287864) {
            ctx->pc = 0x2878CCu;
            goto label_2878cc;
        }
    }
    ctx->pc = 0x28786Cu;
    // 0x28786c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x28786cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x287870: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x287870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287874: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x287874u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x287878: 0x8c4500b8  lw          $a1, 0xB8($v0)
    ctx->pc = 0x287878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x28787c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28787cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287880: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x287880u;
    {
        const bool branch_taken_0x287880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287880u;
        // 0x287884: 0x8c4600bc  lw          $a2, 0xBC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287880) {
            ctx->pc = 0x2878E8u;
            goto label_2878e8;
        }
    }
    ctx->pc = 0x287888u;
label_287888:
    // 0x287888: 0x8e430564  lw          $v1, 0x564($s2)
    ctx->pc = 0x287888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x28788c: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x28788Cu;
    {
        const bool branch_taken_0x28788c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x287890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28788Cu;
        // 0x287890: 0x240202ab  addiu       $v0, $zero, 0x2AB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 683));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28788c) {
            ctx->pc = 0x287900u;
            goto label_287900;
        }
    }
    ctx->pc = 0x287894u;
    // 0x287894: 0x5062001b  beql        $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x287894u;
    {
        const bool branch_taken_0x287894 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x287894) {
            ctx->pc = 0x287898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287894u;
            // 0x287898: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287904u;
            goto label_287904;
        }
    }
    ctx->pc = 0x28789Cu;
    // 0x28789c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x28789Cu;
    SET_GPR_U32(ctx, 31, 0x2878A4u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x28789Cu, 0x2878A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2878A4u;
label_2878a4:
    // 0x2878a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2878a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2878a8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2878A8u;
    {
        const bool branch_taken_0x2878a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2878ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2878A8u;
        // 0x2878ac: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2878a8) {
            ctx->pc = 0x2878CCu;
            goto label_2878cc;
        }
    }
    ctx->pc = 0x2878B0u;
    // 0x2878b0: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2878b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2878b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2878b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2878b8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2878b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2878bc: 0x8c450038  lw          $a1, 0x38($v0)
    ctx->pc = 0x2878bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x2878c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2878c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2878c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2878C4u;
    {
        const bool branch_taken_0x2878c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2878C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2878C4u;
        // 0x2878c8: 0x8c46003c  lw          $a2, 0x3C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2878c4) {
            ctx->pc = 0x2878E8u;
            goto label_2878e8;
        }
    }
    ctx->pc = 0x2878CCu;
label_2878cc:
    // 0x2878cc: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2878ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2878d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2878d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2878d4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2878d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2878d8: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x2878d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2878dc: 0x8c450040  lw          $a1, 0x40($v0)
    ctx->pc = 0x2878dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x2878e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2878e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2878e4: 0x8c460044  lw          $a2, 0x44($v0)
    ctx->pc = 0x2878e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_2878e8:
    // 0x2878e8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2878e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2878ec: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2878ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2878f0: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2878F0u;
    SET_GPR_U32(ctx, 31, 0x2878F8u);
    ctx->pc = 0x2878F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2878F0u;
    // 0x2878f4: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2878F0u, 0x2878F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2878F8u;
label_2878f8:
    // 0x2878f8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2878F8u;
    {
        const bool branch_taken_0x2878f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2878FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2878F8u;
        // 0x2878fc: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2878f8) {
            ctx->pc = 0x287930u;
            goto label_287930;
        }
    }
    ctx->pc = 0x287900u;
label_287900:
    // 0x287900: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x287900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_287904:
    // 0x287904: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x287904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287908: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x287908u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28790c: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x28790cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x287910: 0x8c450038  lw          $a1, 0x38($v0)
    ctx->pc = 0x287910u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x287914: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x287914u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287918: 0x8c46003c  lw          $a2, 0x3C($v0)
    ctx->pc = 0x287918u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x28791c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x28791cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287920: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x287920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x287924: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x287924u;
    SET_GPR_U32(ctx, 31, 0x28792Cu);
    ctx->pc = 0x287928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287924u;
    // 0x287928: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x287924u, 0x28792Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28792Cu;
label_28792c:
    // 0x28792c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x28792cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_287930:
    // 0x287930: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x287930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x287934: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x287934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x287938: 0x2406005a  addiu       $a2, $zero, 0x5A
    ctx->pc = 0x287938u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x28793c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x28793cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287940: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x287940u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287944: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x287944u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287948: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x287948u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28794c: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x28794Cu;
    SET_GPR_U32(ctx, 31, 0x287954u);
    ctx->pc = 0x287950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28794Cu;
    // 0x287950: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x28794Cu, 0x287954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287954u;
label_287954:
    // 0x287954: 0x924302f6  lbu         $v1, 0x2F6($s2)
    ctx->pc = 0x287954u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x287958: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x287958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28795c: 0xa24302f6  sb          $v1, 0x2F6($s2)
    ctx->pc = 0x28795cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 3));
label_287960:
    // 0x287960: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x287960u;
    SET_GPR_U32(ctx, 31, 0x287968u);
    ctx->pc = 0x287964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287960u;
    // 0x287964: 0x26501570  addiu       $s0, $s2, 0x1570 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 5488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x287960u, 0x287968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287968u;
label_287968:
    // 0x287968: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x287968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x28796c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28796cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x287970: 0xc0a9d38  jal         func_2A74E0
    ctx->pc = 0x287970u;
    SET_GPR_U32(ctx, 31, 0x287978u);
    ctx->pc = 0x287974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287970u;
    // 0x287974: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A74E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A74E0u, 0x287970u, 0x287978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287978u;
label_287978:
    // 0x287978: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x287978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28797c: 0xc0a9f28  jal         func_2A7CA0
    ctx->pc = 0x28797Cu;
    SET_GPR_U32(ctx, 31, 0x287984u);
    ctx->pc = 0x287980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28797Cu;
    // 0x287980: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7CA0u, 0x28797Cu, 0x287984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287984u;
label_287984:
    // 0x287984: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x287984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x287988: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x287988u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x28798c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x28798cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x287990: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x287990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287994: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x287994u;
    SET_GPR_U32(ctx, 31, 0x28799Cu);
    ctx->pc = 0x287998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287994u;
    // 0x287998: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x287994u, 0x28799Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28799Cu;
label_28799c:
    // 0x28799c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x28799Cu;
    SET_GPR_U32(ctx, 31, 0x2879A4u);
    ctx->pc = 0x2879A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28799Cu;
    // 0x2879a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x28799Cu, 0x2879A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2879A4u;
label_2879a4:
    // 0x2879a4: 0xc0528ac  jal         func_14A2B0
    ctx->pc = 0x2879A4u;
    SET_GPR_U32(ctx, 31, 0x2879ACu);
    ctx->pc = 0x2879A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2879A4u;
    // 0x2879a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A2B0u, 0x2879A4u, 0x2879ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2879ACu;
label_2879ac:
    // 0x2879ac: 0xc0b6a6e  jal         func_2DA9B8
    ctx->pc = 0x2879ACu;
    SET_GPR_U32(ctx, 31, 0x2879B4u);
    ctx->pc = 0x2879B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2879ACu;
    // 0x2879b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA9B8u, 0x2879ACu, 0x2879B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2879B4u;
label_2879b4:
    // 0x2879b4: 0xc6410618  lwc1        $f1, 0x618($s2)
    ctx->pc = 0x2879b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2879b8: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2879b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x2879bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2879bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2879c0: 0x0  nop
    ctx->pc = 0x2879c0u;
    // NOP
    // 0x2879c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2879c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2879c8: 0x0  nop
    ctx->pc = 0x2879c8u;
    // NOP
    // 0x2879cc: 0x45020119  bc1fl       . + 4 + (0x119 << 2)
    ctx->pc = 0x2879CCu;
    {
        const bool branch_taken_0x2879cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2879cc) {
            ctx->pc = 0x2879D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2879CCu;
            // 0x2879d0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287E34u;
            goto label_287e34;
        }
    }
    ctx->pc = 0x2879D4u;
    // 0x2879d4: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x2879d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x2879d8: 0xc6421594  lwc1        $f2, 0x1594($s2)
    ctx->pc = 0x2879d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2879dc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2879dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2879e0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2879e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2879e4: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2879e4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2879e8: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2879e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2879ec: 0x0  nop
    ctx->pc = 0x2879ecu;
    // NOP
    // 0x2879f0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2879F0u;
    {
        const bool branch_taken_0x2879f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2879F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2879F0u;
        // 0x2879f4: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2879f0) {
            ctx->pc = 0x2879FCu;
            goto label_2879fc;
        }
    }
    ctx->pc = 0x2879F8u;
    // 0x2879f8: 0x46001047  neg.s       $f1, $f2
    ctx->pc = 0x2879f8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[2]);
label_2879fc:
    // 0x2879fc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2879fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x287a00: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x287a00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287a04: 0x0  nop
    ctx->pc = 0x287a04u;
    // NOP
    // 0x287a08: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x287a08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x287a0c: 0x0  nop
    ctx->pc = 0x287a0cu;
    // NOP
    // 0x287a10: 0x45000108  bc1f        . + 4 + (0x108 << 2)
    ctx->pc = 0x287A10u;
    {
        const bool branch_taken_0x287a10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x287A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287A10u;
        // 0x287a14: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287a10) {
            ctx->pc = 0x287E34u;
            goto label_287e34;
        }
    }
    ctx->pc = 0x287A18u;
    // 0x287a18: 0xc0a252e  jal         func_2894B8
    ctx->pc = 0x287A18u;
    SET_GPR_U32(ctx, 31, 0x287A20u);
    ctx->pc = 0x287A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287A18u;
    // 0x287a1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2894B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2894B8u, 0x287A18u, 0x287A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287A20u;
label_287a20:
    // 0x287a20: 0x10400103  beqz        $v0, . + 4 + (0x103 << 2)
    ctx->pc = 0x287A20u;
    {
        const bool branch_taken_0x287a20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287A20u;
        // 0x287a24: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287a20) {
            ctx->pc = 0x287E30u;
            goto label_287e30;
        }
    }
    ctx->pc = 0x287A28u;
    // 0x287a28: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x287a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287a2c: 0xc04a5c6  jal         func_129718
    ctx->pc = 0x287A2Cu;
    SET_GPR_U32(ctx, 31, 0x287A34u);
    ctx->pc = 0x287A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287A2Cu;
    // 0x287a30: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129718u, 0x287A2Cu, 0x287A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287A34u;
label_287a34:
    // 0x287a34: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x287a34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
label_287a38:
    // 0x287a38: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x287a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x287a3c: 0x100000fc  b           . + 4 + (0xFC << 2)
    ctx->pc = 0x287A3Cu;
    {
        const bool branch_taken_0x287a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287A3Cu;
        // 0x287a40: 0xa24202f6  sb          $v0, 0x2F6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287a3c) {
            ctx->pc = 0x287E30u;
            goto label_287e30;
        }
    }
    ctx->pc = 0x287A44u;
label_287a44:
    // 0x287a44: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x287a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x287a48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x287a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287a4c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x287a4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x287a50: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x287a50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x287a54: 0x8c450150  lw          $a1, 0x150($v0)
    ctx->pc = 0x287a54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x287a58: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x287a58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287a5c: 0x8c460154  lw          $a2, 0x154($v0)
    ctx->pc = 0x287a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
    // 0x287a60: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x287a60u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287a64: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x287a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x287a68: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x287A68u;
    SET_GPR_U32(ctx, 31, 0x287A70u);
    ctx->pc = 0x287A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287A68u;
    // 0x287a6c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x287A68u, 0x287A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287A70u;
label_287a70:
    // 0x287a70: 0x8e4215b0  lw          $v0, 0x15B0($s2)
    ctx->pc = 0x287a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5552)));
    // 0x287a74: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x287a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x287a78: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x287a78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x287a7c: 0xa643056e  sh          $v1, 0x56E($s2)
    ctx->pc = 0x287a7cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1390), (uint16_t)GPR_U32(ctx, 3));
    // 0x287a80: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x287a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x287a84: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x287a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x287a88: 0xae4215b0  sw          $v0, 0x15B0($s2)
    ctx->pc = 0x287a88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5552), GPR_U32(ctx, 2));
    // 0x287a8c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x287a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x287a90: 0x24060033  addiu       $a2, $zero, 0x33
    ctx->pc = 0x287a90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x287a94: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x287a94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287a98: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x287a98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287a9c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x287a9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287aa0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x287aa0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287aa4: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x287AA4u;
    SET_GPR_U32(ctx, 31, 0x287AACu);
    ctx->pc = 0x287AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287AA4u;
    // 0x287aa8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x287AA4u, 0x287AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287AACu;
label_287aac:
    // 0x287aac: 0x924302f6  lbu         $v1, 0x2F6($s2)
    ctx->pc = 0x287aacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x287ab0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x287ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x287ab4: 0xa24302f6  sb          $v1, 0x2F6($s2)
    ctx->pc = 0x287ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 3));
label_287ab8:
    // 0x287ab8: 0x8642056e  lh          $v0, 0x56E($s2)
    ctx->pc = 0x287ab8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1390)));
    // 0x287abc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x287ABCu;
    {
        const bool branch_taken_0x287abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287ABCu;
        // 0x287ac0: 0x9643056e  lhu         $v1, 0x56E($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1390)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287abc) {
            ctx->pc = 0x287AE4u;
            goto label_287ae4;
        }
    }
    ctx->pc = 0x287AC4u;
    // 0x287ac4: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x287ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x287ac8: 0x26640550  addiu       $a0, $s3, 0x550
    ctx->pc = 0x287ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1360));
    // 0x287acc: 0xa642056e  sh          $v0, 0x56E($s2)
    ctx->pc = 0x287accu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1390), (uint16_t)GPR_U32(ctx, 2));
    // 0x287ad0: 0x8e4300f0  lw          $v1, 0xF0($s2)
    ctx->pc = 0x287ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x287ad4: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x287ad4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x287ad8: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x287ad8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x287adc: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x287adcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x287ae0: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x287ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_287ae4:
    // 0x287ae4: 0xc055f06  jal         func_157C18
    ctx->pc = 0x287AE4u;
    SET_GPR_U32(ctx, 31, 0x287AECu);
    ctx->pc = 0x287AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287AE4u;
    // 0x287ae8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x287AE4u, 0x287AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287AECu;
label_287aec:
    // 0x287aec: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x287AECu;
    {
        const bool branch_taken_0x287aec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x287aec) {
            ctx->pc = 0x287BD4u;
            goto label_287bd4;
        }
    }
    ctx->pc = 0x287AF4u;
    // 0x287af4: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x287af4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x287af8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x287af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x287afc: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x287AFCu;
    {
        const bool branch_taken_0x287afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287AFCu;
        // 0x287b00: 0xa24202f6  sb          $v0, 0x2F6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287afc) {
            ctx->pc = 0x287BD4u;
            goto label_287bd4;
        }
    }
    ctx->pc = 0x287B04u;
label_287b04:
    // 0x287b04: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x287b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x287b08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x287b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287b0c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x287b0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x287b10: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x287b10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x287b14: 0x8c450158  lw          $a1, 0x158($v0)
    ctx->pc = 0x287b14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 344)));
    // 0x287b18: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x287b18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287b1c: 0x8c46015c  lw          $a2, 0x15C($v0)
    ctx->pc = 0x287b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 348)));
    // 0x287b20: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x287b20u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287b24: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x287b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x287b28: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x287B28u;
    SET_GPR_U32(ctx, 31, 0x287B30u);
    ctx->pc = 0x287B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287B28u;
    // 0x287b2c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x287B28u, 0x287B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287B30u;
label_287b30:
    // 0x287b30: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x287b30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x287b34: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x287b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x287b38: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x287b38u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_287b3c:
    // 0x287b3c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x287B3Cu;
    SET_GPR_U32(ctx, 31, 0x287B44u);
    ctx->pc = 0x287B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287B3Cu;
    // 0x287b40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x287B3Cu, 0x287B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287B44u;
label_287b44:
    // 0x287b44: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x287B44u;
    {
        const bool branch_taken_0x287b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x287b44) {
            ctx->pc = 0x287BD4u;
            goto label_287bd4;
        }
    }
    ctx->pc = 0x287B4Cu;
    // 0x287b4c: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x287b4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x287b50: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x287b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x287b54: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x287B54u;
    {
        const bool branch_taken_0x287b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287B54u;
        // 0x287b58: 0xa24202f6  sb          $v0, 0x2F6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287b54) {
            ctx->pc = 0x287BD4u;
            goto label_287bd4;
        }
    }
    ctx->pc = 0x287B5Cu;
label_287b5c:
    // 0x287b5c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x287b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x287b60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x287b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287b64: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x287b64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x287b68: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x287b68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x287b6c: 0x8c4500e0  lw          $a1, 0xE0($v0)
    ctx->pc = 0x287b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 224)));
    // 0x287b70: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x287b70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287b74: 0x8c4600e4  lw          $a2, 0xE4($v0)
    ctx->pc = 0x287b74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
    // 0x287b78: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x287b78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287b7c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x287b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x287b80: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x287B80u;
    SET_GPR_U32(ctx, 31, 0x287B88u);
    ctx->pc = 0x287B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287B80u;
    // 0x287b84: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x287B80u, 0x287B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287B88u;
label_287b88:
    // 0x287b88: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x287b88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x287b8c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x287b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x287b90: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x287b90u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_287b94:
    // 0x287b94: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x287B94u;
    SET_GPR_U32(ctx, 31, 0x287B9Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x287B94u, 0x287B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287B9Cu;
label_287b9c:
    // 0x287b9c: 0xc64005a8  lwc1        $f0, 0x5A8($s2)
    ctx->pc = 0x287b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287ba0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x287ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287ba4: 0x3c013d49  lui         $at, 0x3D49
    ctx->pc = 0x287ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15689 << 16));
    // 0x287ba8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x287ba8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x287bac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x287bacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x287bb0: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x287bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x287bb4: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x287BB4u;
    SET_GPR_U32(ctx, 31, 0x287BBCu);
    ctx->pc = 0x287BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287BB4u;
    // 0x287bb8: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x287BB4u, 0x287BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287BBCu;
label_287bbc:
    // 0x287bbc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x287bbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287bc0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x287bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x287bc4: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x287BC4u;
    SET_GPR_U32(ctx, 31, 0x287BCCu);
    ctx->pc = 0x287BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287BC4u;
    // 0x287bc8: 0x26242fc0  addiu       $a0, $s1, 0x2FC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x287BC4u, 0x287BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287BCCu;
label_287bcc:
    // 0x287bcc: 0xc055f06  jal         func_157C18
    ctx->pc = 0x287BCCu;
    SET_GPR_U32(ctx, 31, 0x287BD4u);
    ctx->pc = 0x287BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287BCCu;
    // 0x287bd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x287BCCu, 0x287BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287BD4u;
label_287bd4:
    // 0x287bd4: 0xc0528ac  jal         func_14A2B0
    ctx->pc = 0x287BD4u;
    SET_GPR_U32(ctx, 31, 0x287BDCu);
    ctx->pc = 0x287BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287BD4u;
    // 0x287bd8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A2B0u, 0x287BD4u, 0x287BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287BDCu;
label_287bdc:
    // 0x287bdc: 0xc0b6a6e  jal         func_2DA9B8
    ctx->pc = 0x287BDCu;
    SET_GPR_U32(ctx, 31, 0x287BE4u);
    ctx->pc = 0x287BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287BDCu;
    // 0x287be0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA9B8u, 0x287BDCu, 0x287BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287BE4u;
label_287be4:
    // 0x287be4: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x287BE4u;
    {
        const bool branch_taken_0x287be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287BE4u;
        // 0x287be8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287be4) {
            ctx->pc = 0x287E34u;
            goto label_287e34;
        }
    }
    ctx->pc = 0x287BECu;
label_287bec:
    // 0x287bec: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x287becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x287bf0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x287bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287bf4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x287bf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x287bf8: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x287bf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x287bfc: 0x8c450048  lw          $a1, 0x48($v0)
    ctx->pc = 0x287bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x287c00: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x287c00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287c04: 0x8c46004c  lw          $a2, 0x4C($v0)
    ctx->pc = 0x287c04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x287c08: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x287c08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287c0c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x287c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x287c10: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x287C10u;
    SET_GPR_U32(ctx, 31, 0x287C18u);
    ctx->pc = 0x287C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287C10u;
    // 0x287c14: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x287C10u, 0x287C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287C18u;
label_287c18:
    // 0x287c18: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x287c18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x287c1c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x287c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x287c20: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x287c20u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_287c24:
    // 0x287c24: 0x8e4215b0  lw          $v0, 0x15B0($s2)
    ctx->pc = 0x287c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5552)));
    // 0x287c28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x287c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287c2c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x287c2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x287c30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x287c30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287c34: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x287c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x287c38: 0xe640054c  swc1        $f0, 0x54C($s2)
    ctx->pc = 0x287c38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1356), bits); }
    // 0x287c3c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x287C3Cu;
    SET_GPR_U32(ctx, 31, 0x287C44u);
    ctx->pc = 0x287C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287C3Cu;
    // 0x287c40: 0xae4215b0  sw          $v0, 0x15B0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 5552), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x287C3Cu, 0x287C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287C44u;
label_287c44:
    // 0x287c44: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x287C44u;
    {
        const bool branch_taken_0x287c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x287c44) {
            ctx->pc = 0x287C58u;
            goto label_287c58;
        }
    }
    ctx->pc = 0x287C4Cu;
    // 0x287c4c: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x287c4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x287c50: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x287c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x287c54: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x287c54u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_287c58:
    // 0x287c58: 0xc0528ac  jal         func_14A2B0
    ctx->pc = 0x287C58u;
    SET_GPR_U32(ctx, 31, 0x287C60u);
    ctx->pc = 0x287C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287C58u;
    // 0x287c5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A2B0u, 0x287C58u, 0x287C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287C60u;
label_287c60:
    // 0x287c60: 0xc0b6a6e  jal         func_2DA9B8
    ctx->pc = 0x287C60u;
    SET_GPR_U32(ctx, 31, 0x287C68u);
    ctx->pc = 0x287C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287C60u;
    // 0x287c64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA9B8u, 0x287C60u, 0x287C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287C68u;
label_287c68:
    // 0x287c68: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x287C68u;
    {
        const bool branch_taken_0x287c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287C68u;
        // 0x287c6c: 0xc64115bc  lwc1        $f1, 0x15BC($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x287c68) {
            ctx->pc = 0x287D70u;
            goto label_287d70;
        }
    }
    ctx->pc = 0x287C70u;
label_287c70:
    // 0x287c70: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x287c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x287c74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x287c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287c78: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x287c78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x287c7c: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x287c7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x287c80: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x287c80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x287c84: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x287c84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287c88: 0x8c46002c  lw          $a2, 0x2C($v0)
    ctx->pc = 0x287c88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x287c8c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x287c8cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287c90: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x287c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x287c94: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x287C94u;
    SET_GPR_U32(ctx, 31, 0x287C9Cu);
    ctx->pc = 0x287C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287C94u;
    // 0x287c98: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x287C94u, 0x287C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287C9Cu;
label_287c9c:
    // 0x287c9c: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x287c9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x287ca0: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x287ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x287ca4: 0xa6430568  sh          $v1, 0x568($s2)
    ctx->pc = 0x287ca4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1384), (uint16_t)GPR_U32(ctx, 3));
    // 0x287ca8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x287ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x287cac: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x287cacu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_287cb0:
    // 0x287cb0: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x287cb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x287cb4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x287cb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287cb8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x287cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287cbc: 0xc055f06  jal         func_157C18
    ctx->pc = 0x287CBCu;
    SET_GPR_U32(ctx, 31, 0x287CC4u);
    ctx->pc = 0x287CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287CBCu;
    // 0x287cc0: 0xe640054c  swc1        $f0, 0x54C($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1356), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x287CBCu, 0x287CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287CC4u;
label_287cc4:
    // 0x287cc4: 0xc0528ac  jal         func_14A2B0
    ctx->pc = 0x287CC4u;
    SET_GPR_U32(ctx, 31, 0x287CCCu);
    ctx->pc = 0x287CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287CC4u;
    // 0x287cc8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A2B0u, 0x287CC4u, 0x287CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287CCCu;
label_287ccc:
    // 0x287ccc: 0xc0b6a6e  jal         func_2DA9B8
    ctx->pc = 0x287CCCu;
    SET_GPR_U32(ctx, 31, 0x287CD4u);
    ctx->pc = 0x287CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287CCCu;
    // 0x287cd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA9B8u, 0x287CCCu, 0x287CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287CD4u;
label_287cd4:
    // 0x287cd4: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x287cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x287cd8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x287cd8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x287cdc: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x287cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x287ce0: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x287ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x287ce4: 0xc64c0104  lwc1        $f12, 0x104($s2)
    ctx->pc = 0x287ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x287ce8: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x287ce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x287cec: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x287cecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x287cf0: 0x248464f0  addiu       $a0, $a0, 0x64F0
    ctx->pc = 0x287cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    // 0x287cf4: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x287cf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x287cf8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x287cf8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x287cfc: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x287cfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x287d00: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x287d00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287d04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x287d04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287d08: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x287d08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x287d0c: 0xc0a4404  jal         func_291010
    ctx->pc = 0x287D0Cu;
    SET_GPR_U32(ctx, 31, 0x287D14u);
    ctx->pc = 0x287D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287D0Cu;
    // 0x287d10: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291010u, 0x287D0Cu, 0x287D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287D14u;
label_287d14:
    // 0x287d14: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x287d14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287d18: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x287D18u;
    {
        const bool branch_taken_0x287d18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x287d18) {
            ctx->pc = 0x287D1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287D18u;
            // 0x287d1c: 0x96420568  lhu         $v0, 0x568($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287D48u;
            goto label_287d48;
        }
    }
    ctx->pc = 0x287D20u;
    // 0x287d20: 0x8c6200f0  lw          $v0, 0xF0($v1)
    ctx->pc = 0x287d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x287d24: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x287d24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x287d28: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x287d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287d2c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x287d2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x287d30: 0x0  nop
    ctx->pc = 0x287d30u;
    // NOP
    // 0x287d34: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x287D34u;
    {
        const bool branch_taken_0x287d34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x287d34) {
            ctx->pc = 0x287D38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287D34u;
            // 0x287d38: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287D3Cu;
            goto label_287d3c;
        }
    }
    ctx->pc = 0x287D3Cu;
label_287d3c:
    // 0x287d3c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x287D3Cu;
    {
        const bool branch_taken_0x287d3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x287D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287D3Cu;
        // 0x287d40: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287d3c) {
            ctx->pc = 0x287D68u;
            goto label_287d68;
        }
    }
    ctx->pc = 0x287D44u;
    // 0x287d44: 0x96420568  lhu         $v0, 0x568($s2)
    ctx->pc = 0x287d44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1384)));
label_287d48:
    // 0x287d48: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x287d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x287d4c: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x287d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x287d50: 0x1c600006  bgtz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x287D50u;
    {
        const bool branch_taken_0x287d50 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x287D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287D50u;
        // 0x287d54: 0xa6420568  sh          $v0, 0x568($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 1384), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287d50) {
            ctx->pc = 0x287D6Cu;
            goto label_287d6c;
        }
    }
    ctx->pc = 0x287D58u;
    // 0x287d58: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x287d58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x287d5c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x287d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x287d60: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x287D60u;
    {
        const bool branch_taken_0x287d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287D60u;
        // 0x287d64: 0xa24202f6  sb          $v0, 0x2F6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287d60) {
            ctx->pc = 0x287D6Cu;
            goto label_287d6c;
        }
    }
    ctx->pc = 0x287D68u;
label_287d68:
    // 0x287d68: 0xa6420568  sh          $v0, 0x568($s2)
    ctx->pc = 0x287d68u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1384), (uint16_t)GPR_U32(ctx, 2));
label_287d6c:
    // 0x287d6c: 0xc64115bc  lwc1        $f1, 0x15BC($s2)
    ctx->pc = 0x287d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_287d70:
    // 0x287d70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x287d70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287d74: 0x0  nop
    ctx->pc = 0x287d74u;
    // NOP
    // 0x287d78: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x287d78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x287d7c: 0x0  nop
    ctx->pc = 0x287d7cu;
    // NOP
    // 0x287d80: 0x4500002c  bc1f        . + 4 + (0x2C << 2)
    ctx->pc = 0x287D80u;
    {
        const bool branch_taken_0x287d80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x287D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287D80u;
        // 0x287d84: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287d80) {
            ctx->pc = 0x287E34u;
            goto label_287e34;
        }
    }
    ctx->pc = 0x287D88u;
    // 0x287d88: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x287D88u;
    SET_GPR_U32(ctx, 31, 0x287D90u);
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x287D88u, 0x287D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287D90u;
label_287d90:
    // 0x287d90: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x287d90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x287d94: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x287d94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x287d98: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x287d98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x287d9c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x287d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x287da0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x287da0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287da4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x287da4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x287da8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x287da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x287dac: 0x2406005a  addiu       $a2, $zero, 0x5A
    ctx->pc = 0x287dacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x287db0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x287db0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287db4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x287db4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287db8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x287db8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287dbc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x287dbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x287dc0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x287dc0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287dc4: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x287DC4u;
    SET_GPR_U32(ctx, 31, 0x287DCCu);
    ctx->pc = 0x287DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287DC4u;
    // 0x287dc8: 0xe64015bc  swc1        $f0, 0x15BC($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 5564), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x287DC4u, 0x287DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287DCCu;
label_287dcc:
    // 0x287dcc: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x287DCCu;
    {
        const bool branch_taken_0x287dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287DCCu;
        // 0x287dd0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287dcc) {
            ctx->pc = 0x287E34u;
            goto label_287e34;
        }
    }
    ctx->pc = 0x287DD4u;
label_287dd4:
    // 0x287dd4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x287dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x287dd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x287dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287ddc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x287ddcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x287de0: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x287de0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x287de4: 0x8c450030  lw          $a1, 0x30($v0)
    ctx->pc = 0x287de4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x287de8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x287de8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287dec: 0x8c460034  lw          $a2, 0x34($v0)
    ctx->pc = 0x287decu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x287df0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x287df0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287df4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x287df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x287df8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x287DF8u;
    SET_GPR_U32(ctx, 31, 0x287E00u);
    ctx->pc = 0x287DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287DF8u;
    // 0x287dfc: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x287DF8u, 0x287E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287E00u;
label_287e00:
    // 0x287e00: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x287e00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x287e04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x287e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x287e08: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x287e08u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_287e0c:
    // 0x287e0c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x287E0Cu;
    SET_GPR_U32(ctx, 31, 0x287E14u);
    ctx->pc = 0x287E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287E0Cu;
    // 0x287e10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x287E0Cu, 0x287E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287E14u;
label_287e14:
    // 0x287e14: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x287E14u;
    {
        const bool branch_taken_0x287e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287E14u;
        // 0x287e18: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287e14) {
            ctx->pc = 0x287E20u;
            goto label_287e20;
        }
    }
    ctx->pc = 0x287E1Cu;
    // 0x287e1c: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x287e1cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_287e20:
    // 0x287e20: 0xc0528ac  jal         func_14A2B0
    ctx->pc = 0x287E20u;
    SET_GPR_U32(ctx, 31, 0x287E28u);
    ctx->pc = 0x287E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287E20u;
    // 0x287e24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A2B0u, 0x287E20u, 0x287E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287E28u;
label_287e28:
    // 0x287e28: 0xc0b6a6e  jal         func_2DA9B8
    ctx->pc = 0x287E28u;
    SET_GPR_U32(ctx, 31, 0x287E30u);
    ctx->pc = 0x287E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287E28u;
    // 0x287e2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA9B8u, 0x287E28u, 0x287E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287E30u;
label_287e30:
    // 0x287e30: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x287e30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_287e34:
    // 0x287e34: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x287e34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x287e38: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x287e38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x287e3c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x287e3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x287e40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x287e40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x287e44: 0x3e00008  jr          $ra
    ctx->pc = 0x287E44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287E44u;
        // 0x287e48: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287E44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x287E4Cu;
    // 0x287e4c: 0x0  nop
    ctx->pc = 0x287e4cu;
    // NOP
    ctx->pc = 0x287e50u;
}
