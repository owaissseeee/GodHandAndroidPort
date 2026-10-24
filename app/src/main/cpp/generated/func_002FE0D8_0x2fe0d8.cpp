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

// Function: func_002FE0D8
// Address: 0x2fe0d8 - 0x2fe8a0
void func_002FE0D8_0x2fe0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002FE0D8_0x2fe0d8");
#endif

    switch (ctx->pc) {
        case 0x2fe134u: goto label_2fe134;
        case 0x2fe16cu: goto label_2fe16c;
        case 0x2fe17cu: goto label_2fe17c;
        case 0x2fe18cu: goto label_2fe18c;
        case 0x2fe198u: goto label_2fe198;
        case 0x2fe1a8u: goto label_2fe1a8;
        case 0x2fe1d4u: goto label_2fe1d4;
        case 0x2fe1e4u: goto label_2fe1e4;
        case 0x2fe1f4u: goto label_2fe1f4;
        case 0x2fe200u: goto label_2fe200;
        case 0x2fe20cu: goto label_2fe20c;
        case 0x2fe238u: goto label_2fe238;
        case 0x2fe248u: goto label_2fe248;
        case 0x2fe258u: goto label_2fe258;
        case 0x2fe26cu: goto label_2fe26c;
        case 0x2fe278u: goto label_2fe278;
        case 0x2fe28cu: goto label_2fe28c;
        case 0x2fe29cu: goto label_2fe29c;
        case 0x2fe2c0u: goto label_2fe2c0;
        case 0x2fe2d8u: goto label_2fe2d8;
        case 0x2fe2f4u: goto label_2fe2f4;
        case 0x2fe39cu: goto label_2fe39c;
        case 0x2fe3d0u: goto label_2fe3d0;
        case 0x2fe3dcu: goto label_2fe3dc;
        case 0x2fe478u: goto label_2fe478;
        case 0x2fe48cu: goto label_2fe48c;
        case 0x2fe49cu: goto label_2fe49c;
        case 0x2fe4acu: goto label_2fe4ac;
        case 0x2fe4bcu: goto label_2fe4bc;
        case 0x2fe4ccu: goto label_2fe4cc;
        case 0x2fe4dcu: goto label_2fe4dc;
        case 0x2fe4ecu: goto label_2fe4ec;
        case 0x2fe4fcu: goto label_2fe4fc;
        case 0x2fe50cu: goto label_2fe50c;
        case 0x2fe518u: goto label_2fe518;
        case 0x2fe524u: goto label_2fe524;
        case 0x2fe530u: goto label_2fe530;
        case 0x2fe53cu: goto label_2fe53c;
        case 0x2fe5f8u: goto label_2fe5f8;
        case 0x2fe718u: goto label_2fe718;
        case 0x2fe728u: goto label_2fe728;
        case 0x2fe74cu: goto label_2fe74c;
        case 0x2fe758u: goto label_2fe758;
        default: break;
    }

    ctx->pc = 0x2fe0d8u;

    // 0x2fe0d8: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x2fe0d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
    // 0x2fe0dc: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x2fe0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x2fe0e0: 0x8c43aff0  lw          $v1, -0x5010($v0)
    ctx->pc = 0x2fe0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x2fe0e4: 0x7fb70150  sq          $s7, 0x150($sp)
    ctx->pc = 0x2fe0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 23));
    // 0x2fe0e8: 0x7fbe0140  sq          $fp, 0x140($sp)
    ctx->pc = 0x2fe0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 30));
    // 0x2fe0ec: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x2fe0ecu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe0f0: 0x7fb30190  sq          $s3, 0x190($sp)
    ctx->pc = 0x2fe0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 19));
    // 0x2fe0f4: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x2fe0f4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe0f8: 0x24650100  addiu       $a1, $v1, 0x100
    ctx->pc = 0x2fe0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x2fe0fc: 0x7fb001c0  sq          $s0, 0x1C0($sp)
    ctx->pc = 0x2fe0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 16));
    // 0x2fe100: 0x7fb101b0  sq          $s1, 0x1B0($sp)
    ctx->pc = 0x2fe100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 17));
    // 0x2fe104: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2fe104u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe108: 0x7fb201a0  sq          $s2, 0x1A0($sp)
    ctx->pc = 0x2fe108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 18));
    // 0x2fe10c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2fe10cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe110: 0x7fb40180  sq          $s4, 0x180($sp)
    ctx->pc = 0x2fe110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 20));
    // 0x2fe114: 0x7fb50170  sq          $s5, 0x170($sp)
    ctx->pc = 0x2fe114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 21));
    // 0x2fe118: 0x7fb60160  sq          $s6, 0x160($sp)
    ctx->pc = 0x2fe118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 22));
    // 0x2fe11c: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x2fe11cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
    // 0x2fe120: 0xe7b701e8  swc1        $f23, 0x1E8($sp)
    ctx->pc = 0x2fe120u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
    // 0x2fe124: 0xe7b601e0  swc1        $f22, 0x1E0($sp)
    ctx->pc = 0x2fe124u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
    // 0x2fe128: 0xe7b501d8  swc1        $f21, 0x1D8($sp)
    ctx->pc = 0x2fe128u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
    // 0x2fe12c: 0xc051d4a  jal         func_147528
    ctx->pc = 0x2FE12Cu;
    SET_GPR_U32(ctx, 31, 0x2FE134u);
    ctx->pc = 0x2FE130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE12Cu;
    // 0x2fe130: 0xe7b401d0  swc1        $f20, 0x1D0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x2FE12Cu, 0x2FE134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE134u;
label_2fe134:
    // 0x2fe134: 0x8ee3011c  lw          $v1, 0x11C($s7)
    ctx->pc = 0x2fe134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 284)));
    // 0x2fe138: 0x463001e  bgezl       $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2FE138u;
    {
        const bool branch_taken_0x2fe138 = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x2fe138) {
            ctx->pc = 0x2FE13Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FE138u;
            // 0x2fe13c: 0x8ee2011c  lw          $v0, 0x11C($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 284)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FE1B4u;
            goto label_2fe1b4;
        }
    }
    ctx->pc = 0x2FE140u;
    // 0x2fe140: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2fe140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2fe144: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2fe144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2fe148: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2FE148u;
    {
        const bool branch_taken_0x2fe148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE148u;
        // 0x2fe14c: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe148) {
            ctx->pc = 0x2FE1B0u;
            goto label_2fe1b0;
        }
    }
    ctx->pc = 0x2FE150u;
    // 0x2fe150: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2fe150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2fe154: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2FE154u;
    {
        const bool branch_taken_0x2fe154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE154u;
        // 0x2fe158: 0x8e65aff0  lw          $a1, -0x5010($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294946800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe154) {
            ctx->pc = 0x2FE1B0u;
            goto label_2fe1b0;
        }
    }
    ctx->pc = 0x2FE15Cu;
    // 0x2fe15c: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x2fe15cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fe160: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fe160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe164: 0xc051d4a  jal         func_147528
    ctx->pc = 0x2FE164u;
    SET_GPR_U32(ctx, 31, 0x2FE16Cu);
    ctx->pc = 0x2FE168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE164u;
    // 0x2fe168: 0x24a50140  addiu       $a1, $a1, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x2FE164u, 0x2FE16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE16Cu;
