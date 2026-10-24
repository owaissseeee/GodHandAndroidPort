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

// Function: func_001B8228
// Address: 0x1b8228 - 0x1b8338
void func_001B8228_0x1b8228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B8228_0x1b8228");
#endif

    switch (ctx->pc) {
        case 0x1b8228u: goto label_1b8228;
        case 0x1b822cu: goto label_1b822c;
        case 0x1b8230u: goto label_1b8230;
        case 0x1b8234u: goto label_1b8234;
        case 0x1b8238u: goto label_1b8238;
        case 0x1b823cu: goto label_1b823c;
        case 0x1b8240u: goto label_1b8240;
        case 0x1b8244u: goto label_1b8244;
        case 0x1b8248u: goto label_1b8248;
        case 0x1b824cu: goto label_1b824c;
        case 0x1b8250u: goto label_1b8250;
        case 0x1b8254u: goto label_1b8254;
        case 0x1b8258u: goto label_1b8258;
        case 0x1b825cu: goto label_1b825c;
        case 0x1b8260u: goto label_1b8260;
        case 0x1b8264u: goto label_1b8264;
        case 0x1b8268u: goto label_1b8268;
        case 0x1b826cu: goto label_1b826c;
        case 0x1b8270u: goto label_1b8270;
        case 0x1b8274u: goto label_1b8274;
        case 0x1b8278u: goto label_1b8278;
        case 0x1b827cu: goto label_1b827c;
        case 0x1b8280u: goto label_1b8280;
        case 0x1b8284u: goto label_1b8284;
        case 0x1b8288u: goto label_1b8288;
        case 0x1b828cu: goto label_1b828c;
        case 0x1b8290u: goto label_1b8290;
        case 0x1b8294u: goto label_1b8294;
        case 0x1b8298u: goto label_1b8298;
        case 0x1b829cu: goto label_1b829c;
        case 0x1b82a0u: goto label_1b82a0;
        case 0x1b82a4u: goto label_1b82a4;
        case 0x1b82a8u: goto label_1b82a8;
        case 0x1b82acu: goto label_1b82ac;
        case 0x1b82b0u: goto label_1b82b0;
        case 0x1b82b4u: goto label_1b82b4;
        case 0x1b82b8u: goto label_1b82b8;
        case 0x1b82bcu: goto label_1b82bc;
        case 0x1b82c0u: goto label_1b82c0;
        case 0x1b82c4u: goto label_1b82c4;
        case 0x1b82c8u: goto label_1b82c8;
        case 0x1b82ccu: goto label_1b82cc;
        case 0x1b82d0u: goto label_1b82d0;
        case 0x1b82d4u: goto label_1b82d4;
        case 0x1b82d8u: goto label_1b82d8;
        case 0x1b82dcu: goto label_1b82dc;
        case 0x1b82e0u: goto label_1b82e0;
        case 0x1b82e4u: goto label_1b82e4;
        case 0x1b82e8u: goto label_1b82e8;
        case 0x1b82ecu: goto label_1b82ec;
        case 0x1b82f0u: goto label_1b82f0;
        case 0x1b82f4u: goto label_1b82f4;
        case 0x1b82f8u: goto label_1b82f8;
        case 0x1b82fcu: goto label_1b82fc;
        case 0x1b8300u: goto label_1b8300;
        case 0x1b8304u: goto label_1b8304;
        case 0x1b8308u: goto label_1b8308;
        case 0x1b830cu: goto label_1b830c;
        case 0x1b8310u: goto label_1b8310;
        case 0x1b8314u: goto label_1b8314;
        case 0x1b8318u: goto label_1b8318;
        case 0x1b831cu: goto label_1b831c;
        case 0x1b8320u: goto label_1b8320;
        case 0x1b8324u: goto label_1b8324;
        case 0x1b8328u: goto label_1b8328;
        case 0x1b832cu: goto label_1b832c;
        case 0x1b8330u: goto label_1b8330;
        case 0x1b8334u: goto label_1b8334;
        default: break;
    }

    ctx->pc = 0x1b8228u;

label_1b8228:
    // 0x1b8228: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b8228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1b822c:
    // 0x1b822c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b822cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1b8230:
    // 0x1b8230: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b8230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b8234:
    // 0x1b8234: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b8234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b8238:
    // 0x1b8238: 0xc06ddac  jal         func_1B76B0
label_1b823c:
    if (ctx->pc == 0x1B823Cu) {
        ctx->pc = 0x1B823Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8238u;
        // 0x1b823c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8240u;
        goto label_1b8240;
    }
    ctx->pc = 0x1B8238u;
    SET_GPR_U32(ctx, 31, 0x1B8240u);
    ctx->pc = 0x1B823Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8238u;
    // 0x1b823c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x1B8238u, 0x1B8240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8240u;
