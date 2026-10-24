#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r007_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r007
{
// Function: R007Init__Fv
// Address: 0x799220 - 0x799488
void R007Init__Fv_0x799220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R007Init__Fv_0x799220");
#endif

    switch (ctx->pc) {
        case 0x79923cu: goto label_79923c;
        case 0x799248u: goto label_799248;
        case 0x799250u: goto label_799250;
        case 0x799258u: goto label_799258;
        case 0x799268u: goto label_799268;
        case 0x79928cu: goto label_79928c;
        case 0x7992b4u: goto label_7992b4;
        case 0x7992c4u: goto label_7992c4;
        case 0x7992ecu: goto label_7992ec;
        case 0x7992fcu: goto label_7992fc;
        case 0x799324u: goto label_799324;
        case 0x799334u: goto label_799334;
        case 0x79935cu: goto label_79935c;
        case 0x799374u: goto label_799374;
        case 0x799384u: goto label_799384;
        case 0x7993b4u: goto label_7993b4;
        case 0x7993e4u: goto label_7993e4;
        case 0x799410u: goto label_799410;
        case 0x799420u: goto label_799420;
        case 0x79944cu: goto label_79944c;
        case 0x799464u: goto label_799464;
        default: break;
    }

    ctx->pc = 0x799220u;

    // 0x799220: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x799220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x799224: 0x240448a0  addiu       $a0, $zero, 0x48A0
    ctx->pc = 0x799224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18592));
    // 0x799228: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x799228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x79922c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x79922cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x799230: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799234: 0xc1e6460  jal         func_799180
    ctx->pc = 0x799234u;
    SET_GPR_U32(ctx, 31, 0x79923Cu);
    ctx->pc = 0x799238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799234u;
    // 0x799238: 0x3c11007a  lui         $s1, 0x7A (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799180u, 0x799234u, 0x79923Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79923Cu;
label_79923c:
    // 0x79923c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79923cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799240: 0xc075bf8  jal         func_1D6FE0
    ctx->pc = 0x799240u;
    SET_GPR_U32(ctx, 31, 0x799248u);
    ctx->pc = 0x799244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799240u;
    // 0x799244: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6FE0u, 0x799240u, 0x799248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799248u;
label_799248:
    // 0x799248: 0xc0743aa  jal         func_1D0EA8
    ctx->pc = 0x799248u;
    SET_GPR_U32(ctx, 31, 0x799250u);
    ctx->pc = 0x79924Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799248u;
    // 0x79924c: 0x26043060  addiu       $a0, $s0, 0x3060 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0EA8u, 0x799248u, 0x799250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799250u;
label_799250:
    // 0x799250: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x799250u;
    SET_GPR_U32(ctx, 31, 0x799258u);
    ctx->pc = 0x799254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799250u;
    // 0x799254: 0xae309e00  sw          $s0, -0x6200($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294942208), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x799250u, 0x799258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799258u;
label_799258:
    // 0x799258: 0x10400083  beqz        $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x799258u;
    {
        const bool branch_taken_0x799258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79925Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799258u;
        // 0x79925c: 0x3c03005d  lui         $v1, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799258) {
            ctx->pc = 0x799468u;
            goto label_799468;
        }
    }
    ctx->pc = 0x799260u;
    // 0x799260: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x799260u;
    SET_GPR_U32(ctx, 31, 0x799268u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x799260u, 0x799268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799268u;
label_799268:
    // 0x799268: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x799268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x79926c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x79926cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x799270: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x799270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x799274: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x799274u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x799278: 0x0  nop
    ctx->pc = 0x799278u;
    // NOP
    // 0x79927c: 0x4500003f  bc1f        . + 4 + (0x3F << 2)
    ctx->pc = 0x79927Cu;
    {
        const bool branch_taken_0x79927c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x79927c) {
            ctx->pc = 0x79937Cu;
            goto label_79937c;
        }
    }
    ctx->pc = 0x799284u;
    // 0x799284: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x799284u;
    SET_GPR_U32(ctx, 31, 0x79928Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x799284u, 0x79928Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79928Cu;
label_79928c:
    // 0x79928c: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x79928cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x799290: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x799290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x799294: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x799294u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x799298: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x799298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79929c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x79929cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7992a0: 0x0  nop
    ctx->pc = 0x7992a0u;
    // NOP
    // 0x7992a4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x7992A4u;
    {
        const bool branch_taken_0x7992a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x7992A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992A4u;
        // 0x7992a8: 0x8e249e00  lw          $a0, -0x6200($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294942208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7992a4) {
            ctx->pc = 0x7992BCu;
            goto label_7992bc;
        }
    }
    ctx->pc = 0x7992ACu;
    // 0x7992ac: 0xc075c34  jal         func_1D70D0
    ctx->pc = 0x7992ACu;
    SET_GPR_U32(ctx, 31, 0x7992B4u);
    ctx->pc = 0x7992B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992ACu;
    // 0x7992b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70D0u, 0x7992ACu, 0x7992B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992B4u;