label_2fe16c:
    // 0x2fe16c: 0x27b100c0  addiu       $s1, $sp, 0xC0
    ctx->pc = 0x2fe16cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2fe170: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2fe170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe174: 0xc0ad858  jal         func_2B6160
    ctx->pc = 0x2FE174u;
    SET_GPR_U32(ctx, 31, 0x2FE17Cu);
    ctx->pc = 0x2FE178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE174u;
    // 0x2fe178: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6160u, 0x2FE174u, 0x2FE17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE17Cu;
label_2fe17c:
    // 0x2fe17c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2fe17cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe180: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2fe180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe184: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2FE184u;
    SET_GPR_U32(ctx, 31, 0x2FE18Cu);
    ctx->pc = 0x2FE188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE184u;
    // 0x2fe188: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2FE184u, 0x2FE18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE18Cu;
label_2fe18c:
    // 0x2fe18c: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x2fe18cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2fe190: 0xc0ad8ca  jal         func_2B6328
    ctx->pc = 0x2FE190u;
    SET_GPR_U32(ctx, 31, 0x2FE198u);
    ctx->pc = 0x2FE194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE190u;
    // 0x2fe194: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6328u, 0x2FE190u, 0x2FE198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE198u;
label_2fe198:
    // 0x2fe198: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x2fe198u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe19c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2fe19cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe1a0: 0xc051d4a  jal         func_147528
    ctx->pc = 0x2FE1A0u;
    SET_GPR_U32(ctx, 31, 0x2FE1A8u);
    ctx->pc = 0x2FE1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE1A0u;
    // 0x2fe1a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x2FE1A0u, 0x2FE1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE1A8u;
label_2fe1a8:
    // 0x2fe1a8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2FE1A8u;
    {
        const bool branch_taken_0x2fe1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE1A8u;
        // 0x2fe1ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe1a8) {
            ctx->pc = 0x2FE240u;
            goto label_2fe240;
        }
    }
    ctx->pc = 0x2FE1B0u;
label_2fe1b0:
    // 0x2fe1b0: 0x8ee2011c  lw          $v0, 0x11C($s7)
    ctx->pc = 0x2fe1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 284)));
label_2fe1b4:
    // 0x2fe1b4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2fe1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2fe1b8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2fe1b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2fe1bc: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2FE1BCu;
    {
        const bool branch_taken_0x2fe1bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE1BCu;
        // 0x2fe1c0: 0x8e65aff0  lw          $a1, -0x5010($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294946800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe1bc) {
            ctx->pc = 0x2FE260u;
            goto label_2fe260;
        }
    }
    ctx->pc = 0x2FE1C4u;
    // 0x2fe1c4: 0x27b000d0  addiu       $s0, $sp, 0xD0
    ctx->pc = 0x2fe1c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2fe1c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fe1c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe1cc: 0xc051d4a  jal         func_147528
    ctx->pc = 0x2FE1CCu;
    SET_GPR_U32(ctx, 31, 0x2FE1D4u);
    ctx->pc = 0x2FE1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE1CCu;
    // 0x2fe1d0: 0x24a50140  addiu       $a1, $a1, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x2FE1CCu, 0x2FE1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE1D4u;
label_2fe1d4:
    // 0x2fe1d4: 0x27b100c0  addiu       $s1, $sp, 0xC0
    ctx->pc = 0x2fe1d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2fe1d8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2fe1d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe1dc: 0xc0ad858  jal         func_2B6160
    ctx->pc = 0x2FE1DCu;
    SET_GPR_U32(ctx, 31, 0x2FE1E4u);
    ctx->pc = 0x2FE1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE1DCu;
    // 0x2fe1e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6160u, 0x2FE1DCu, 0x2FE1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE1E4u;
label_2fe1e4:
    // 0x2fe1e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2fe1e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe1e8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2fe1e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe1ec: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2FE1ECu;
    SET_GPR_U32(ctx, 31, 0x2FE1F4u);
    ctx->pc = 0x2FE1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE1ECu;
    // 0x2fe1f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2FE1ECu, 0x2FE1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE1F4u;
label_2fe1f4:
    // 0x2fe1f4: 0x27b20080  addiu       $s2, $sp, 0x80
    ctx->pc = 0x2fe1f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fe1f8: 0xc0ad8ca  jal         func_2B6328
    ctx->pc = 0x2FE1F8u;
    SET_GPR_U32(ctx, 31, 0x2FE200u);
    ctx->pc = 0x2FE1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE1F8u;
    // 0x2fe1fc: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6328u, 0x2FE1F8u, 0x2FE200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE200u;
label_2fe200:
    // 0x2fe200: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2fe200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe204: 0xc051d4a  jal         func_147528
    ctx->pc = 0x2FE204u;
    SET_GPR_U32(ctx, 31, 0x2FE20Cu);
    ctx->pc = 0x2FE208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE204u;
    // 0x2fe208: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x2FE204u, 0x2FE20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE20Cu;
label_2fe20c:
    // 0x2fe20c: 0x8e62aff0  lw          $v0, -0x5010($s3)
    ctx->pc = 0x2fe20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294946800)));
    // 0x2fe210: 0x24420220  addiu       $v0, $v0, 0x220
    ctx->pc = 0x2fe210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
    // 0x2fe214: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2fe214u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fe218: 0xfba40110  sqc2        $vf4, 0x110($sp)
    ctx->pc = 0x2fe218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2fe21c: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x2fe21cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2fe220: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2fe220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe224: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x2fe224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2fe228: 0xafa00114  sw          $zero, 0x114($sp)
    ctx->pc = 0x2fe228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 0));
    // 0x2fe22c: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2fe22cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2fe230: 0xc051ed8  jal         func_147B60
    ctx->pc = 0x2FE230u;
    SET_GPR_U32(ctx, 31, 0x2FE238u);
    ctx->pc = 0x2FE234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE230u;
    // 0x2fe234: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147B60u, 0x2FE230u, 0x2FE238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE238u;
label_2fe238:
    // 0x2fe238: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x2fe238u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe23c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2fe23cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fe240:
    // 0x2fe240: 0xc051f10  jal         func_147C40
    ctx->pc = 0x2FE240u;
    SET_GPR_U32(ctx, 31, 0x2FE248u);
    ctx->pc = 0x2FE244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE240u;
    // 0x2fe244: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C40u, 0x2FE240u, 0x2FE248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE248u;
label_2fe248:
    // 0x2fe248: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2fe248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe24c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2fe24cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe250: 0xc051d52  jal         func_147548
    ctx->pc = 0x2FE250u;
    SET_GPR_U32(ctx, 31, 0x2FE258u);
    ctx->pc = 0x2FE254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE250u;
    // 0x2fe254: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147548u, 0x2FE250u, 0x2FE258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE258u;
label_2fe258:
    // 0x2fe258: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2FE258u;
    {
        const bool branch_taken_0x2fe258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe258) {
            ctx->pc = 0x2FE29Cu;
            goto label_2fe29c;
        }
    }
    ctx->pc = 0x2FE260u;
