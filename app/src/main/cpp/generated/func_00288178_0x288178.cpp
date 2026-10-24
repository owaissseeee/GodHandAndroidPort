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

// Function: func_00288178
// Address: 0x288178 - 0x288350
void func_00288178_0x288178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00288178_0x288178");
#endif

    switch (ctx->pc) {
        case 0x2881c0u: goto label_2881c0;
        case 0x288228u: goto label_288228;
        case 0x28823cu: goto label_28823c;
        case 0x288244u: goto label_288244;
        case 0x28824cu: goto label_28824c;
        case 0x288298u: goto label_288298;
        case 0x2882a0u: goto label_2882a0;
        case 0x2882acu: goto label_2882ac;
        case 0x2882d8u: goto label_2882d8;
        case 0x288300u: goto label_288300;
        case 0x288314u: goto label_288314;
        case 0x288334u: goto label_288334;
        case 0x28833cu: goto label_28833c;
        default: break;
    }

    ctx->pc = 0x288178u;

    // 0x288178: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x288178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28817c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x28817cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x288180: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x288180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x288184: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x288184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x288188: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x288188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28818c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28818cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288190: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x288190u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x288194: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x288194u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x288198: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x288198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x28819c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28819cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2881a0: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x2881a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x2881a4: 0x8e0315b0  lw          $v1, 0x15B0($s0)
    ctx->pc = 0x2881a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x2881a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2881a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2881ac: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x2881acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x2881b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2881b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2881b4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2881b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2881b8: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x2881B8u;
    SET_GPR_U32(ctx, 31, 0x2881C0u);
    ctx->pc = 0x2881BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2881B8u;
    // 0x2881bc: 0xae0315b0  sw          $v1, 0x15B0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 5552), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x2881B8u, 0x2881C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2881C0u;
label_2881c0:
    // 0x2881c0: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x2881c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2881c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2881c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2881c8: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2881C8u;
    {
        const bool branch_taken_0x2881c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2881CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2881C8u;
        // 0x2881cc: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2881c8) {
            ctx->pc = 0x288234u;
            goto label_288234;
        }
    }
    ctx->pc = 0x2881D0u;
    // 0x2881d0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2881D0u;
    {
        const bool branch_taken_0x2881d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2881d0) {
            ctx->pc = 0x2881D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2881D0u;
            // 0x2881d4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2881E8u;
            goto label_2881e8;
        }
    }
    ctx->pc = 0x2881D8u;
    // 0x2881d8: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2881D8u;
    {
        const bool branch_taken_0x2881d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2881d8) {
            ctx->pc = 0x2881DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2881D8u;
            // 0x2881dc: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x288200u;
            goto label_288200;
        }
    }
    ctx->pc = 0x2881E0u;
    // 0x2881e0: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x2881E0u;
    {
        const bool branch_taken_0x2881e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2881E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2881E0u;
        // 0x2881e4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2881e0) {
            ctx->pc = 0x288340u;
            goto label_288340;
        }
    }
    ctx->pc = 0x2881E8u;
label_2881e8:
    // 0x2881e8: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2881E8u;
    {
        const bool branch_taken_0x2881e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2881ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2881E8u;
        // 0x2881ec: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2881e8) {
            ctx->pc = 0x288268u;
            goto label_288268;
        }
    }
    ctx->pc = 0x2881F0u;
    // 0x2881f0: 0x10620046  beq         $v1, $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x2881F0u;
    {
        const bool branch_taken_0x2881f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2881f0) {
            ctx->pc = 0x28830Cu;
            goto label_28830c;
        }
    }
    ctx->pc = 0x2881F8u;
    // 0x2881f8: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x2881F8u;
    {
        const bool branch_taken_0x2881f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2881FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2881F8u;
        // 0x2881fc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2881f8) {
            ctx->pc = 0x288340u;
            goto label_288340;
        }
    }
    ctx->pc = 0x288200u;
label_288200:
    // 0x288200: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x288200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288204: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x288204u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x288208: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x288208u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28820c: 0x8c450180  lw          $a1, 0x180($v0)
    ctx->pc = 0x28820cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 384)));
    // 0x288210: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x288210u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288214: 0x8c460184  lw          $a2, 0x184($v0)
    ctx->pc = 0x288214u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x288218: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x288218u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28821c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x28821cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x288220: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x288220u;
    SET_GPR_U32(ctx, 31, 0x288228u);
    ctx->pc = 0x288224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288220u;
    // 0x288224: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x288220u, 0x288228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288228u;
label_288228:
    // 0x288228: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x288228u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x28822c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28822cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x288230: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x288230u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_288234:
    // 0x288234: 0xc055f06  jal         func_157C18
    ctx->pc = 0x288234u;
    SET_GPR_U32(ctx, 31, 0x28823Cu);
    ctx->pc = 0x288238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288234u;
    // 0x288238: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x288234u, 0x28823Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28823Cu;
label_28823c:
    // 0x28823c: 0xc0528ac  jal         func_14A2B0
    ctx->pc = 0x28823Cu;
    SET_GPR_U32(ctx, 31, 0x288244u);
    ctx->pc = 0x288240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28823Cu;
    // 0x288240: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A2B0u, 0x28823Cu, 0x288244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288244u;