label_7992b4:
    // 0x7992b4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x7992B4u;
    {
        const bool branch_taken_0x7992b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7992B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992B4u;
        // 0x7992b8: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7992b4) {
            ctx->pc = 0x799360u;
            goto label_799360;
        }
    }
    ctx->pc = 0x7992BCu;
label_7992bc:
    // 0x7992bc: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x7992BCu;
    SET_GPR_U32(ctx, 31, 0x7992C4u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x7992BCu, 0x7992C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992C4u;
label_7992c4:
    // 0x7992c4: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x7992c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x7992c8: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x7992c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x7992cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x7992ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x7992d0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x7992d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7992d4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x7992d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7992d8: 0x0  nop
    ctx->pc = 0x7992d8u;
    // NOP
    // 0x7992dc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x7992DCu;
    {
        const bool branch_taken_0x7992dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x7992E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992DCu;
        // 0x7992e0: 0x8e249e00  lw          $a0, -0x6200($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294942208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7992dc) {
            ctx->pc = 0x7992F4u;
            goto label_7992f4;
        }
    }
    ctx->pc = 0x7992E4u;
    // 0x7992e4: 0xc075c34  jal         func_1D70D0
    ctx->pc = 0x7992E4u;
    SET_GPR_U32(ctx, 31, 0x7992ECu);
    ctx->pc = 0x7992E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992E4u;
    // 0x7992e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70D0u, 0x7992E4u, 0x7992ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992ECu;
label_7992ec:
    // 0x7992ec: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x7992ECu;
    {
        const bool branch_taken_0x7992ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7992F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992ECu;
        // 0x7992f0: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7992ec) {
            ctx->pc = 0x799360u;
            goto label_799360;
        }
    }
    ctx->pc = 0x7992F4u;
label_7992f4:
    // 0x7992f4: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x7992F4u;
    SET_GPR_U32(ctx, 31, 0x7992FCu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x7992F4u, 0x7992FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992FCu;
label_7992fc:
    // 0x7992fc: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x7992fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x799300: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x799300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x799304: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x799304u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x799308: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x799308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79930c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x79930cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x799310: 0x0  nop
    ctx->pc = 0x799310u;
    // NOP
    // 0x799314: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x799314u;
    {
        const bool branch_taken_0x799314 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x799318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799314u;
        // 0x799318: 0x8e249e00  lw          $a0, -0x6200($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294942208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799314) {
            ctx->pc = 0x79932Cu;
            goto label_79932c;
        }
    }
    ctx->pc = 0x79931Cu;
    // 0x79931c: 0xc075c34  jal         func_1D70D0
    ctx->pc = 0x79931Cu;
    SET_GPR_U32(ctx, 31, 0x799324u);
    ctx->pc = 0x799320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79931Cu;
    // 0x799320: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70D0u, 0x79931Cu, 0x799324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799324u;
