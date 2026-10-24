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

// Function: func_002821F0
// Address: 0x2821f0 - 0x282388
void func_002821F0_0x2821f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002821F0_0x2821f0");
#endif

    switch (ctx->pc) {
        case 0x282260u: goto label_282260;
        case 0x282290u: goto label_282290;
        case 0x2822a4u: goto label_2822a4;
        case 0x28231cu: goto label_28231c;
        case 0x28234cu: goto label_28234c;
        case 0x282360u: goto label_282360;
        default: break;
    }

    ctx->pc = 0x2821f0u;

    // 0x2821f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2821f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2821f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2821f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2821f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2821f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2821fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2821fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282200: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x282200u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x282204: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x282204u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x282208: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x282208u;
    {
        const bool branch_taken_0x282208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28220Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282208u;
        // 0x28220c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282208) {
            ctx->pc = 0x282378u;
            goto label_282378;
        }
    }
    ctx->pc = 0x282210u;
    // 0x282210: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x282210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x282214: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x282214u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x282218: 0x244286d0  addiu       $v0, $v0, -0x7930
    ctx->pc = 0x282218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936272));
    // 0x28221c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28221cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x282220: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x282220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x282224: 0x800008  jr          $a0
    ctx->pc = 0x282224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28222Cu: goto label_28222c;
            case 0x28229Cu: goto label_28229c;
            case 0x2822ACu: goto label_2822ac;
            case 0x2822E8u: goto label_2822e8;
            case 0x282358u: goto label_282358;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282224u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28222Cu;
label_28222c:
    // 0x28222c: 0x920215b0  lbu         $v0, 0x15B0($s0)
    ctx->pc = 0x28222cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x282230: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x282230u;
    {
        const bool branch_taken_0x282230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282230u;
        // 0x282234: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282230) {
            ctx->pc = 0x282268u;
            goto label_282268;
        }
    }
    ctx->pc = 0x282238u;
    // 0x282238: 0x8e060304  lw          $a2, 0x304($s0)
    ctx->pc = 0x282238u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28223c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28223cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x282240: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x282240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282244: 0x8cc5003c  lw          $a1, 0x3C($a2)
    ctx->pc = 0x282244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 60)));
    // 0x282248: 0x8cc20040  lw          $v0, 0x40($a2)
    ctx->pc = 0x282248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x28224c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28224cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282250: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x282250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x282254: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x282254u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282258: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x282258u;
    SET_GPR_U32(ctx, 31, 0x282260u);
    ctx->pc = 0x28225Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282258u;
    // 0x28225c: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x282258u, 0x282260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282260u;
label_282260:
    // 0x282260: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x282260u;
    {
        const bool branch_taken_0x282260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282260u;
        // 0x282264: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282260) {
            ctx->pc = 0x282294u;
            goto label_282294;
        }
    }
    ctx->pc = 0x282268u;
label_282268:
    // 0x282268: 0x8e060304  lw          $a2, 0x304($s0)
    ctx->pc = 0x282268u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28226c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28226cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x282270: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x282270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282274: 0x8cc50014  lw          $a1, 0x14($a2)
    ctx->pc = 0x282274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x282278: 0x8cc20018  lw          $v0, 0x18($a2)
    ctx->pc = 0x282278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x28227c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28227cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282280: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x282280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x282284: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x282284u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282288: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x282288u;
    SET_GPR_U32(ctx, 31, 0x282290u);
    ctx->pc = 0x28228Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282288u;
    // 0x28228c: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x282288u, 0x282290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282290u;
label_282290:
    // 0x282290: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x282290u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_282294:
    // 0x282294: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x282294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x282298: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x282298u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_28229c:
    // 0x28229c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x28229Cu;
    SET_GPR_U32(ctx, 31, 0x2822A4u);
    ctx->pc = 0x2822A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28229Cu;
    // 0x2822a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x28229Cu, 0x2822A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2822A4u;
label_2822a4:
    // 0x2822a4: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x2822A4u;
    {
        const bool branch_taken_0x2822a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2822A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2822A4u;
        // 0x2822a8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2822a4) {
            ctx->pc = 0x28237Cu;
            goto label_28237c;
        }
    }
    ctx->pc = 0x2822ACu;
