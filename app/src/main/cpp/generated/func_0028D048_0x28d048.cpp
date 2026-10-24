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

// Function: func_0028D048
// Address: 0x28d048 - 0x28d138
void func_0028D048_0x28d048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0028D048_0x28d048");
#endif

    switch (ctx->pc) {
        case 0x28d048u: goto label_28d048;
        case 0x28d04cu: goto label_28d04c;
        case 0x28d050u: goto label_28d050;
        case 0x28d054u: goto label_28d054;
        case 0x28d058u: goto label_28d058;
        case 0x28d05cu: goto label_28d05c;
        case 0x28d060u: goto label_28d060;
        case 0x28d064u: goto label_28d064;
        case 0x28d068u: goto label_28d068;
        case 0x28d06cu: goto label_28d06c;
        case 0x28d070u: goto label_28d070;
        case 0x28d074u: goto label_28d074;
        case 0x28d078u: goto label_28d078;
        case 0x28d07cu: goto label_28d07c;
        case 0x28d080u: goto label_28d080;
        case 0x28d084u: goto label_28d084;
        case 0x28d088u: goto label_28d088;
        case 0x28d08cu: goto label_28d08c;
        case 0x28d090u: goto label_28d090;
        case 0x28d094u: goto label_28d094;
        case 0x28d098u: goto label_28d098;
        case 0x28d09cu: goto label_28d09c;
        case 0x28d0a0u: goto label_28d0a0;
        case 0x28d0a4u: goto label_28d0a4;
        case 0x28d0a8u: goto label_28d0a8;
        case 0x28d0acu: goto label_28d0ac;
        case 0x28d0b0u: goto label_28d0b0;
        case 0x28d0b4u: goto label_28d0b4;
        case 0x28d0b8u: goto label_28d0b8;
        case 0x28d0bcu: goto label_28d0bc;
        case 0x28d0c0u: goto label_28d0c0;
        case 0x28d0c4u: goto label_28d0c4;
        case 0x28d0c8u: goto label_28d0c8;
        case 0x28d0ccu: goto label_28d0cc;
        case 0x28d0d0u: goto label_28d0d0;
        case 0x28d0d4u: goto label_28d0d4;
        case 0x28d0d8u: goto label_28d0d8;
        case 0x28d0dcu: goto label_28d0dc;
        case 0x28d0e0u: goto label_28d0e0;
        case 0x28d0e4u: goto label_28d0e4;
        case 0x28d0e8u: goto label_28d0e8;
        case 0x28d0ecu: goto label_28d0ec;
        case 0x28d0f0u: goto label_28d0f0;
        case 0x28d0f4u: goto label_28d0f4;
        case 0x28d0f8u: goto label_28d0f8;
        case 0x28d0fcu: goto label_28d0fc;
        case 0x28d100u: goto label_28d100;
        case 0x28d104u: goto label_28d104;
        case 0x28d108u: goto label_28d108;
        case 0x28d10cu: goto label_28d10c;
        case 0x28d110u: goto label_28d110;
        case 0x28d114u: goto label_28d114;
        case 0x28d118u: goto label_28d118;
        case 0x28d11cu: goto label_28d11c;
        case 0x28d120u: goto label_28d120;
        case 0x28d124u: goto label_28d124;
        case 0x28d128u: goto label_28d128;
        case 0x28d12cu: goto label_28d12c;
        case 0x28d130u: goto label_28d130;
        case 0x28d134u: goto label_28d134;
        default: break;
    }

    ctx->pc = 0x28d048u;

label_28d048:
    // 0x28d048: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28d048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_28d04c:
    // 0x28d04c: 0x24a3fc9f  addiu       $v1, $a1, -0x361
    ctx->pc = 0x28d04cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966431));
label_28d050:
    // 0x28d050: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28d050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_28d054:
    // 0x28d054: 0x2c620057  sltiu       $v0, $v1, 0x57
    ctx->pc = 0x28d054u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)87) ? 1 : 0);