label_799324:
    // 0x799324: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x799324u;
    {
        const bool branch_taken_0x799324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799324u;
        // 0x799328: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799324) {
            ctx->pc = 0x799360u;
            goto label_799360;
        }
    }
    ctx->pc = 0x79932Cu;
label_79932c:
    // 0x79932c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x79932Cu;
    SET_GPR_U32(ctx, 31, 0x799334u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79932Cu, 0x799334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799334u;
label_799334:
    // 0x799334: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x799334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x799338: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x799338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
    // 0x79933c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79933cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x799340: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x799340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x799344: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x799344u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x799348: 0x0  nop
    ctx->pc = 0x799348u;
    // NOP
    // 0x79934c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x79934Cu;
    {
        const bool branch_taken_0x79934c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x799350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79934Cu;
        // 0x799350: 0x8e249e00  lw          $a0, -0x6200($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294942208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79934c) {
            ctx->pc = 0x79935Cu;
            goto label_79935c;
        }
    }
    ctx->pc = 0x799354u;
    // 0x799354: 0xc075c34  jal         func_1D70D0
    ctx->pc = 0x799354u;
    SET_GPR_U32(ctx, 31, 0x79935Cu);
    ctx->pc = 0x799358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799354u;
    // 0x799358: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70D0u, 0x799354u, 0x79935Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79935Cu;
label_79935c:
    // 0x79935c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79935cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_799360:
    // 0x799360: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799360u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799364: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x799364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
    // 0x799368: 0x24a594e8  addiu       $a1, $a1, -0x6B18
    ctx->pc = 0x799368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939880));
    // 0x79936c: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x79936Cu;
    SET_GPR_U32(ctx, 31, 0x799374u);
    ctx->pc = 0x799370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79936Cu;
    // 0x799370: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x79936Cu, 0x799374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799374u;
label_799374:
    // 0x799374: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x799374u;
    {
        const bool branch_taken_0x799374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799374u;
        // 0x799378: 0x3c03005d  lui         $v1, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799374) {
            ctx->pc = 0x799468u;
            goto label_799468;
        }
    }
    ctx->pc = 0x79937Cu;
label_79937c:
    // 0x79937c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x79937Cu;
    SET_GPR_U32(ctx, 31, 0x799384u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79937Cu, 0x799384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799384u;
label_799384:
    // 0x799384: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x799384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x799388: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x799388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x79938c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79938cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x799390: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x799390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x799394: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x799394u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x799398: 0x0  nop
    ctx->pc = 0x799398u;
    // NOP
    // 0x79939c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x79939Cu;
    {
        const bool branch_taken_0x79939c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x7993A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79939Cu;
        // 0x7993a0: 0x8e249e00  lw          $a0, -0x6200($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294942208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79939c) {
            ctx->pc = 0x7993ACu;
            goto label_7993ac;
        }
    }
    ctx->pc = 0x7993A4u;
    // 0x7993a4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x7993A4u;
    {
        const bool branch_taken_0x7993a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7993A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993A4u;
        // 0x7993a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993a4) {
            ctx->pc = 0x799408u;
            goto label_799408;
        }
    }
    ctx->pc = 0x7993ACu;
label_7993ac:
    // 0x7993ac: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x7993ACu;
    SET_GPR_U32(ctx, 31, 0x7993B4u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x7993ACu, 0x7993B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993B4u;
label_7993b4:
    // 0x7993b4: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x7993b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x7993b8: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x7993b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x7993bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x7993bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x7993c0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x7993c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7993c4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x7993c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7993c8: 0x0  nop
    ctx->pc = 0x7993c8u;
    // NOP
    // 0x7993cc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x7993CCu;
    {
        const bool branch_taken_0x7993cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x7993D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993CCu;
        // 0x7993d0: 0x8e249e00  lw          $a0, -0x6200($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294942208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993cc) {
            ctx->pc = 0x7993DCu;
            goto label_7993dc;
        }
    }
    ctx->pc = 0x7993D4u;
    // 0x7993d4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x7993D4u;
    {
        const bool branch_taken_0x7993d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7993D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993D4u;
        // 0x7993d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993d4) {
            ctx->pc = 0x799408u;
            goto label_799408;
        }
    }
    ctx->pc = 0x7993DCu;