label_1b8240:
    // 0x1b8240: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
label_1b8244:
    if (ctx->pc == 0x1B8244u) {
        ctx->pc = 0x1B8244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8240u;
        // 0x1b8244: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8248u;
        goto label_1b8248;
    }
    ctx->pc = 0x1B8240u;
    {
        const bool branch_taken_0x1b8240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8240u;
        // 0x1b8244: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8240) {
            ctx->pc = 0x1B8320u;
            goto label_1b8320;
        }
    }
    ctx->pc = 0x1B8248u;
label_1b8248:
    // 0x1b8248: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x1b8248u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_1b824c:
    // 0x1b824c: 0x2446dd88  addiu       $a2, $v0, -0x2278
    ctx->pc = 0x1b824cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958472));
label_1b8250:
    // 0x1b8250: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1b8250u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b8254:
    // 0x1b8254: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1b8254u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1b8258:
    // 0x1b8258: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x1b8258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1b825c:
    // 0x1b825c: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x1b825cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_1b8260:
    // 0x1b8260: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_1b8264:
    if (ctx->pc == 0x1B8264u) {
        ctx->pc = 0x1B8264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8260u;
        // 0x1b8264: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8268u;
        goto label_1b8268;
    }
    ctx->pc = 0x1B8260u;
    {
        const bool branch_taken_0x1b8260 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1B8264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8260u;
        // 0x1b8264: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8260) {
            ctx->pc = 0x1B828Cu;
            goto label_1b828c;
        }
    }
    ctx->pc = 0x1B8268u;
label_1b8268:
    // 0x1b8268: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x1b8268u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_1b826c:
    // 0x1b826c: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1b826cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1b8270:
    // 0x1b8270: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1b8270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1b8274:
    // 0x1b8274: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1b8274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b8278:
    // 0x1b8278: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b8278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1b827c:
    // 0x1b827c: 0xdc71fff8  ld          $s1, -0x8($v1)
    ctx->pc = 0x1b827cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_1b8280:
    // 0x1b8280: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x1b8280u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_1b8284:
    // 0x1b8284: 0x10000004  b           . + 4 + (0x4 << 2)
label_1b8288:
    if (ctx->pc == 0x1B8288u) {
        ctx->pc = 0x1B8288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8284u;
        // 0x1b8288: 0x2503dd88  addiu       $v1, $t0, -0x2278 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958472));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B828Cu;
        goto label_1b828c;
    }
    ctx->pc = 0x1B8284u;
    {
        const bool branch_taken_0x1b8284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8284u;
        // 0x1b8288: 0x2503dd88  addiu       $v1, $t0, -0x2278 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958472));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8284) {
            ctx->pc = 0x1B8298u;
            goto label_1b8298;
        }
    }
    ctx->pc = 0x1B828Cu;
label_1b828c:
    // 0x1b828c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1b828cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1b8290:
    // 0x1b8290: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1b8290u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1b8294:
    // 0x1b8294: 0x2503dd88  addiu       $v1, $t0, -0x2278
    ctx->pc = 0x1b8294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958472));
label_1b8298:
    // 0x1b8298: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x1b8298u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_1b829c:
    // 0x1b829c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b829cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b82a0:
    // 0x1b82a0: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_1b82a4:
    if (ctx->pc == 0x1B82A4u) {
        ctx->pc = 0x1B82A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B82A0u;
        // 0x1b82a4: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B82A8u;
        goto label_1b82a8;
    }
    ctx->pc = 0x1B82A0u;
    {
        const bool branch_taken_0x1b82a0 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1B82A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B82A0u;
        // 0x1b82a4: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b82a0) {
            ctx->pc = 0x1B82BCu;
            goto label_1b82bc;
        }
    }
    ctx->pc = 0x1B82A8u;
label_1b82a8:
    // 0x1b82a8: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x1b82a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_1b82ac:
    // 0x1b82ac: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1b82acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1b82b0:
    // 0x1b82b0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1b82b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1b82b4:
    // 0x1b82b4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1b82b8:
    if (ctx->pc == 0x1B82B8u) {
        ctx->pc = 0x1B82B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B82B4u;
        // 0x1b82b8: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B82BCu;
        goto label_1b82bc;
    }
    ctx->pc = 0x1B82B4u;
    {
        const bool branch_taken_0x1b82b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B82B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B82B4u;
        // 0x1b82b8: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b82b4) {
            ctx->pc = 0x1B82C0u;
            goto label_1b82c0;
        }
    }
    ctx->pc = 0x1B82BCu;