label_2fe260:
    // 0x2fe260: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x2fe260u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2fe264: 0xc0ad86c  jal         func_2B61B0
    ctx->pc = 0x2FE264u;
    SET_GPR_U32(ctx, 31, 0x2FE26Cu);
    ctx->pc = 0x2FE268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE264u;
    // 0x2fe268: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B61B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B61B0u, 0x2FE264u, 0x2FE26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE26Cu;
label_2fe26c:
    // 0x2fe26c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2fe26cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe270: 0xc051d4a  jal         func_147528
    ctx->pc = 0x2FE270u;
    SET_GPR_U32(ctx, 31, 0x2FE278u);
    ctx->pc = 0x2FE274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE270u;
    // 0x2fe274: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x2FE270u, 0x2FE278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE278u;
label_2fe278:
    // 0x2fe278: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x2fe278u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe27c: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x2fe27cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fe280: 0x8e65aff0  lw          $a1, -0x5010($s3)
    ctx->pc = 0x2fe280u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294946800)));
    // 0x2fe284: 0xc051d4a  jal         func_147528
    ctx->pc = 0x2FE284u;
    SET_GPR_U32(ctx, 31, 0x2FE28Cu);
    ctx->pc = 0x2FE288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE284u;
    // 0x2fe288: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x2FE284u, 0x2FE28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE28Cu;
label_2fe28c:
    // 0x2fe28c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2fe28cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe290: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2fe290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe294: 0xc051d52  jal         func_147548
    ctx->pc = 0x2FE294u;
    SET_GPR_U32(ctx, 31, 0x2FE29Cu);
    ctx->pc = 0x2FE298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE294u;
    // 0x2fe298: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147548u, 0x2FE294u, 0x2FE29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE29Cu;
label_2fe29c:
    // 0x2fe29c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2fe29cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe2a0: 0xc6e10254  lwc1        $f1, 0x254($s7)
    ctx->pc = 0x2fe2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fe2a4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2fe2a4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fe2a8: 0x0  nop
    ctx->pc = 0x2fe2a8u;
    // NOP
    // 0x2fe2ac: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x2FE2ACu;
    {
        const bool branch_taken_0x2fe2ac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FE2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE2ACu;
        // 0x2fe2b0: 0xe7a00124  swc1        $f0, 0x124($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe2ac) {
            ctx->pc = 0x2FE2E8u;
            goto label_2fe2e8;
        }
    }
    ctx->pc = 0x2FE2B4u;
    // 0x2fe2b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fe2b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe2b8: 0xc0ad858  jal         func_2B6160
    ctx->pc = 0x2FE2B8u;
    SET_GPR_U32(ctx, 31, 0x2FE2C0u);
    ctx->pc = 0x2FE2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE2B8u;
    // 0x2fe2bc: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6160u, 0x2FE2B8u, 0x2FE2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE2C0u;
label_2fe2c0:
    // 0x2fe2c0: 0xc6ec0254  lwc1        $f12, 0x254($s7)
    ctx->pc = 0x2fe2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2fe2c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2fe2c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe2c8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2fe2c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe2cc: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x2fe2ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2fe2d0: 0xc0bf798  jal         func_2FDE60
    ctx->pc = 0x2FE2D0u;
    SET_GPR_U32(ctx, 31, 0x2FE2D8u);
    ctx->pc = 0x2FE2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE2D0u;
    // 0x2fe2d4: 0x27a70124  addiu       $a3, $sp, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDE60u, 0x2FE2D0u, 0x2FE2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE2D8u;
label_2fe2d8:
    // 0x2fe2d8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2FE2D8u;
    {
        const bool branch_taken_0x2fe2d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE2D8u;
        // 0x2fe2dc: 0x7bb001c0  lq          $s0, 0x1C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe2d8) {
            ctx->pc = 0x2FE2FCu;
            goto label_2fe2fc;
        }
    }
    ctx->pc = 0x2FE2E0u;
    // 0x2fe2e0: 0x10000161  b           . + 4 + (0x161 << 2)
    ctx->pc = 0x2FE2E0u;
    {
        const bool branch_taken_0x2fe2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE2E0u;
        // 0x2fe2e4: 0x7bb101b0  lq          $s1, 0x1B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe2e0) {
            ctx->pc = 0x2FE868u;
            goto label_2fe868;
        }
    }
    ctx->pc = 0x2FE2E8u;
label_2fe2e8:
    // 0x2fe2e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2fe2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe2ec: 0xc0bf76a  jal         func_2FDDA8
    ctx->pc = 0x2FE2ECu;
    SET_GPR_U32(ctx, 31, 0x2FE2F4u);
    ctx->pc = 0x2FE2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE2ECu;
    // 0x2fe2f0: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDDA8u, 0x2FE2ECu, 0x2FE2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE2F4u;
label_2fe2f4:
    // 0x2fe2f4: 0x1440015b  bnez        $v0, . + 4 + (0x15B << 2)
    ctx->pc = 0x2FE2F4u;
    {
        const bool branch_taken_0x2fe2f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FE2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE2F4u;
        // 0x2fe2f8: 0x7bb001c0  lq          $s0, 0x1C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe2f4) {
            ctx->pc = 0x2FE864u;
            goto label_2fe864;
        }
    }
    ctx->pc = 0x2FE2FCu;
label_2fe2fc:
    // 0x2fe2fc: 0x8ee3011c  lw          $v1, 0x11C($s7)
    ctx->pc = 0x2fe2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 284)));
    // 0x2fe300: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2fe300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2fe304: 0xc6f50214  lwc1        $f21, 0x214($s7)
    ctx->pc = 0x2fe304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2fe308: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2fe308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2fe30c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FE30Cu;
    {
        const bool branch_taken_0x2fe30c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE30Cu;
        // 0x2fe310: 0xc6f60218  lwc1        $f22, 0x218($s7) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe30c) {
            ctx->pc = 0x2FE324u;
            goto label_2fe324;
        }
    }
    ctx->pc = 0x2FE314u;
    // 0x2fe314: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2fe314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2fe318: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2fe318u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe31c: 0x0  nop
    ctx->pc = 0x2fe31cu;
    // NOP
    // 0x2fe320: 0x46150541  sub.s       $f21, $f0, $f21
    ctx->pc = 0x2fe320u;
    ctx->f[21] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
