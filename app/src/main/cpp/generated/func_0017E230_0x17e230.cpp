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

// Function: func_0017E230
// Address: 0x17e230 - 0x17e2f0
void func_0017E230_0x17e230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0017E230_0x17e230");
#endif

    switch (ctx->pc) {
        case 0x17e230u: goto label_17e230;
        case 0x17e234u: goto label_17e234;
        case 0x17e238u: goto label_17e238;
        case 0x17e23cu: goto label_17e23c;
        case 0x17e240u: goto label_17e240;
        case 0x17e244u: goto label_17e244;
        case 0x17e248u: goto label_17e248;
        case 0x17e24cu: goto label_17e24c;
        case 0x17e250u: goto label_17e250;
        case 0x17e254u: goto label_17e254;
        case 0x17e258u: goto label_17e258;
        case 0x17e25cu: goto label_17e25c;
        case 0x17e260u: goto label_17e260;
        case 0x17e264u: goto label_17e264;
        case 0x17e268u: goto label_17e268;
        case 0x17e26cu: goto label_17e26c;
        case 0x17e270u: goto label_17e270;
        case 0x17e274u: goto label_17e274;
        case 0x17e278u: goto label_17e278;
        case 0x17e27cu: goto label_17e27c;
        case 0x17e280u: goto label_17e280;
        case 0x17e284u: goto label_17e284;
        case 0x17e288u: goto label_17e288;
        case 0x17e28cu: goto label_17e28c;
        case 0x17e290u: goto label_17e290;
        case 0x17e294u: goto label_17e294;
        case 0x17e298u: goto label_17e298;
        case 0x17e29cu: goto label_17e29c;
        case 0x17e2a0u: goto label_17e2a0;
        case 0x17e2a4u: goto label_17e2a4;
        case 0x17e2a8u: goto label_17e2a8;
        case 0x17e2acu: goto label_17e2ac;
        case 0x17e2b0u: goto label_17e2b0;
        case 0x17e2b4u: goto label_17e2b4;
        case 0x17e2b8u: goto label_17e2b8;
        case 0x17e2bcu: goto label_17e2bc;
        case 0x17e2c0u: goto label_17e2c0;
        case 0x17e2c4u: goto label_17e2c4;
        case 0x17e2c8u: goto label_17e2c8;
        case 0x17e2ccu: goto label_17e2cc;
        case 0x17e2d0u: goto label_17e2d0;
        case 0x17e2d4u: goto label_17e2d4;
        case 0x17e2d8u: goto label_17e2d8;
        case 0x17e2dcu: goto label_17e2dc;
        case 0x17e2e0u: goto label_17e2e0;
        case 0x17e2e4u: goto label_17e2e4;
        case 0x17e2e8u: goto label_17e2e8;
        case 0x17e2ecu: goto label_17e2ec;
        default: break;
    }

    ctx->pc = 0x17e230u;

label_17e230:
    // 0x17e230: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17e230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_17e234:
    // 0x17e234: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x17e234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_17e238:
    // 0x17e238: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17e238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_17e23c:
    // 0x17e23c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17e23cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_17e240:
    // 0x17e240: 0xc06ddac  jal         func_1B76B0
label_17e244:
    if (ctx->pc == 0x17E244u) {
        ctx->pc = 0x17E244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E240u;
        // 0x17e244: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E248u;
        goto label_17e248;
    }
    ctx->pc = 0x17E240u;
    SET_GPR_U32(ctx, 31, 0x17E248u);
    ctx->pc = 0x17E244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E240u;
    // 0x17e244: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x17E240u, 0x17E248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E248u;
label_17e248:
    // 0x17e248: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_17e24c:
    if (ctx->pc == 0x17E24Cu) {
        ctx->pc = 0x17E24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E248u;
        // 0x17e24c: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E250u;
        goto label_17e250;
    }
    ctx->pc = 0x17E248u;
    {
        const bool branch_taken_0x17e248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E248u;
        // 0x17e24c: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e248) {
            ctx->pc = 0x17E2D8u;
            goto label_17e2d8;
        }
    }
    ctx->pc = 0x17E250u;
label_17e250:
    // 0x17e250: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x17e250u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_17e254:
    // 0x17e254: 0x2446da68  addiu       $a2, $v0, -0x2598
    ctx->pc = 0x17e254u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957672));
label_17e258:
    // 0x17e258: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x17e258u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17e25c:
    // 0x17e25c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x17e25cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_17e260:
    // 0x17e260: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x17e260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_17e264:
    // 0x17e264: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x17e264u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_17e268:
    // 0x17e268: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_17e26c:
    if (ctx->pc == 0x17E26Cu) {
        ctx->pc = 0x17E26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E268u;
        // 0x17e26c: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E270u;
        goto label_17e270;
    }
    ctx->pc = 0x17E268u;
    {
        const bool branch_taken_0x17e268 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x17E26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E268u;
        // 0x17e26c: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e268) {
            ctx->pc = 0x17E294u;
            goto label_17e294;
        }
    }
    ctx->pc = 0x17E270u;