label_1b82bc:
    // 0x1b82bc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1b82bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1b82c0:
    // 0x1b82c0: 0xc0f809  jalr        $a2
label_1b82c4:
    if (ctx->pc == 0x1B82C4u) {
        ctx->pc = 0x1B82C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B82C0u;
        // 0x1b82c4: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B82C8u;
        goto label_1b82c8;
    }
    ctx->pc = 0x1B82C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1B82C8u);
        ctx->pc = 0x1B82C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B82C0u;
        // 0x1b82c4: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B82C0u, 0x1B82C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B82C8u;
label_1b82c8:
    // 0x1b82c8: 0xc0527ae  jal         func_149EB8
label_1b82cc:
    if (ctx->pc == 0x1B82CCu) {
        ctx->pc = 0x1B82CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B82C8u;
        // 0x1b82cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B82D0u;
        goto label_1b82d0;
    }
    ctx->pc = 0x1B82C8u;
    SET_GPR_U32(ctx, 31, 0x1B82D0u);
    ctx->pc = 0x1B82CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B82C8u;
    // 0x1b82cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x1B82C8u, 0x1B82D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B82D0u;
label_1b82d0:
    // 0x1b82d0: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x1b82d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_1b82d4:
    // 0x1b82d4: 0x26030490  addiu       $v1, $s0, 0x490
    ctx->pc = 0x1b82d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1168));
label_1b82d8:
    // 0x1b82d8: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
label_1b82dc:
    if (ctx->pc == 0x1B82DCu) {
        ctx->pc = 0x1B82DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B82D8u;
        // 0x1b82dc: 0x260305d0  addiu       $v1, $s0, 0x5D0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1488));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B82E0u;
        goto label_1b82e0;
    }
    ctx->pc = 0x1B82D8u;
    {
        const bool branch_taken_0x1b82d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b82d8) {
            ctx->pc = 0x1B82DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B82D8u;
            // 0x1b82dc: 0x260305d0  addiu       $v1, $s0, 0x5D0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1488));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B82FCu;
            goto label_1b82fc;
        }
    }
    ctx->pc = 0x1B82E0u;
label_1b82e0:
    // 0x1b82e0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1b82e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b82e4:
    // 0x1b82e4: 0xe6000490  swc1        $f0, 0x490($s0)
    ctx->pc = 0x1b82e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1168), bits); }
label_1b82e8:
    // 0x1b82e8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1b82e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b82ec:
    // 0x1b82ec: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1b82ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_1b82f0:
    // 0x1b82f0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1b82f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b82f4:
    // 0x1b82f4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1b82f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1b82f8:
    // 0x1b82f8: 0x260305d0  addiu       $v1, $s0, 0x5D0
    ctx->pc = 0x1b82f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1488));
label_1b82fc:
    // 0x1b82fc: 0x26020100  addiu       $v0, $s0, 0x100
    ctx->pc = 0x1b82fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_1b8300:
    // 0x1b8300: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
label_1b8304:
    if (ctx->pc == 0x1B8304u) {
        ctx->pc = 0x1B8304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8300u;
        // 0x1b8304: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8308u;
        goto label_1b8308;
    }
    ctx->pc = 0x1B8300u;
    {
        const bool branch_taken_0x1b8300 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b8300) {
            ctx->pc = 0x1B8304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B8300u;
            // 0x1b8304: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B8324u;
            goto label_1b8324;
        }
    }
    ctx->pc = 0x1B8308u;
label_1b8308:
    // 0x1b8308: 0xc6000100  lwc1        $f0, 0x100($s0)
    ctx->pc = 0x1b8308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b830c:
    // 0x1b830c: 0xe60005d0  swc1        $f0, 0x5D0($s0)
    ctx->pc = 0x1b830cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1488), bits); }
label_1b8310:
    // 0x1b8310: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1b8310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b8314:
    // 0x1b8314: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1b8314u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_1b8318:
    // 0x1b8318: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1b8318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b831c:
    // 0x1b831c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1b831cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1b8320:
    // 0x1b8320: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b8320u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b8324:
    // 0x1b8324: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b8324u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b8328:
    // 0x1b8328: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b8328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b832c:
    // 0x1b832c: 0x3e00008  jr          $ra
label_1b8330:
    if (ctx->pc == 0x1B8330u) {
        ctx->pc = 0x1B8330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B832Cu;
        // 0x1b8330: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8334u;
        goto label_1b8334;
    }
    ctx->pc = 0x1B832Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B832Cu;
        // 0x1b8330: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B832Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8334u;
label_1b8334:
    // 0x1b8334: 0x0  nop
    ctx->pc = 0x1b8334u;
    // NOP
    ctx->pc = 0x1b8338u;
}