label_2fe324:
    // 0x2fe324: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x2fe324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x2fe328: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2fe328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2fe32c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FE32Cu;
    {
        const bool branch_taken_0x2fe32c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe32c) {
            ctx->pc = 0x2FE330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FE32Cu;
            // 0x2fe330: 0xc6e00210  lwc1        $f0, 0x210($s7) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FE348u;
            goto label_2fe348;
        }
    }
    ctx->pc = 0x2FE334u;
    // 0x2fe334: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2fe334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2fe338: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2fe338u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe33c: 0x0  nop
    ctx->pc = 0x2fe33cu;
    // NOP
    // 0x2fe340: 0x46160581  sub.s       $f22, $f0, $f22
    ctx->pc = 0x2fe340u;
    ctx->f[22] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x2fe344: 0xc6e00210  lwc1        $f0, 0x210($s7)
    ctx->pc = 0x2fe344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2fe348:
    // 0x2fe348: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2fe348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2fe34c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2fe34cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2fe350: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2fe350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2fe354: 0xe6540004  swc1        $f20, 0x4($s2)
    ctx->pc = 0x2fe354u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x2fe358: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x2fe358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x2fe35c: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x2fe35cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x2fe360: 0x8ee2011c  lw          $v0, 0x11C($s7)
    ctx->pc = 0x2fe360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 284)));
    // 0x2fe364: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x2fe364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x2fe368: 0x104000c5  beqz        $v0, . + 4 + (0xC5 << 2)
    ctx->pc = 0x2FE368u;
    {
        const bool branch_taken_0x2fe368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE368u;
        // 0x2fe36c: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe368) {
            ctx->pc = 0x2FE680u;
            goto label_2fe680;
        }
    }
    ctx->pc = 0x2FE370u;
    // 0x2fe370: 0x3c120062  lui         $s2, 0x62
    ctx->pc = 0x2fe370u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)98 << 16));
    // 0x2fe374: 0x2652b700  addiu       $s2, $s2, -0x4900
    ctx->pc = 0x2fe374u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294948608));
    // 0x2fe378: 0x2462b710  addiu       $v0, $v1, -0x48F0
    ctx->pc = 0x2fe378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948624));
    // 0x2fe37c: 0xac60b710  sw          $zero, -0x48F0($v1)
    ctx->pc = 0x2fe37cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294948624), GPR_U32(ctx, 0));
    // 0x2fe380: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2fe380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe384: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2fe384u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe388: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fe388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe38c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2fe38cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2fe390: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2fe390u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2fe394: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2FE394u;
    SET_GPR_U32(ctx, 31, 0x2FE39Cu);
    ctx->pc = 0x2FE398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE394u;
    // 0x2fe398: 0xe454000c  swc1        $f20, 0xC($v0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2FE394u, 0x2FE39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE39Cu;
label_2fe39c:
    // 0x2fe39c: 0xc64c000c  lwc1        $f12, 0xC($s2)
    ctx->pc = 0x2fe39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2fe3a0: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x2fe3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x2fe3a4: 0x2462b7a8  addiu       $v0, $v1, -0x4858
    ctx->pc = 0x2fe3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948776));
    // 0x2fe3a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fe3a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe3ac: 0x0  nop
    ctx->pc = 0x2fe3acu;
    // NOP
    // 0x2fe3b0: 0x0  nop
    ctx->pc = 0x2fe3b0u;
    // NOP
    // 0x2fe3b4: 0x460ca003  div.s       $f0, $f20, $f12
    ctx->pc = 0x2fe3b4u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[12]);
    // 0x2fe3b8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2fe3b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe3bc: 0xe460b7a8  swc1        $f0, -0x4858($v1)
    ctx->pc = 0x2fe3bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61B7A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61B7A8u, _value); } while (0); }
    // 0x2fe3c0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2fe3c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61B7ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61B7ACu, _value); } while (0); }
    // 0x2fe3c4: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2fe3c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61B7B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61B7B4u, _value); } while (0); }
    // 0x2fe3c8: 0xc0c291a  jal         func_30A468
    ctx->pc = 0x2FE3C8u;
    SET_GPR_U32(ctx, 31, 0x2FE3D0u);
    ctx->pc = 0x2FE3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE3C8u;
    // 0x2fe3cc: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A468u, 0x2FE3C8u, 0x2FE3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE3D0u;
label_2fe3d0:
    // 0x2fe3d0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2fe3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2fe3d4: 0xc0ad8b8  jal         func_2B62E0
    ctx->pc = 0x2FE3D4u;
    SET_GPR_U32(ctx, 31, 0x2FE3DCu);
    ctx->pc = 0x2FE3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE3D4u;
    // 0x2fe3d8: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B62E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B62E0u, 0x2FE3D4u, 0x2FE3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE3DCu;
label_2fe3dc:
    // 0x2fe3dc: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2fe3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fe3e0: 0x4615a101  sub.s       $f4, $f20, $f21
    ctx->pc = 0x2fe3e0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
    // 0x2fe3e4: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x2fe3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fe3e8: 0x4616a141  sub.s       $f5, $f20, $f22
    ctx->pc = 0x2fe3e8u;
    ctx->f[5] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
    // 0x2fe3ec: 0x46000087  neg.s       $f2, $f0
    ctx->pc = 0x2fe3ecu;
    ctx->f[2] = FPU_NEG_S(ctx->f[0]);
    // 0x2fe3f0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2fe3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2fe3f4: 0x460008c7  neg.s       $f3, $f1
    ctx->pc = 0x2fe3f4u;
    ctx->f[3] = FPU_NEG_S(ctx->f[1]);
    // 0x2fe3f8: 0x2450b720  addiu       $s0, $v0, -0x48E0
    ctx->pc = 0x2fe3f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948640));
    // 0x2fe3fc: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2fe3fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2fe400: 0xe614003c  swc1        $f20, 0x3C($s0)
    ctx->pc = 0x2fe400u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61B75Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61B75Cu, _value); } while (0); }
    // 0x2fe404: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x2fe404u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x2fe408: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2fe408u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x61B728u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61B728u, _value); } while (0);
    // 0x2fe40c: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x2fe40cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x2fe410: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x2fe410u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61B72Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61B72Cu, _value); } while (0); }
    // 0x2fe414: 0x46160842  mul.s       $f1, $f1, $f22
    ctx->pc = 0x2fe414u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
    // 0x2fe418: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x2fe418u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x61B738u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61B738u, _value); } while (0);
    // 0x2fe41c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2fe41cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2fe420: 0x27b600a0  addiu       $s6, $sp, 0xA0
    ctx->pc = 0x2fe420u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fe424: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2fe424u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x2fe428: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2fe428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe42c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2fe42cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2fe430: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2fe430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe434: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x2fe434u;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
    // 0x2fe438: 0xe440b720  swc1        $f0, -0x48E0($v0)
    ctx->pc = 0x2fe438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61B720u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61B720u, _value); } while (0); }
    // 0x2fe43c: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x2fe43cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61B740u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61B740u, _value); } while (0); }
    // 0x2fe440: 0x26130010  addiu       $s3, $s0, 0x10
    ctx->pc = 0x2fe440u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2fe444: 0xe6010014  swc1        $f1, 0x14($s0)
    ctx->pc = 0x2fe444u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61B734u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61B734u, _value); } while (0); }
    // 0x2fe448: 0x26140020  addiu       $s4, $s0, 0x20
    ctx->pc = 0x2fe448u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2fe44c: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x2fe44cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61B724u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61B724u, _value); } while (0); }
    // 0x2fe450: 0x26150030  addiu       $s5, $s0, 0x30
    ctx->pc = 0x2fe450u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2fe454: 0xe6020030  swc1        $f2, 0x30($s0)
    ctx->pc = 0x2fe454u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61B750u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61B750u, _value); } while (0); }
    // 0x2fe458: 0xe6030034  swc1        $f3, 0x34($s0)
    ctx->pc = 0x2fe458u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61B754u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61B754u, _value); } while (0); }
    // 0x2fe45c: 0xe6020010  swc1        $f2, 0x10($s0)
    ctx->pc = 0x2fe45cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61B730u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61B730u, _value); } while (0); }
    // 0x2fe460: 0xe6030024  swc1        $f3, 0x24($s0)
    ctx->pc = 0x2fe460u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61B744u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61B744u, _value); } while (0); }
    // 0x2fe464: 0xe614001c  swc1        $f20, 0x1C($s0)
    ctx->pc = 0x2fe464u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61B73Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61B73Cu, _value); } while (0); }
    // 0x2fe468: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x2fe468u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x61B748u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61B748u, _value); } while (0);
    // 0x2fe46c: 0xe614002c  swc1        $f20, 0x2C($s0)
    ctx->pc = 0x2fe46cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61B74Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61B74Cu, _value); } while (0); }
    // 0x2fe470: 0xc0ad8be  jal         func_2B62F8
    ctx->pc = 0x2FE470u;
    SET_GPR_U32(ctx, 31, 0x2FE478u);
    ctx->pc = 0x2FE474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE470u;
    // 0x2fe474: 0xae000038  sw          $zero, 0x38($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B62F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B62F8u, 0x2FE470u, 0x2FE478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE478u;
