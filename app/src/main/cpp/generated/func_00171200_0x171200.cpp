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

// Function: func_00171200
// Address: 0x171200 - 0x1712c8
void func_00171200_0x171200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00171200_0x171200");
#endif

    switch (ctx->pc) {
        case 0x171200u: goto label_171200;
        case 0x171204u: goto label_171204;
        case 0x171208u: goto label_171208;
        case 0x17120cu: goto label_17120c;
        case 0x171210u: goto label_171210;
        case 0x171214u: goto label_171214;
        case 0x171218u: goto label_171218;
        case 0x17121cu: goto label_17121c;
        case 0x171220u: goto label_171220;
        case 0x171224u: goto label_171224;
        case 0x171228u: goto label_171228;
        case 0x17122cu: goto label_17122c;
        case 0x171230u: goto label_171230;
        case 0x171234u: goto label_171234;
        case 0x171238u: goto label_171238;
        case 0x17123cu: goto label_17123c;
        case 0x171240u: goto label_171240;
        case 0x171244u: goto label_171244;
        case 0x171248u: goto label_171248;
        case 0x17124cu: goto label_17124c;
        case 0x171250u: goto label_171250;
        case 0x171254u: goto label_171254;
        case 0x171258u: goto label_171258;
        case 0x17125cu: goto label_17125c;
        case 0x171260u: goto label_171260;
        case 0x171264u: goto label_171264;
        case 0x171268u: goto label_171268;
        case 0x17126cu: goto label_17126c;
        case 0x171270u: goto label_171270;
        case 0x171274u: goto label_171274;
        case 0x171278u: goto label_171278;
        case 0x17127cu: goto label_17127c;
        case 0x171280u: goto label_171280;
        case 0x171284u: goto label_171284;
        case 0x171288u: goto label_171288;
        case 0x17128cu: goto label_17128c;
        case 0x171290u: goto label_171290;
        case 0x171294u: goto label_171294;
        case 0x171298u: goto label_171298;
        case 0x17129cu: goto label_17129c;
        case 0x1712a0u: goto label_1712a0;
        case 0x1712a4u: goto label_1712a4;
        case 0x1712a8u: goto label_1712a8;
        case 0x1712acu: goto label_1712ac;
        case 0x1712b0u: goto label_1712b0;
        case 0x1712b4u: goto label_1712b4;
        case 0x1712b8u: goto label_1712b8;
        case 0x1712bcu: goto label_1712bc;
        case 0x1712c0u: goto label_1712c0;
        case 0x1712c4u: goto label_1712c4;
        default: break;
    }

    ctx->pc = 0x171200u;

label_171200:
    // 0x171200: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x171200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_171204:
    // 0x171204: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x171204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_171208:
    // 0x171208: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x171208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_17120c:
    // 0x17120c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17120cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_171210:
    // 0x171210: 0xc06ddac  jal         func_1B76B0
label_171214:
    if (ctx->pc == 0x171214u) {
        ctx->pc = 0x171214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171210u;
        // 0x171214: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171218u;
        goto label_171218;
    }
    ctx->pc = 0x171210u;
    SET_GPR_U32(ctx, 31, 0x171218u);
    ctx->pc = 0x171214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171210u;
    // 0x171214: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x171210u, 0x171218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171218u;
label_171218:
    // 0x171218: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_17121c:
    if (ctx->pc == 0x17121Cu) {
        ctx->pc = 0x17121Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171218u;
        // 0x17121c: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171220u;
        goto label_171220;
    }
    ctx->pc = 0x171218u;
    {
        const bool branch_taken_0x171218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17121Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171218u;
        // 0x17121c: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171218) {
            ctx->pc = 0x1712B4u;
            goto label_1712b4;
        }
    }
    ctx->pc = 0x171220u;
label_171220:
    // 0x171220: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x171220u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_171224:
    // 0x171224: 0x2446d9f0  addiu       $a2, $v0, -0x2610
    ctx->pc = 0x171224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957552));
label_171228:
    // 0x171228: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x171228u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17122c:
    // 0x17122c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x17122cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_171230:
    // 0x171230: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x171230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_171234:
    // 0x171234: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x171234u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_171238:
    // 0x171238: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_17123c:
    if (ctx->pc == 0x17123Cu) {
        ctx->pc = 0x17123Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171238u;
        // 0x17123c: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171240u;
        goto label_171240;
    }
    ctx->pc = 0x171238u;
    {
        const bool branch_taken_0x171238 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x17123Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171238u;
        // 0x17123c: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171238) {
            ctx->pc = 0x171264u;
            goto label_171264;
        }
    }
    ctx->pc = 0x171240u;