label_288244:
    // 0x288244: 0xc0b6a6e  jal         func_2DA9B8
    ctx->pc = 0x288244u;
    SET_GPR_U32(ctx, 31, 0x28824Cu);
    ctx->pc = 0x288248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288244u;
    // 0x288248: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA9B8u, 0x288244u, 0x28824Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28824Cu;
label_28824c:
    // 0x28824c: 0x8e0215b0  lw          $v0, 0x15B0($s0)
    ctx->pc = 0x28824cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x288250: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x288250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x288254: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x288254u;
    {
        const bool branch_taken_0x288254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288254u;
        // 0x288258: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288254) {
            ctx->pc = 0x28833Cu;
            goto label_28833c;
        }
    }
    ctx->pc = 0x28825Cu;
    // 0x28825c: 0xa600054a  sh          $zero, 0x54A($s0)
    ctx->pc = 0x28825cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 0));
    // 0x288260: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x288260u;
    {
        const bool branch_taken_0x288260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288260u;
        // 0x288264: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288260) {
            ctx->pc = 0x28833Cu;
            goto label_28833c;
        }
    }
    ctx->pc = 0x288268u;
label_288268:
    // 0x288268: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x288268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28826c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x28826cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x288270: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x288270u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x288274: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x288274u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288278: 0x8c450188  lw          $a1, 0x188($v0)
    ctx->pc = 0x288278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 392)));
    // 0x28827c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x28827cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288280: 0x8c46018c  lw          $a2, 0x18C($v0)
    ctx->pc = 0x288280u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 396)));
    // 0x288284: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x288284u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x288288: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x288288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x28828c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28828cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288290: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x288290u;
    SET_GPR_U32(ctx, 31, 0x288298u);
    ctx->pc = 0x288294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288290u;
    // 0x288294: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x288290u, 0x288298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288298u;
label_288298:
    // 0x288298: 0xc0a3ec2  jal         func_28FB08
    ctx->pc = 0x288298u;
    SET_GPR_U32(ctx, 31, 0x2882A0u);
    ctx->pc = 0x28829Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288298u;
    // 0x28829c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FB08u, 0x288298u, 0x2882A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2882A0u;
label_2882a0:
    // 0x2882a0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2882a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2882a4: 0xc07efba  jal         func_1FBEE8
    ctx->pc = 0x2882A4u;
    SET_GPR_U32(ctx, 31, 0x2882ACu);
    ctx->pc = 0x2882A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2882A4u;
    // 0x2882a8: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBEE8u, 0x2882A4u, 0x2882ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2882ACu;
label_2882ac:
    // 0x2882ac: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2882acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2882b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2882b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2882b4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2882b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2882b8: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2882b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2882bc: 0x8c450090  lw          $a1, 0x90($v0)
    ctx->pc = 0x2882bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x2882c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2882c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2882c4: 0x8c460094  lw          $a2, 0x94($v0)
    ctx->pc = 0x2882c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x2882c8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2882c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2882cc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2882ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2882d0: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2882D0u;
    SET_GPR_U32(ctx, 31, 0x2882D8u);
    ctx->pc = 0x2882D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2882D0u;
    // 0x2882d4: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2882D0u, 0x2882D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2882D8u;
label_2882d8:
    // 0x2882d8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2882d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2882dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2882dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2882e0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x2882e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x2882e4: 0x2406005f  addiu       $a2, $zero, 0x5F
    ctx->pc = 0x2882e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x2882e8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2882e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2882ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2882ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2882f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2882f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2882f4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2882f4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2882f8: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x2882F8u;
    SET_GPR_U32(ctx, 31, 0x288300u);
    ctx->pc = 0x2882FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2882F8u;
    // 0x2882fc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x2882F8u, 0x288300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288300u;
label_288300:
    // 0x288300: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x288300u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x288304: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x288304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x288308: 0xa20302f6  sb          $v1, 0x2F6($s0)
    ctx->pc = 0x288308u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 3));
label_28830c:
    // 0x28830c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x28830Cu;
    SET_GPR_U32(ctx, 31, 0x288314u);
    ctx->pc = 0x288310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28830Cu;
    // 0x288310: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x28830Cu, 0x288314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288314u;
label_288314:
    // 0x288314: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x288314u;
    {
        const bool branch_taken_0x288314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288314u;
        // 0x288318: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288314) {
            ctx->pc = 0x28832Cu;
            goto label_28832c;
        }
    }
    ctx->pc = 0x28831Cu;
    // 0x28831c: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x28831cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x288320: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x288320u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x288324: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x288324u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x288328: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x288328u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_28832c:
    // 0x28832c: 0xc0528ac  jal         func_14A2B0
    ctx->pc = 0x28832Cu;
    SET_GPR_U32(ctx, 31, 0x288334u);
    ctx->pc = 0x288330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28832Cu;
    // 0x288330: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A2B0u, 0x28832Cu, 0x288334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288334u;
label_288334:
    // 0x288334: 0xc0b6a6e  jal         func_2DA9B8
    ctx->pc = 0x288334u;
    SET_GPR_U32(ctx, 31, 0x28833Cu);
    ctx->pc = 0x288338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288334u;
    // 0x288338: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA9B8u, 0x288334u, 0x28833Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28833Cu;
label_28833c:
    // 0x28833c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x28833cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_288340:
    // 0x288340: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x288340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x288344: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x288344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x288348: 0x3e00008  jr          $ra
    ctx->pc = 0x288348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28834Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288348u;
        // 0x28834c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288350u;
}
