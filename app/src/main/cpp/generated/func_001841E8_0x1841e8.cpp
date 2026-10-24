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

// Function: func_001841E8
// Address: 0x1841e8 - 0x1842b0
void func_001841E8_0x1841e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001841E8_0x1841e8");
#endif

    switch (ctx->pc) {
        case 0x1841e8u: goto label_1841e8;
        case 0x1841ecu: goto label_1841ec;
        case 0x1841f0u: goto label_1841f0;
        case 0x1841f4u: goto label_1841f4;
        case 0x1841f8u: goto label_1841f8;
        case 0x1841fcu: goto label_1841fc;
        case 0x184200u: goto label_184200;
        case 0x184204u: goto label_184204;
        case 0x184208u: goto label_184208;
        case 0x18420cu: goto label_18420c;
        case 0x184210u: goto label_184210;
        case 0x184214u: goto label_184214;
        case 0x184218u: goto label_184218;
        case 0x18421cu: goto label_18421c;
        case 0x184220u: goto label_184220;
        case 0x184224u: goto label_184224;
        case 0x184228u: goto label_184228;
        case 0x18422cu: goto label_18422c;
        case 0x184230u: goto label_184230;
        case 0x184234u: goto label_184234;
        case 0x184238u: goto label_184238;
        case 0x18423cu: goto label_18423c;
        case 0x184240u: goto label_184240;
        case 0x184244u: goto label_184244;
        case 0x184248u: goto label_184248;
        case 0x18424cu: goto label_18424c;
        case 0x184250u: goto label_184250;
        case 0x184254u: goto label_184254;
        case 0x184258u: goto label_184258;
        case 0x18425cu: goto label_18425c;
        case 0x184260u: goto label_184260;
        case 0x184264u: goto label_184264;
        case 0x184268u: goto label_184268;
        case 0x18426cu: goto label_18426c;
        case 0x184270u: goto label_184270;
        case 0x184274u: goto label_184274;
        case 0x184278u: goto label_184278;
        case 0x18427cu: goto label_18427c;
        case 0x184280u: goto label_184280;
        case 0x184284u: goto label_184284;
        case 0x184288u: goto label_184288;
        case 0x18428cu: goto label_18428c;
        case 0x184290u: goto label_184290;
        case 0x184294u: goto label_184294;
        case 0x184298u: goto label_184298;
        case 0x18429cu: goto label_18429c;
        case 0x1842a0u: goto label_1842a0;
        case 0x1842a4u: goto label_1842a4;
        case 0x1842a8u: goto label_1842a8;
        case 0x1842acu: goto label_1842ac;
        default: break;
    }

    ctx->pc = 0x1841e8u;

label_1841e8:
    // 0x1841e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1841e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1841ec:
    // 0x1841ec: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1841ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1841f0:
    // 0x1841f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1841f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1841f4:
    // 0x1841f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1841f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1841f8:
    // 0x1841f8: 0xc06ddac  jal         func_1B76B0
label_1841fc:
    if (ctx->pc == 0x1841FCu) {
        ctx->pc = 0x1841FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1841F8u;
        // 0x1841fc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184200u;
        goto label_184200;
    }
    ctx->pc = 0x1841F8u;
    SET_GPR_U32(ctx, 31, 0x184200u);
    ctx->pc = 0x1841FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1841F8u;
    // 0x1841fc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x1841F8u, 0x184200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184200u;
label_184200:
    // 0x184200: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_184204:
    if (ctx->pc == 0x184204u) {
        ctx->pc = 0x184204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184200u;
        // 0x184204: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184208u;
        goto label_184208;
    }
    ctx->pc = 0x184200u;
    {
        const bool branch_taken_0x184200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x184204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184200u;
        // 0x184204: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184200) {
            ctx->pc = 0x18429Cu;
            goto label_18429c;
        }
    }
    ctx->pc = 0x184208u;
label_184208:
    // 0x184208: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x184208u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_18420c:
    // 0x18420c: 0x2446db38  addiu       $a2, $v0, -0x24C8
    ctx->pc = 0x18420cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957880));
label_184210:
    // 0x184210: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x184210u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_184214:
    // 0x184214: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x184214u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_184218:
    // 0x184218: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x184218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_18421c:
    // 0x18421c: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x18421cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_184220:
    // 0x184220: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_184224:
    if (ctx->pc == 0x184224u) {
        ctx->pc = 0x184224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184220u;
        // 0x184224: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184228u;
        goto label_184228;
    }
    ctx->pc = 0x184220u;
    {
        const bool branch_taken_0x184220 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x184224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184220u;
        // 0x184224: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184220) {
            ctx->pc = 0x18424Cu;
            goto label_18424c;
        }
    }
    ctx->pc = 0x184228u;