label_7993dc:
    // 0x7993dc: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x7993DCu;
    SET_GPR_U32(ctx, 31, 0x7993E4u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x7993DCu, 0x7993E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993E4u;
label_7993e4:
    // 0x7993e4: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x7993e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x7993e8: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x7993e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x7993ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x7993ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x7993f0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x7993f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7993f4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x7993f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7993f8: 0x0  nop
    ctx->pc = 0x7993f8u;
    // NOP
    // 0x7993fc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x7993FCu;
    {
        const bool branch_taken_0x7993fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x799400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993FCu;
        // 0x799400: 0x8e249e00  lw          $a0, -0x6200($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294942208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993fc) {
            ctx->pc = 0x799418u;
            goto label_799418;
        }
    }
    ctx->pc = 0x799404u;
    // 0x799404: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_799408:
    // 0x799408: 0xc0743f6  jal         func_1D0FD8
    ctx->pc = 0x799408u;
    SET_GPR_U32(ctx, 31, 0x799410u);
    ctx->pc = 0x79940Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799408u;
    // 0x79940c: 0x24843060  addiu       $a0, $a0, 0x3060 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0FD8u, 0x799408u, 0x799410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799410u;
label_799410:
    // 0x799410: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x799410u;
    {
        const bool branch_taken_0x799410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799410u;
        // 0x799414: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799410) {
            ctx->pc = 0x799450u;
            goto label_799450;
        }
    }
    ctx->pc = 0x799418u;
label_799418:
    // 0x799418: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x799418u;
    SET_GPR_U32(ctx, 31, 0x799420u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x799418u, 0x799420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799420u;
label_799420:
    // 0x799420: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x799420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x799424: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x799424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
    // 0x799428: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x799428u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79942c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x79942cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x799430: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x799430u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x799434: 0x0  nop
    ctx->pc = 0x799434u;
    // NOP
    // 0x799438: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x799438u;
    {
        const bool branch_taken_0x799438 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x79943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799438u;
        // 0x79943c: 0x8e249e00  lw          $a0, -0x6200($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294942208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799438) {
            ctx->pc = 0x79944Cu;
            goto label_79944c;
        }
    }
    ctx->pc = 0x799440u;
    // 0x799440: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x799440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x799444: 0xc0743f6  jal         func_1D0FD8
    ctx->pc = 0x799444u;
    SET_GPR_U32(ctx, 31, 0x79944Cu);
    ctx->pc = 0x799448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799444u;
    // 0x799448: 0x24843060  addiu       $a0, $a0, 0x3060 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0FD8u, 0x799444u, 0x79944Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79944Cu;
label_79944c:
    // 0x79944c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79944cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_799450:
    // 0x799450: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799450u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799454: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x799454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
    // 0x799458: 0x24a597f0  addiu       $a1, $a1, -0x6810
    ctx->pc = 0x799458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940656));
    // 0x79945c: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x79945Cu;
    SET_GPR_U32(ctx, 31, 0x799464u);
    ctx->pc = 0x799460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79945Cu;
    // 0x799460: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x79945Cu, 0x799464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799464u;
label_799464:
    // 0x799464: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x799464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_799468:
    // 0x799468: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x799468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x79946c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x79946cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799470: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x799470u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799474: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799478: 0xa462ae40  sh          $v0, -0x51C0($v1)
    ctx->pc = 0x799478u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294946368), (uint16_t)GPR_U32(ctx, 2));
    // 0x79947c: 0x3e00008  jr          $ra
    ctx->pc = 0x79947Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79947Cu;
        // 0x799480: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79947Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799484u;
    // 0x799484: 0x0  nop
    ctx->pc = 0x799484u;
    // NOP
    ctx->pc = 0x799488u;
}
} // namespace gh_r007