label_17e270:
    // 0x17e270: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x17e270u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_17e274:
    // 0x17e274: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x17e274u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_17e278:
    // 0x17e278: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x17e278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_17e27c:
    // 0x17e27c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x17e27cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17e280:
    // 0x17e280: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17e280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_17e284:
    // 0x17e284: 0xdc71fff8  ld          $s1, -0x8($v1)
    ctx->pc = 0x17e284u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_17e288:
    // 0x17e288: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x17e288u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_17e28c:
    // 0x17e28c: 0x10000004  b           . + 4 + (0x4 << 2)
label_17e290:
    if (ctx->pc == 0x17E290u) {
        ctx->pc = 0x17E290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E28Cu;
        // 0x17e290: 0x2503da68  addiu       $v1, $t0, -0x2598 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E294u;
        goto label_17e294;
    }
    ctx->pc = 0x17E28Cu;
    {
        const bool branch_taken_0x17e28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E28Cu;
        // 0x17e290: 0x2503da68  addiu       $v1, $t0, -0x2598 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e28c) {
            ctx->pc = 0x17E2A0u;
            goto label_17e2a0;
        }
    }
    ctx->pc = 0x17E294u;
label_17e294:
    // 0x17e294: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x17e294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_17e298:
    // 0x17e298: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x17e298u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_17e29c:
    // 0x17e29c: 0x2503da68  addiu       $v1, $t0, -0x2598
    ctx->pc = 0x17e29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957672));
label_17e2a0:
    // 0x17e2a0: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x17e2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_17e2a4:
    // 0x17e2a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17e2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17e2a8:
    // 0x17e2a8: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_17e2ac:
    if (ctx->pc == 0x17E2ACu) {
        ctx->pc = 0x17E2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E2A8u;
        // 0x17e2ac: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E2B0u;
        goto label_17e2b0;
    }
    ctx->pc = 0x17E2A8u;
    {
        const bool branch_taken_0x17e2a8 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x17E2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E2A8u;
        // 0x17e2ac: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e2a8) {
            ctx->pc = 0x17E2C4u;
            goto label_17e2c4;
        }
    }
    ctx->pc = 0x17E2B0u;
label_17e2b0:
    // 0x17e2b0: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x17e2b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_17e2b4:
    // 0x17e2b4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x17e2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_17e2b8:
    // 0x17e2b8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x17e2b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_17e2bc:
    // 0x17e2bc: 0x10000002  b           . + 4 + (0x2 << 2)
label_17e2c0:
    if (ctx->pc == 0x17E2C0u) {
        ctx->pc = 0x17E2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E2BCu;
        // 0x17e2c0: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E2C4u;
        goto label_17e2c4;
    }
    ctx->pc = 0x17E2BCu;
    {
        const bool branch_taken_0x17e2bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E2BCu;
        // 0x17e2c0: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e2bc) {
            ctx->pc = 0x17E2C8u;
            goto label_17e2c8;
        }
    }
    ctx->pc = 0x17E2C4u;
label_17e2c4:
    // 0x17e2c4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x17e2c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_17e2c8:
    // 0x17e2c8: 0xc0f809  jalr        $a2
label_17e2cc:
    if (ctx->pc == 0x17E2CCu) {
        ctx->pc = 0x17E2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E2C8u;
        // 0x17e2cc: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E2D0u;
        goto label_17e2d0;
    }
    ctx->pc = 0x17E2C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x17E2D0u);
        ctx->pc = 0x17E2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E2C8u;
        // 0x17e2cc: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E2C8u, 0x17E2D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17E2D0u;
label_17e2d0:
    // 0x17e2d0: 0xc06ddb6  jal         func_1B76D8
label_17e2d4:
    if (ctx->pc == 0x17E2D4u) {
        ctx->pc = 0x17E2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E2D0u;
        // 0x17e2d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E2D8u;
        goto label_17e2d8;
    }
    ctx->pc = 0x17E2D0u;
    SET_GPR_U32(ctx, 31, 0x17E2D8u);
    ctx->pc = 0x17E2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E2D0u;
    // 0x17e2d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x17E2D0u, 0x17E2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E2D8u;
label_17e2d8:
    // 0x17e2d8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x17e2d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17e2dc:
    // 0x17e2dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17e2dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17e2e0:
    // 0x17e2e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17e2e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17e2e4:
    // 0x17e2e4: 0x3e00008  jr          $ra
label_17e2e8:
    if (ctx->pc == 0x17E2E8u) {
        ctx->pc = 0x17E2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E2E4u;
        // 0x17e2e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E2ECu;
        goto label_17e2ec;
    }
    ctx->pc = 0x17E2E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E2E4u;
        // 0x17e2e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E2E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E2ECu;
label_17e2ec:
    // 0x17e2ec: 0x0  nop
    ctx->pc = 0x17e2ecu;
    // NOP
    ctx->pc = 0x17e2f0u;
}