label_28d058:
    // 0x28d058: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x28d058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_28d05c:
    // 0x28d05c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28d05cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28d060:
    // 0x28d060: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_28d064:
    if (ctx->pc == 0x28D064u) {
        ctx->pc = 0x28D064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D060u;
        // 0x28d064: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D068u;
        goto label_28d068;
    }
    ctx->pc = 0x28D060u;
    {
        const bool branch_taken_0x28d060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D060u;
        // 0x28d064: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d060) {
            ctx->pc = 0x28D11Cu;
            goto label_28d11c;
        }
    }
    ctx->pc = 0x28D068u;
label_28d068:
    // 0x28d068: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x28d068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
label_28d06c:
    // 0x28d06c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28d06cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_28d070:
    // 0x28d070: 0x24429fc0  addiu       $v0, $v0, -0x6040
    ctx->pc = 0x28d070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942656));
label_28d074:
    // 0x28d074: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28d074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_28d078:
    // 0x28d078: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x28d078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_28d07c:
    // 0x28d07c: 0x800008  jr          $a0
label_28d080:
    if (ctx->pc == 0x28D080u) {
        ctx->pc = 0x28D084u;
        goto label_28d084;
    }
    ctx->pc = 0x28D07Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28D084u: goto label_28d084;
            case 0x28D11Cu: goto label_28d11c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D07Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28D084u;
label_28d084:
    // 0x28d084: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x28d084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28d088:
    // 0x28d088: 0xc0c3ea6  jal         func_30FA98
label_28d08c:
    if (ctx->pc == 0x28D08Cu) {
        ctx->pc = 0x28D08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D088u;
        // 0x28d08c: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D090u;
        goto label_28d090;
    }
    ctx->pc = 0x28D088u;
    SET_GPR_U32(ctx, 31, 0x28D090u);
    ctx->pc = 0x28D08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D088u;
    // 0x28d08c: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x28D088u, 0x28D090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D090u;
label_28d090:
    // 0x28d090: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28d090u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28d094:
    // 0x28d094: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
label_28d098:
    if (ctx->pc == 0x28D098u) {
        ctx->pc = 0x28D098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D094u;
        // 0x28d098: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D09Cu;
        goto label_28d09c;
    }
    ctx->pc = 0x28D094u;
    {
        const bool branch_taken_0x28d094 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D094u;
        // 0x28d098: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d094) {
            ctx->pc = 0x28D120u;
            goto label_28d120;
        }
    }
    ctx->pc = 0x28D09Cu;
label_28d09c:
    // 0x28d09c: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x28d09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_28d0a0:
    // 0x28d0a0: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x28d0a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_28d0a4:
    // 0x28d0a4: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x28d0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_28d0a8:
    // 0x28d0a8: 0x40f809  jalr        $v0
label_28d0ac:
    if (ctx->pc == 0x28D0ACu) {
        ctx->pc = 0x28D0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D0A8u;
        // 0x28d0ac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D0B0u;
        goto label_28d0b0;
    }
    ctx->pc = 0x28D0A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28D0B0u);
        ctx->pc = 0x28D0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D0A8u;
        // 0x28d0ac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D0A8u, 0x28D0B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28D0B0u;
label_28d0b0:
    // 0x28d0b0: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_28d0b4:
    if (ctx->pc == 0x28D0B4u) {
        ctx->pc = 0x28D0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D0B0u;
        // 0x28d0b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D0B8u;
        goto label_28d0b8;
    }
    ctx->pc = 0x28D0B0u;
    {
        const bool branch_taken_0x28d0b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D0B0u;
        // 0x28d0b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d0b0) {
            ctx->pc = 0x28D120u;
            goto label_28d120;
        }
    }
    ctx->pc = 0x28D0B8u;
label_28d0b8:
    // 0x28d0b8: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x28d0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_28d0bc:
    // 0x28d0bc: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x28d0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_28d0c0:
    // 0x28d0c0: 0x10440008  beq         $v0, $a0, . + 4 + (0x8 << 2)