label_2fe478:
    // 0x2fe478: 0x27b10060  addiu       $s1, $sp, 0x60
    ctx->pc = 0x2fe478u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2fe47c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2fe47cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe480: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fe480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe484: 0xc051dca  jal         func_147728
    ctx->pc = 0x2FE484u;
    SET_GPR_U32(ctx, 31, 0x2FE48Cu);
    ctx->pc = 0x2FE488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE484u;
    // 0x2fe488: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x2FE484u, 0x2FE48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE48Cu;
label_2fe48c:
    // 0x2fe48c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fe48cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe490: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2fe490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe494: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2FE494u;
    SET_GPR_U32(ctx, 31, 0x2FE49Cu);
    ctx->pc = 0x2FE498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE494u;
    // 0x2fe498: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2FE494u, 0x2FE49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE49Cu;
label_2fe49c:
    // 0x2fe49c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2fe49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe4a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2fe4a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe4a4: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2FE4A4u;
    SET_GPR_U32(ctx, 31, 0x2FE4ACu);
    ctx->pc = 0x2FE4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE4A4u;
    // 0x2fe4a8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2FE4A4u, 0x2FE4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE4ACu;
label_2fe4ac:
    // 0x2fe4ac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2fe4acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe4b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2fe4b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe4b4: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2FE4B4u;
    SET_GPR_U32(ctx, 31, 0x2FE4BCu);
    ctx->pc = 0x2FE4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE4B4u;
    // 0x2fe4b8: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2FE4B4u, 0x2FE4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE4BCu;
label_2fe4bc:
    // 0x2fe4bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2fe4bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe4c0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2fe4c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe4c4: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2FE4C4u;
    SET_GPR_U32(ctx, 31, 0x2FE4CCu);
    ctx->pc = 0x2FE4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE4C4u;
    // 0x2fe4c8: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2FE4C4u, 0x2FE4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE4CCu;
label_2fe4cc:
    // 0x2fe4cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fe4ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe4d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2fe4d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe4d4: 0xc0c2928  jal         func_30A4A0
    ctx->pc = 0x2FE4D4u;
    SET_GPR_U32(ctx, 31, 0x2FE4DCu);
    ctx->pc = 0x2FE4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE4D4u;
    // 0x2fe4d8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A4A0u, 0x2FE4D4u, 0x2FE4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE4DCu;
label_2fe4dc:
    // 0x2fe4dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2fe4dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe4e0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2fe4e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe4e4: 0xc0c2928  jal         func_30A4A0
    ctx->pc = 0x2FE4E4u;
    SET_GPR_U32(ctx, 31, 0x2FE4ECu);
    ctx->pc = 0x2FE4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE4E4u;
    // 0x2fe4e8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A4A0u, 0x2FE4E4u, 0x2FE4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE4ECu;
label_2fe4ec:
    // 0x2fe4ec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2fe4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe4f0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2fe4f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe4f4: 0xc0c2928  jal         func_30A4A0
    ctx->pc = 0x2FE4F4u;
    SET_GPR_U32(ctx, 31, 0x2FE4FCu);
    ctx->pc = 0x2FE4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE4F4u;
    // 0x2fe4f8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A4A0u, 0x2FE4F4u, 0x2FE4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE4FCu;
label_2fe4fc:
    // 0x2fe4fc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2fe4fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe500: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2fe500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe504: 0xc0c2928  jal         func_30A4A0
    ctx->pc = 0x2FE504u;
    SET_GPR_U32(ctx, 31, 0x2FE50Cu);
    ctx->pc = 0x2FE508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE504u;
    // 0x2fe508: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A4A0u, 0x2FE504u, 0x2FE50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE50Cu;
label_2fe50c:
    // 0x2fe50c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2fe50cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe510: 0xc0c295c  jal         func_30A570
    ctx->pc = 0x2FE510u;
    SET_GPR_U32(ctx, 31, 0x2FE518u);
    ctx->pc = 0x2FE514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE510u;
    // 0x2fe514: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A570u, 0x2FE510u, 0x2FE518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE518u;
label_2fe518:
    // 0x2fe518: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2fe518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe51c: 0xc0c295c  jal         func_30A570
    ctx->pc = 0x2FE51Cu;
    SET_GPR_U32(ctx, 31, 0x2FE524u);
    ctx->pc = 0x2FE520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE51Cu;
    // 0x2fe520: 0x27c40010  addiu       $a0, $fp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A570u, 0x2FE51Cu, 0x2FE524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE524u;
label_2fe524:
    // 0x2fe524: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2fe524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe528: 0xc0c295c  jal         func_30A570
    ctx->pc = 0x2FE528u;
    SET_GPR_U32(ctx, 31, 0x2FE530u);
    ctx->pc = 0x2FE52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE528u;
    // 0x2fe52c: 0x27c40020  addiu       $a0, $fp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A570u, 0x2FE528u, 0x2FE530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE530u;
label_2fe530:
    // 0x2fe530: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2fe530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe534: 0xc0c295c  jal         func_30A570
    ctx->pc = 0x2FE534u;
    SET_GPR_U32(ctx, 31, 0x2FE53Cu);
    ctx->pc = 0x2FE538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE534u;
    // 0x2fe538: 0x27c40030  addiu       $a0, $fp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A570u, 0x2FE534u, 0x2FE53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE53Cu;