label_2822ac:
    // 0x2822ac: 0x920215b0  lbu         $v0, 0x15B0($s0)
    ctx->pc = 0x2822acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x2822b0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2822B0u;
    {
        const bool branch_taken_0x2822b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2822B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2822B0u;
        // 0x2822b4: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2822b0) {
            ctx->pc = 0x2822D0u;
            goto label_2822d0;
        }
    }
    ctx->pc = 0x2822B8u;
    // 0x2822b8: 0x8e060304  lw          $a2, 0x304($s0)
    ctx->pc = 0x2822b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2822bc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2822bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2822c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2822c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2822c4: 0x8cc50044  lw          $a1, 0x44($a2)
    ctx->pc = 0x2822c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 68)));
    // 0x2822c8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2822C8u;
    {
        const bool branch_taken_0x2822c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2822CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2822C8u;
        // 0x2822cc: 0x8cc20048  lw          $v0, 0x48($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2822c8) {
            ctx->pc = 0x282308u;
            goto label_282308;
        }
    }
    ctx->pc = 0x2822D0u;
label_2822d0:
    // 0x2822d0: 0x8e060304  lw          $a2, 0x304($s0)
    ctx->pc = 0x2822d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2822d4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2822d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2822d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2822d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2822dc: 0x8cc5001c  lw          $a1, 0x1C($a2)
    ctx->pc = 0x2822dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x2822e0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2822E0u;
    {
        const bool branch_taken_0x2822e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2822E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2822E0u;
        // 0x2822e4: 0x8cc20020  lw          $v0, 0x20($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2822e0) {
            ctx->pc = 0x282338u;
            goto label_282338;
        }
    }
    ctx->pc = 0x2822E8u;
label_2822e8:
    // 0x2822e8: 0x920215b0  lbu         $v0, 0x15B0($s0)
    ctx->pc = 0x2822e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x2822ec: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2822ECu;
    {
        const bool branch_taken_0x2822ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2822F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2822ECu;
        // 0x2822f0: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2822ec) {
            ctx->pc = 0x282324u;
            goto label_282324;
        }
    }
    ctx->pc = 0x2822F4u;
    // 0x2822f4: 0x8e060304  lw          $a2, 0x304($s0)
    ctx->pc = 0x2822f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2822f8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2822f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2822fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2822fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282300: 0x8cc5004c  lw          $a1, 0x4C($a2)
    ctx->pc = 0x282300u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 76)));
    // 0x282304: 0x8cc20050  lw          $v0, 0x50($a2)
    ctx->pc = 0x282304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 80)));
label_282308:
    // 0x282308: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x282308u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28230c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x28230cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x282310: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x282310u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282314: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x282314u;
    SET_GPR_U32(ctx, 31, 0x28231Cu);
    ctx->pc = 0x282318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282314u;
    // 0x282318: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x282314u, 0x28231Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28231Cu;
label_28231c:
    // 0x28231c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x28231Cu;
    {
        const bool branch_taken_0x28231c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28231Cu;
        // 0x282320: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28231c) {
            ctx->pc = 0x282350u;
            goto label_282350;
        }
    }
    ctx->pc = 0x282324u;
label_282324:
    // 0x282324: 0x8e060304  lw          $a2, 0x304($s0)
    ctx->pc = 0x282324u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x282328: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x282328u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28232c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28232cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282330: 0x8cc50024  lw          $a1, 0x24($a2)
    ctx->pc = 0x282330u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x282334: 0x8cc20028  lw          $v0, 0x28($a2)
    ctx->pc = 0x282334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
label_282338:
    // 0x282338: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x282338u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28233c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x28233cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x282340: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x282340u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282344: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x282344u;
    SET_GPR_U32(ctx, 31, 0x28234Cu);
    ctx->pc = 0x282348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282344u;
    // 0x282348: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x282344u, 0x28234Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28234Cu;
label_28234c:
    // 0x28234c: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x28234cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_282350:
    // 0x282350: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x282350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x282354: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x282354u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_282358:
    // 0x282358: 0xc055f06  jal         func_157C18
    ctx->pc = 0x282358u;
    SET_GPR_U32(ctx, 31, 0x282360u);
    ctx->pc = 0x28235Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282358u;
    // 0x28235c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x282358u, 0x282360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282360u;
label_282360:
    // 0x282360: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x282360u;
    {
        const bool branch_taken_0x282360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x282360) {
            ctx->pc = 0x282364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282360u;
            // 0x282364: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28237Cu;
            goto label_28237c;
        }
    }
    ctx->pc = 0x282368u;
    // 0x282368: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x282368u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x28236c: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x28236cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x282370: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x282370u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x282374: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x282374u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_282378:
    // 0x282378: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x282378u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28237c:
    // 0x28237c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28237cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282380: 0x3e00008  jr          $ra
    ctx->pc = 0x282380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282380u;
        // 0x282384: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282388u;
}