label_184228:
    // 0x184228: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x184228u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_18422c:
    // 0x18422c: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x18422cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_184230:
    // 0x184230: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x184230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_184234:
    // 0x184234: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x184234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_184238:
    // 0x184238: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x184238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_18423c:
    // 0x18423c: 0xdc71fff8  ld          $s1, -0x8($v1)
    ctx->pc = 0x18423cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_184240:
    // 0x184240: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x184240u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_184244:
    // 0x184244: 0x10000004  b           . + 4 + (0x4 << 2)
label_184248:
    if (ctx->pc == 0x184248u) {
        ctx->pc = 0x184248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184244u;
        // 0x184248: 0x2503db38  addiu       $v1, $t0, -0x24C8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957880));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18424Cu;
        goto label_18424c;
    }
    ctx->pc = 0x184244u;
    {
        const bool branch_taken_0x184244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184244u;
        // 0x184248: 0x2503db38  addiu       $v1, $t0, -0x24C8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184244) {
            ctx->pc = 0x184258u;
            goto label_184258;
        }
    }
    ctx->pc = 0x18424Cu;
label_18424c:
    // 0x18424c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x18424cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_184250:
    // 0x184250: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x184250u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_184254:
    // 0x184254: 0x2503db38  addiu       $v1, $t0, -0x24C8
    ctx->pc = 0x184254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957880));
label_184258:
    // 0x184258: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x184258u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_18425c:
    // 0x18425c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18425cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_184260:
    // 0x184260: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_184264:
    if (ctx->pc == 0x184264u) {
        ctx->pc = 0x184264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184260u;
        // 0x184264: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184268u;
        goto label_184268;
    }
    ctx->pc = 0x184260u;
    {
        const bool branch_taken_0x184260 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x184264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184260u;
        // 0x184264: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184260) {
            ctx->pc = 0x18427Cu;
            goto label_18427c;
        }
    }
    ctx->pc = 0x184268u;
label_184268:
    // 0x184268: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x184268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_18426c:
    // 0x18426c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x18426cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_184270:
    // 0x184270: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x184270u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_184274:
    // 0x184274: 0x10000002  b           . + 4 + (0x2 << 2)
label_184278:
    if (ctx->pc == 0x184278u) {
        ctx->pc = 0x184278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184274u;
        // 0x184278: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18427Cu;
        goto label_18427c;
    }
    ctx->pc = 0x184274u;
    {
        const bool branch_taken_0x184274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184274u;
        // 0x184278: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184274) {
            ctx->pc = 0x184280u;
            goto label_184280;
        }
    }
    ctx->pc = 0x18427Cu;
label_18427c:
    // 0x18427c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x18427cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_184280:
    // 0x184280: 0xc0f809  jalr        $a2
label_184284:
    if (ctx->pc == 0x184284u) {
        ctx->pc = 0x184284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184280u;
        // 0x184284: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184288u;
        goto label_184288;
    }
    ctx->pc = 0x184280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x184288u);
        ctx->pc = 0x184284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184280u;
        // 0x184284: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184280u, 0x184288u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x184288u;
label_184288:
    // 0x184288: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x184288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18428c:
    // 0x18428c: 0xc0aa1fa  jal         func_2A87E8
label_184290:
    if (ctx->pc == 0x184290u) {
        ctx->pc = 0x184290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18428Cu;
        // 0x184290: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184294u;
        goto label_184294;
    }
    ctx->pc = 0x18428Cu;
    SET_GPR_U32(ctx, 31, 0x184294u);
    ctx->pc = 0x184290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18428Cu;
    // 0x184290: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A87E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A87E8u, 0x18428Cu, 0x184294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184294u;
label_184294:
    // 0x184294: 0xc06ddb6  jal         func_1B76D8
label_184298:
    if (ctx->pc == 0x184298u) {
        ctx->pc = 0x184298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184294u;
        // 0x184298: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18429Cu;
        goto label_18429c;
    }
    ctx->pc = 0x184294u;
    SET_GPR_U32(ctx, 31, 0x18429Cu);
    ctx->pc = 0x184298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184294u;
    // 0x184298: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x184294u, 0x18429Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18429Cu;
label_18429c:
    // 0x18429c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x18429cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1842a0:
    // 0x1842a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1842a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1842a4:
    // 0x1842a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1842a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1842a8:
    // 0x1842a8: 0x3e00008  jr          $ra
label_1842ac:
    if (ctx->pc == 0x1842ACu) {
        ctx->pc = 0x1842ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1842A8u;
        // 0x1842ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1842B0u;
        goto label_fallthrough_0x1842a8;
    }
    ctx->pc = 0x1842A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1842ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1842A8u;
        // 0x1842ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1842A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1842a8:
    ctx->pc = 0x1842B0u;
}