label_2fe53c:
    // 0x2fe53c: 0xc6e10254  lwc1        $f1, 0x254($s7)
    ctx->pc = 0x2fe53cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fe540: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2fe540u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe544: 0x0  nop
    ctx->pc = 0x2fe544u;
    // NOP
    // 0x2fe548: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2fe548u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fe54c: 0x0  nop
    ctx->pc = 0x2fe54cu;
    // NOP
    // 0x2fe550: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x2FE550u;
    {
        const bool branch_taken_0x2fe550 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FE554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE550u;
        // 0x2fe554: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe550) {
            ctx->pc = 0x2FE598u;
            goto label_2fe598;
        }
    }
    ctx->pc = 0x2FE558u;
    // 0x2fe558: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x2fe558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fe55c: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x2fe55cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2fe560: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2fe560u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2fe564: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2fe564u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2fe568: 0x8fc40028  lw          $a0, 0x28($fp)
    ctx->pc = 0x2fe568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x2fe56c: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x2fe56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x2fe570: 0x8fc50038  lw          $a1, 0x38($fp)
    ctx->pc = 0x2fe570u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 56)));
    // 0x2fe574: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x2fe574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2fe578: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2fe578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2fe57c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2fe57cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2fe580: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2fe580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2fe584: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x2fe584u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x2fe588: 0xafc30018  sw          $v1, 0x18($fp)
    ctx->pc = 0x2fe588u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 3));
    // 0x2fe58c: 0xafc40028  sw          $a0, 0x28($fp)
    ctx->pc = 0x2fe58cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 40), GPR_U32(ctx, 4));
    // 0x2fe590: 0xafc50038  sw          $a1, 0x38($fp)
    ctx->pc = 0x2fe590u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 56), GPR_U32(ctx, 5));
    // 0x2fe594: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2fe594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_2fe598:
    // 0x2fe598: 0x3c060058  lui         $a2, 0x58
    ctx->pc = 0x2fe598u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)88 << 16));
    // 0x2fe59c: 0x8c621180  lw          $v0, 0x1180($v1)
    ctx->pc = 0x2fe59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4480)));
    // 0x2fe5a0: 0x3c07003c  lui         $a3, 0x3C
    ctx->pc = 0x2fe5a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)60 << 16));
    // 0x2fe5a4: 0x8cc46b80  lw          $a0, 0x6B80($a2)
    ctx->pc = 0x2fe5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x586B80u));
    // 0x2fe5a8: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x2fe5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2fe5ac: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x2fe5acu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2fe5b0: 0x8ce6118c  lw          $a2, 0x118C($a3)
    ctx->pc = 0x2fe5b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4492)));
    // 0x2fe5b4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2fe5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2fe5b8: 0x48100  sll         $s0, $a0, 4
    ctx->pc = 0x2fe5b8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2fe5bc: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2fe5bcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2fe5c0: 0x24420800  addiu       $v0, $v0, 0x800
    ctx->pc = 0x2fe5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x2fe5c4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2fe5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2fe5c8: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2fe5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2fe5cc: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x2fe5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2fe5d0: 0x27900  sll         $t7, $v0, 4
    ctx->pc = 0x2fe5d0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2fe5d4: 0x57100  sll         $t6, $a1, 4
    ctx->pc = 0x2fe5d4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2fe5d8: 0x46900  sll         $t5, $a0, 4
    ctx->pc = 0x2fe5d8u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2fe5dc: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x2fe5dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe5e0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2fe5e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe5e4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2fe5e4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe5e8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2fe5e8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe5ec: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x2fe5ecu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe5f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2fe5f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe5f4: 0x0  nop
    ctx->pc = 0x2fe5f4u;
    // NOP
label_2fe5f8:
    // 0x2fe5f8: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x2fe5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2fe5fc: 0x4400097  bltz        $v0, . + 4 + (0x97 << 2)
    ctx->pc = 0x2FE5FCu;
    {
        const bool branch_taken_0x2fe5fc = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2FE600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE5FCu;
        // 0x2fe600: 0x3404fec0  ori         $a0, $zero, 0xFEC0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65216);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe5fc) {
            ctx->pc = 0x2FE85Cu;
            goto label_2fe85c;
        }
    }
    ctx->pc = 0x2FE604u;
    // 0x2fe604: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x2fe604u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fe608: 0x24c2ff60  addiu       $v0, $a2, -0xA0
    ctx->pc = 0x2fe608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967136));
    // 0x2fe60c: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x2fe60cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2fe610: 0x14400092  bnez        $v0, . + 4 + (0x92 << 2)
    ctx->pc = 0x2FE610u;
    {
        const bool branch_taken_0x2fe610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FE614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE610u;
        // 0x2fe614: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe610) {
            ctx->pc = 0x2FE85Cu;
            goto label_2fe85c;
        }
    }
    ctx->pc = 0x2FE618u;
    // 0x2fe618: 0x2462ff60  addiu       $v0, $v1, -0xA0
    ctx->pc = 0x2fe618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967136));
    // 0x2fe61c: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x2fe61cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2fe620: 0x1440008e  bnez        $v0, . + 4 + (0x8E << 2)
    ctx->pc = 0x2FE620u;
    {
        const bool branch_taken_0x2fe620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FE624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE620u;
        // 0x2fe624: 0x1a3282a  slt         $a1, $t5, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe620) {
            ctx->pc = 0x2FE85Cu;
            goto label_2fe85c;
        }
    }
    ctx->pc = 0x2FE628u;
    // 0x2fe628: 0xce102a  slt         $v0, $a2, $t6
    ctx->pc = 0x2fe628u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x2fe62c: 0x1e6202a  slt         $a0, $t7, $a2
    ctx->pc = 0x2fe62cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2fe630: 0x70182a  slt         $v1, $v1, $s0
    ctx->pc = 0x2fe630u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2fe634: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2fe634u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2fe638: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x2fe638u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x2fe63c: 0x1445021  addu        $t2, $t2, $a0
    ctx->pc = 0x2fe63cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x2fe640: 0x1635821  addu        $t3, $t3, $v1
    ctx->pc = 0x2fe640u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x2fe644: 0x1856021  addu        $t4, $t4, $a1
    ctx->pc = 0x2fe644u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x2fe648: 0x29020004  slti        $v0, $t0, 0x4
    ctx->pc = 0x2fe648u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2fe64c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2FE64Cu;
    {
        const bool branch_taken_0x2fe64c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FE650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE64Cu;
        // 0x2fe650: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe64c) {
            ctx->pc = 0x2FE5F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fe5f8;
        }
    }
    ctx->pc = 0x2FE654u;
    // 0x2fe654: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2fe654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2fe658: 0x51220081  beql        $t1, $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x2FE658u;
    {
        const bool branch_taken_0x2fe658 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x2fe658) {
            ctx->pc = 0x2FE65Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FE658u;
            // 0x2fe65c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FE860u;
            goto label_2fe860;
        }
    }
    ctx->pc = 0x2FE660u;
    // 0x2fe660: 0x5142007f  beql        $t2, $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x2FE660u;
    {
        const bool branch_taken_0x2fe660 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 2));
        if (branch_taken_0x2fe660) {
            ctx->pc = 0x2FE664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FE660u;
            // 0x2fe664: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FE860u;
            goto label_2fe860;
        }
    }
    ctx->pc = 0x2FE668u;
    // 0x2fe668: 0x5162007d  beql        $t3, $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x2FE668u;
    {
        const bool branch_taken_0x2fe668 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 2));
        if (branch_taken_0x2fe668) {
            ctx->pc = 0x2FE66Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FE668u;
            // 0x2fe66c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FE860u;
            goto label_2fe860;
        }
    }
    ctx->pc = 0x2FE670u;
    // 0x2fe670: 0x1582007b  bne         $t4, $v0, . + 4 + (0x7B << 2)
    ctx->pc = 0x2FE670u;
    {
        const bool branch_taken_0x2fe670 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FE674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE670u;
        // 0x2fe674: 0x8fa20120  lw          $v0, 0x120($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe670) {
            ctx->pc = 0x2FE860u;
            goto label_2fe860;
        }
    }
    ctx->pc = 0x2FE678u;
    // 0x2fe678: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x2FE678u;
    {
        const bool branch_taken_0x2fe678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE678u;
        // 0x2fe67c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe678) {
            ctx->pc = 0x2FE860u;
            goto label_2fe860;
        }
    }
    ctx->pc = 0x2FE680u;