label_171240:
    // 0x171240: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x171240u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_171244:
    // 0x171244: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x171244u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_171248:
    // 0x171248: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x171248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_17124c:
    // 0x17124c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x17124cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_171250:
    // 0x171250: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x171250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_171254:
    // 0x171254: 0xdc71fff8  ld          $s1, -0x8($v1)
    ctx->pc = 0x171254u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_171258:
    // 0x171258: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x171258u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_17125c:
    // 0x17125c: 0x10000004  b           . + 4 + (0x4 << 2)
label_171260:
    if (ctx->pc == 0x171260u) {
        ctx->pc = 0x171260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17125Cu;
        // 0x171260: 0x2503d9f0  addiu       $v1, $t0, -0x2610 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171264u;
        goto label_171264;
    }
    ctx->pc = 0x17125Cu;
    {
        const bool branch_taken_0x17125c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17125Cu;
        // 0x171260: 0x2503d9f0  addiu       $v1, $t0, -0x2610 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17125c) {
            ctx->pc = 0x171270u;
            goto label_171270;
        }
    }
    ctx->pc = 0x171264u;
label_171264:
    // 0x171264: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x171264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_171268:
    // 0x171268: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x171268u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_17126c:
    // 0x17126c: 0x2503d9f0  addiu       $v1, $t0, -0x2610
    ctx->pc = 0x17126cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957552));
label_171270:
    // 0x171270: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x171270u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_171274:
    // 0x171274: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x171274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_171278:
    // 0x171278: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_17127c:
    if (ctx->pc == 0x17127Cu) {
        ctx->pc = 0x17127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171278u;
        // 0x17127c: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171280u;
        goto label_171280;
    }
    ctx->pc = 0x171278u;
    {
        const bool branch_taken_0x171278 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x17127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171278u;
        // 0x17127c: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171278) {
            ctx->pc = 0x171294u;
            goto label_171294;
        }
    }
    ctx->pc = 0x171280u;
label_171280:
    // 0x171280: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x171280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_171284:
    // 0x171284: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x171284u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_171288:
    // 0x171288: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x171288u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_17128c:
    // 0x17128c: 0x10000002  b           . + 4 + (0x2 << 2)
label_171290:
    if (ctx->pc == 0x171290u) {
        ctx->pc = 0x171290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17128Cu;
        // 0x171290: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171294u;
        goto label_171294;
    }
    ctx->pc = 0x17128Cu;
    {
        const bool branch_taken_0x17128c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17128Cu;
        // 0x171290: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17128c) {
            ctx->pc = 0x171298u;
            goto label_171298;
        }
    }
    ctx->pc = 0x171294u;
label_171294:
    // 0x171294: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x171294u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_171298:
    // 0x171298: 0xc0f809  jalr        $a2
label_17129c:
    if (ctx->pc == 0x17129Cu) {
        ctx->pc = 0x17129Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171298u;
        // 0x17129c: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1712A0u;
        goto label_1712a0;
    }
    ctx->pc = 0x171298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1712A0u);
        ctx->pc = 0x17129Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171298u;
        // 0x17129c: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171298u, 0x1712A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1712A0u;
label_1712a0:
    // 0x1712a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1712a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1712a4:
    // 0x1712a4: 0xc0aa1fa  jal         func_2A87E8
label_1712a8:
    if (ctx->pc == 0x1712A8u) {
        ctx->pc = 0x1712A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1712A4u;
        // 0x1712a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1712ACu;
        goto label_1712ac;
    }
    ctx->pc = 0x1712A4u;
    SET_GPR_U32(ctx, 31, 0x1712ACu);
    ctx->pc = 0x1712A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1712A4u;
    // 0x1712a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A87E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A87E8u, 0x1712A4u, 0x1712ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1712ACu;
label_1712ac:
    // 0x1712ac: 0xc06ddb6  jal         func_1B76D8
label_1712b0:
    if (ctx->pc == 0x1712B0u) {
        ctx->pc = 0x1712B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1712ACu;
        // 0x1712b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1712B4u;
        goto label_1712b4;
    }
    ctx->pc = 0x1712ACu;
    SET_GPR_U32(ctx, 31, 0x1712B4u);
    ctx->pc = 0x1712B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1712ACu;
    // 0x1712b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x1712ACu, 0x1712B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1712B4u;
label_1712b4:
    // 0x1712b4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1712b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1712b8:
    // 0x1712b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1712b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1712bc:
    // 0x1712bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1712bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1712c0:
    // 0x1712c0: 0x3e00008  jr          $ra
label_1712c4:
    if (ctx->pc == 0x1712C4u) {
        ctx->pc = 0x1712C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1712C0u;
        // 0x1712c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1712C8u;
        goto label_fallthrough_0x1712c0;
    }
    ctx->pc = 0x1712C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1712C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1712C0u;
        // 0x1712c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1712C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1712c0:
    ctx->pc = 0x1712C8u;
}