label_28d0c4:
    if (ctx->pc == 0x28D0C4u) {
        ctx->pc = 0x28D0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D0C0u;
        // 0x28d0c4: 0x26030490  addiu       $v1, $s0, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D0C8u;
        goto label_28d0c8;
    }
    ctx->pc = 0x28D0C0u;
    {
        const bool branch_taken_0x28d0c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x28D0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D0C0u;
        // 0x28d0c4: 0x26030490  addiu       $v1, $s0, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d0c0) {
            ctx->pc = 0x28D0E4u;
            goto label_28d0e4;
        }
    }
    ctx->pc = 0x28D0C8u;
label_28d0c8:
    // 0x28d0c8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x28d0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28d0cc:
    // 0x28d0cc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x28d0ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_28d0d0:
    // 0x28d0d0: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x28d0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28d0d4:
    // 0x28d0d4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x28d0d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_28d0d8:
    // 0x28d0d8: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x28d0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28d0dc:
    // 0x28d0dc: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x28d0dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_28d0e0:
    // 0x28d0e0: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x28d0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_28d0e4:
    // 0x28d0e4: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
label_28d0e8:
    if (ctx->pc == 0x28D0E8u) {
        ctx->pc = 0x28D0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D0E4u;
        // 0x28d0e8: 0x26030100  addiu       $v1, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D0ECu;
        goto label_28d0ec;
    }
    ctx->pc = 0x28D0E4u;
    {
        const bool branch_taken_0x28d0e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28d0e4) {
            ctx->pc = 0x28D0E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D0E4u;
            // 0x28d0e8: 0x26030100  addiu       $v1, $s0, 0x100 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D108u;
            goto label_28d108;
        }
    }
    ctx->pc = 0x28D0ECu;
label_28d0ec:
    // 0x28d0ec: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x28d0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28d0f0:
    // 0x28d0f0: 0xe6000490  swc1        $f0, 0x490($s0)
    ctx->pc = 0x28d0f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1168), bits); }
label_28d0f4:
    // 0x28d0f4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x28d0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28d0f8:
    // 0x28d0f8: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x28d0f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_28d0fc:
    // 0x28d0fc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x28d0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28d100:
    // 0x28d100: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x28d100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_28d104:
    // 0x28d104: 0x26030100  addiu       $v1, $s0, 0x100
    ctx->pc = 0x28d104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_28d108:
    // 0x28d108: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x28d108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
label_28d10c:
    // 0x28d10c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x28d10cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_28d110:
    // 0x28d110: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x28d110u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28d114:
    // 0x28d114: 0x10000002  b           . + 4 + (0x2 << 2)
label_28d118:
    if (ctx->pc == 0x28D118u) {
        ctx->pc = 0x28D118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D114u;
        // 0x28d118: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D11Cu;
        goto label_28d11c;
    }
    ctx->pc = 0x28D114u;
    {
        const bool branch_taken_0x28d114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D114u;
        // 0x28d118: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d114) {
            ctx->pc = 0x28D120u;
            goto label_28d120;
        }
    }
    ctx->pc = 0x28D11Cu;
label_28d11c:
    // 0x28d11c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28d11cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28d120:
    // 0x28d120: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x28d120u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_28d124:
    // 0x28d124: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28d124u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28d128:
    // 0x28d128: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28d128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28d12c:
    // 0x28d12c: 0x3e00008  jr          $ra
label_28d130:
    if (ctx->pc == 0x28D130u) {
        ctx->pc = 0x28D130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D12Cu;
        // 0x28d130: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D134u;
        goto label_28d134;
    }
    ctx->pc = 0x28D12Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D12Cu;
        // 0x28d130: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D12Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28D134u;
label_28d134:
    // 0x28d134: 0x0  nop
    ctx->pc = 0x28d134u;
    // NOP
    ctx->pc = 0x28d138u;
}