label_2fe680:
    // 0x2fe680: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x2fe680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fe684: 0x4615a101  sub.s       $f4, $f20, $f21
    ctx->pc = 0x2fe684u;
    ctx->f[4] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
    // 0x2fe688: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2fe688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fe68c: 0x4616a141  sub.s       $f5, $f20, $f22
    ctx->pc = 0x2fe68cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
    // 0x2fe690: 0x46000087  neg.s       $f2, $f0
    ctx->pc = 0x2fe690u;
    ctx->f[2] = FPU_NEG_S(ctx->f[0]);
    // 0x2fe694: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x2fe694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x2fe698: 0x460008c7  neg.s       $f3, $f1
    ctx->pc = 0x2fe698u;
    ctx->f[3] = FPU_NEG_S(ctx->f[1]);
    // 0x2fe69c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2fe69cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2fe6a0: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2fe6a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2fe6a4: 0x3c0802d  daddu       $s0, $fp, $zero
    ctx->pc = 0x2fe6a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe6a8: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x2fe6a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x2fe6ac: 0xc7b70058  lwc1        $f23, 0x58($sp)
    ctx->pc = 0x2fe6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2fe6b0: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x2fe6b0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x2fe6b4: 0xe7b4005c  swc1        $f20, 0x5C($sp)
    ctx->pc = 0x2fe6b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2fe6b8: 0x46160842  mul.s       $f1, $f1, $f22
    ctx->pc = 0x2fe6b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
    // 0x2fe6bc: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x2fe6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x2fe6c0: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2fe6c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2fe6c4: 0x2454b7a8  addiu       $s4, $v0, -0x4858
    ctx->pc = 0x2fe6c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948776));
    // 0x2fe6c8: 0xe7a20080  swc1        $f2, 0x80($sp)
    ctx->pc = 0x2fe6c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2fe6cc: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x2fe6ccu;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x2fe6d0: 0xe7a30084  swc1        $f3, 0x84($sp)
    ctx->pc = 0x2fe6d0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2fe6d4: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2fe6d4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe6d8: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x2fe6d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2fe6dc: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2fe6dcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe6e0: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2fe6e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2fe6e4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2fe6e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe6e8: 0xafa00128  sw          $zero, 0x128($sp)
    ctx->pc = 0x2fe6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 0));
    // 0x2fe6ec: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2fe6ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe6f0: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x2fe6f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2fe6f4: 0x27b10090  addiu       $s1, $sp, 0x90
    ctx->pc = 0x2fe6f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2fe6f8: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x2fe6f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2fe6fc: 0x27b20050  addiu       $s2, $sp, 0x50
    ctx->pc = 0x2fe6fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2fe700: 0xe7b4006c  swc1        $f20, 0x6C($sp)
    ctx->pc = 0x2fe700u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2fe704: 0xe7a30074  swc1        $f3, 0x74($sp)
    ctx->pc = 0x2fe704u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2fe708: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x2fe708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x2fe70c: 0xe7b4007c  swc1        $f20, 0x7C($sp)
    ctx->pc = 0x2fe70cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x2fe710: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x2fe710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x2fe714: 0xe7b4008c  swc1        $f20, 0x8C($sp)
    ctx->pc = 0x2fe714u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_2fe718:
    // 0x2fe718: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2fe718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe71c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2fe71cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe720: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2FE720u;
    SET_GPR_U32(ctx, 31, 0x2FE728u);
    ctx->pc = 0x2FE724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE720u;
    // 0x2fe724: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2FE720u, 0x2FE728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE728u;
label_2fe728:
    // 0x2fe728: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x2fe728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fe72c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fe72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe730: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2fe730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe734: 0x0  nop
    ctx->pc = 0x2fe734u;
    // NOP
    // 0x2fe738: 0x0  nop
    ctx->pc = 0x2fe738u;
    // NOP
    // 0x2fe73c: 0x4600a803  div.s       $f0, $f21, $f0
    ctx->pc = 0x2fe73cu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[21], ctx->f[0]);
    // 0x2fe740: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2fe740u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2fe744: 0xc0c293a  jal         func_30A4E8
    ctx->pc = 0x2FE744u;
    SET_GPR_U32(ctx, 31, 0x2FE74Cu);
    ctx->pc = 0x2FE748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE744u;
    // 0x2fe748: 0xe6800000  swc1        $f0, 0x0($s4) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A4E8u, 0x2FE744u, 0x2FE74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE74Cu;
label_2fe74c:
    // 0x2fe74c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fe74cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe750: 0xc0c295c  jal         func_30A570
    ctx->pc = 0x2FE750u;
    SET_GPR_U32(ctx, 31, 0x2FE758u);
    ctx->pc = 0x2FE754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE750u;
    // 0x2fe754: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A570u, 0x2FE750u, 0x2FE758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE758u;
