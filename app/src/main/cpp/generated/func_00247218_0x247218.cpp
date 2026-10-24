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

// Function: func_00247218
// Address: 0x247218 - 0x247320
void func_00247218_0x247218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00247218_0x247218");
#endif

    switch (ctx->pc) {
        case 0x247258u: goto label_247258;
        case 0x24729cu: goto label_24729c;
        case 0x2472c0u: goto label_2472c0;
        case 0x2472d0u: goto label_2472d0;
        case 0x2472e4u: goto label_2472e4;
        case 0x2472f0u: goto label_2472f0;
        default: break;
    }

    ctx->pc = 0x247218u;

    // 0x247218: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x247218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24721c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24721cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x247220: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x247220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x247224: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x247224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x247228: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x247228u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24722c: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x24722cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x247230: 0xa2020617  sb          $v0, 0x617($s0)
    ctx->pc = 0x247230u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1559), (uint8_t)GPR_U32(ctx, 2));
    // 0x247234: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x247234u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x247238: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x247238u;
    {
        const bool branch_taken_0x247238 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24723Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247238u;
        // 0x24723c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247238) {
            ctx->pc = 0x247250u;
            goto label_247250;
        }
    }
    ctx->pc = 0x247240u;
    // 0x247240: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x247240u;
    {
        const bool branch_taken_0x247240 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x247240) {
            ctx->pc = 0x2472B8u;
            goto label_2472b8;
        }
    }
    ctx->pc = 0x247248u;
    // 0x247248: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x247248u;
    {
        const bool branch_taken_0x247248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24724Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247248u;
        // 0x24724c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247248) {
            ctx->pc = 0x247310u;
            goto label_247310;
        }
    }
    ctx->pc = 0x247250u;
label_247250:
    // 0x247250: 0xc09d91a  jal         func_276468
    ctx->pc = 0x247250u;
    SET_GPR_U32(ctx, 31, 0x247258u);
    ctx->pc = 0x247254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247250u;
    // 0x247254: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x247250u, 0x247258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247258u;
label_247258:
    // 0x247258: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x247258u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x24725c: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x24725cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x247260: 0x2402024f  addiu       $v0, $zero, 0x24F
    ctx->pc = 0x247260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 591));
    // 0x247264: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x247264u;
    {
        const bool branch_taken_0x247264 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x247268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247264u;
        // 0x247268: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247264) {
            ctx->pc = 0x247278u;
            goto label_247278;
        }
    }
    ctx->pc = 0x24726Cu;
    // 0x24726c: 0x8c431f70  lw          $v1, 0x1F70($v0)
    ctx->pc = 0x24726cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8048)));
    // 0x247270: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x247270u;
    {
        const bool branch_taken_0x247270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247270u;
        // 0x247274: 0x8c441f74  lw          $a0, 0x1F74($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8052)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247270) {
            ctx->pc = 0x247280u;
            goto label_247280;
        }
    }
    ctx->pc = 0x247278u;
label_247278:
    // 0x247278: 0x8c431f78  lw          $v1, 0x1F78($v0)
    ctx->pc = 0x247278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8056)));
    // 0x24727c: 0x8c441f7c  lw          $a0, 0x1F7C($v0)
    ctx->pc = 0x24727cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8060)));
label_247280:
    // 0x247280: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x247280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x247284: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x247284u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x247288: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x247288u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24728c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24728cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247290: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x247290u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x247294: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x247294u;
    SET_GPR_U32(ctx, 31, 0x24729Cu);
    ctx->pc = 0x247298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247294u;
    // 0x247298: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x247294u, 0x24729Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24729Cu;
label_24729c:
    // 0x24729c: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x24729cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2472a0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2472a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2472a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2472a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2472a8: 0xa6030568  sh          $v1, 0x568($s0)
    ctx->pc = 0x2472a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 3));
    // 0x2472ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2472acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2472b0: 0xa2040623  sb          $a0, 0x623($s0)
    ctx->pc = 0x2472b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1571), (uint8_t)GPR_U32(ctx, 4));
    // 0x2472b4: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x2472b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_2472b8:
    // 0x2472b8: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2472B8u;
    SET_GPR_U32(ctx, 31, 0x2472C0u);
    ctx->pc = 0x2472BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2472B8u;
    // 0x2472bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2472B8u, 0x2472C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2472C0u;
label_2472c0:
    // 0x2472c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2472C0u;
    {
        const bool branch_taken_0x2472c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2472c0) {
            ctx->pc = 0x2472D0u;
            goto label_2472d0;
        }
    }
    ctx->pc = 0x2472C8u;
    // 0x2472c8: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x2472C8u;
    SET_GPR_U32(ctx, 31, 0x2472D0u);
    ctx->pc = 0x2472CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2472C8u;
    // 0x2472cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x2472C8u, 0x2472D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2472D0u;
label_2472d0:
    // 0x2472d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2472d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2472d4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2472d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2472d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2472d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2472dc: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x2472DCu;
    SET_GPR_U32(ctx, 31, 0x2472E4u);
    ctx->pc = 0x2472E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2472DCu;
    // 0x2472e0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x2472DCu, 0x2472E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2472E4u;
label_2472e4:
    // 0x2472e4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2472e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2472e8: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x2472E8u;
    SET_GPR_U32(ctx, 31, 0x2472F0u);
    ctx->pc = 0x2472ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2472E8u;
    // 0x2472ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x2472E8u, 0x2472F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2472F0u;
label_2472f0:
    // 0x2472f0: 0x86020568  lh          $v0, 0x568($s0)
    ctx->pc = 0x2472f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
    // 0x2472f4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2472F4u;
    {
        const bool branch_taken_0x2472f4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2472F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2472F4u;
        // 0x2472f8: 0x96030568  lhu         $v1, 0x568($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2472f4) {
            ctx->pc = 0x247308u;
            goto label_247308;
        }
    }
    ctx->pc = 0x2472FCu;
    // 0x2472fc: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2472fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x247300: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x247300u;
    {
        const bool branch_taken_0x247300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247300u;
        // 0x247304: 0xa6020568  sh          $v0, 0x568($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247300) {
            ctx->pc = 0x24730Cu;
            goto label_24730c;
        }
    }
    ctx->pc = 0x247308u;
label_247308:
    // 0x247308: 0xa2000623  sb          $zero, 0x623($s0)
    ctx->pc = 0x247308u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1571), (uint8_t)GPR_U32(ctx, 0));
label_24730c:
    // 0x24730c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x24730cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_247310:
    // 0x247310: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x247310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x247314: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x247314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x247318: 0x3e00008  jr          $ra
    ctx->pc = 0x247318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24731Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247318u;
        // 0x24731c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247320u;
}