label_2fe758:
    // 0x2fe758: 0xc6e00254  lwc1        $f0, 0x254($s7)
    ctx->pc = 0x2fe758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fe75c: 0x46170032  c.eq.s      $f0, $f23
    ctx->pc = 0x2fe75cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fe760: 0x0  nop
    ctx->pc = 0x2fe760u;
    // NOP
    // 0x2fe764: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x2FE764u;
    {
        const bool branch_taken_0x2fe764 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FE768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE764u;
        // 0x2fe768: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe764) {
            ctx->pc = 0x2FE784u;
            goto label_2fe784;
        }
    }
    ctx->pc = 0x2FE76Cu;
    // 0x2fe76c: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x2fe76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fe770: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2fe770u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2fe774: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2fe774u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2fe778: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2fe778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2fe77c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2fe77cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2fe780: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2fe780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2fe784:
    // 0x2fe784: 0x4400035  bltz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x2FE784u;
    {
        const bool branch_taken_0x2fe784 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2FE788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE784u;
        // 0x2fe788: 0x3403fec0  ori         $v1, $zero, 0xFEC0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65216);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe784) {
            ctx->pc = 0x2FE85Cu;
            goto label_2fe85c;
        }
    }
    ctx->pc = 0x2FE78Cu;
    // 0x2fe78c: 0x8e090000  lw          $t1, 0x0($s0)
    ctx->pc = 0x2fe78cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2fe790: 0x2522ff60  addiu       $v0, $t1, -0xA0
    ctx->pc = 0x2fe790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967136));
    // 0x2fe794: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2fe794u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2fe798: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x2FE798u;
    {
        const bool branch_taken_0x2fe798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FE79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE798u;
        // 0x2fe79c: 0x8e080004  lw          $t0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe798) {
            ctx->pc = 0x2FE85Cu;
            goto label_2fe85c;
        }
    }
    ctx->pc = 0x2FE7A0u;
    // 0x2fe7a0: 0x2502ff60  addiu       $v0, $t0, -0xA0
    ctx->pc = 0x2fe7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967136));
    // 0x2fe7a4: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2fe7a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2fe7a8: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2FE7A8u;
    {
        const bool branch_taken_0x2fe7a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FE7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE7A8u;
        // 0x2fe7ac: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe7a8) {
            ctx->pc = 0x2FE85Cu;
            goto label_2fe85c;
        }
    }
    ctx->pc = 0x2FE7B0u;
    // 0x2fe7b0: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x2fe7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x2fe7b4: 0x8c441180  lw          $a0, 0x1180($v0)
    ctx->pc = 0x2fe7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4480)));
    // 0x2fe7b8: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x2fe7b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x2fe7bc: 0x8c676b80  lw          $a3, 0x6B80($v1)
    ctx->pc = 0x2fe7bcu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x586B80u));
    // 0x2fe7c0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2fe7c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2fe7c4: 0x417c2  srl         $v0, $a0, 31
    ctx->pc = 0x2fe7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x2fe7c8: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x2fe7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2fe7cc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2fe7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2fe7d0: 0x8cc5118c  lw          $a1, 0x118C($a2)
    ctx->pc = 0x2fe7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4492)));
    // 0x2fe7d4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2fe7d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2fe7d8: 0x24840800  addiu       $a0, $a0, 0x800
    ctx->pc = 0x2fe7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2048));
    // 0x2fe7dc: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x2fe7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2fe7e0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2fe7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2fe7e4: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x2fe7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2fe7e8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2fe7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fe7ec: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x2fe7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2fe7f0: 0x123182a  slt         $v1, $t1, $v1
    ctx->pc = 0x2fe7f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2fe7f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2fe7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2fe7f8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2fe7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2fe7fc: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x2fe7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2fe800: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x2fe800u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x2fe804: 0x89202a  slt         $a0, $a0, $t1
    ctx->pc = 0x2fe804u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x2fe808: 0xa8282a  slt         $a1, $a1, $t0
    ctx->pc = 0x2fe808u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2fe80c: 0x107382a  slt         $a3, $t0, $a3
    ctx->pc = 0x2fe80cu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2fe810: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x2fe810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
    // 0x2fe814: 0x3c4f021  addu        $fp, $fp, $a0
    ctx->pc = 0x2fe814u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
    // 0x2fe818: 0x2c7b021  addu        $s6, $s6, $a3
    ctx->pc = 0x2fe818u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 7)));
    // 0x2fe81c: 0x2a5a821  addu        $s5, $s5, $a1
    ctx->pc = 0x2fe81cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
    // 0x2fe820: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x2fe820u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2fe824: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x2fe824u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x2fe828: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x2fe828u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2fe82c: 0x1440ffba  bnez        $v0, . + 4 + (-0x46 << 2)
    ctx->pc = 0x2FE82Cu;
    {
        const bool branch_taken_0x2fe82c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FE830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE82Cu;
        // 0x2fe830: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe82c) {
            ctx->pc = 0x2FE718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fe718;
        }
    }
    ctx->pc = 0x2FE834u;
    // 0x2fe834: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x2fe834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2fe838: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2fe838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2fe83c: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2FE83Cu;
    {
        const bool branch_taken_0x2fe83c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2fe83c) {
            ctx->pc = 0x2FE840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FE83Cu;
            // 0x2fe840: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FE860u;
            goto label_2fe860;
        }
    }
    ctx->pc = 0x2FE844u;
    // 0x2fe844: 0x53c20006  beql        $fp, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FE844u;
    {
        const bool branch_taken_0x2fe844 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 2));
        if (branch_taken_0x2fe844) {
            ctx->pc = 0x2FE848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FE844u;
            // 0x2fe848: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FE860u;
            goto label_2fe860;
        }
    }
    ctx->pc = 0x2FE84Cu;
    // 0x2fe84c: 0x52c20004  beql        $s6, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FE84Cu;
    {
        const bool branch_taken_0x2fe84c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        if (branch_taken_0x2fe84c) {
            ctx->pc = 0x2FE850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FE84Cu;
            // 0x2fe850: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FE860u;
            goto label_2fe860;
        }
    }
    ctx->pc = 0x2FE854u;
    // 0x2fe854: 0x16a20002  bne         $s5, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2FE854u;
    {
        const bool branch_taken_0x2fe854 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FE858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE854u;
        // 0x2fe858: 0x8fa20120  lw          $v0, 0x120($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe854) {
            ctx->pc = 0x2FE860u;
            goto label_2fe860;
        }
    }
    ctx->pc = 0x2FE85Cu;
label_2fe85c:
    // 0x2fe85c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2fe85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2fe860:
    // 0x2fe860: 0x7bb001c0  lq          $s0, 0x1C0($sp)
    ctx->pc = 0x2fe860u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_2fe864:
    // 0x2fe864: 0x7bb101b0  lq          $s1, 0x1B0($sp)
    ctx->pc = 0x2fe864u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_2fe868:
    // 0x2fe868: 0x7bb201a0  lq          $s2, 0x1A0($sp)
    ctx->pc = 0x2fe868u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2fe86c: 0x7bb30190  lq          $s3, 0x190($sp)
    ctx->pc = 0x2fe86cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2fe870: 0x7bb40180  lq          $s4, 0x180($sp)
    ctx->pc = 0x2fe870u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2fe874: 0x7bb50170  lq          $s5, 0x170($sp)
    ctx->pc = 0x2fe874u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2fe878: 0x7bb60160  lq          $s6, 0x160($sp)
    ctx->pc = 0x2fe878u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2fe87c: 0x7bb70150  lq          $s7, 0x150($sp)
    ctx->pc = 0x2fe87cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2fe880: 0x7bbe0140  lq          $fp, 0x140($sp)
    ctx->pc = 0x2fe880u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2fe884: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x2fe884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2fe888: 0xc7b701e8  lwc1        $f23, 0x1E8($sp)
    ctx->pc = 0x2fe888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2fe88c: 0xc7b601e0  lwc1        $f22, 0x1E0($sp)
    ctx->pc = 0x2fe88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2fe890: 0xc7b501d8  lwc1        $f21, 0x1D8($sp)
    ctx->pc = 0x2fe890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2fe894: 0xc7b401d0  lwc1        $f20, 0x1D0($sp)
    ctx->pc = 0x2fe894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2fe898: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE898u;
        // 0x2fe89c: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE8A0u;
}
