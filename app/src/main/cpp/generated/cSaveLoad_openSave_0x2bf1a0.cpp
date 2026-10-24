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

// Function: cSaveLoad_openSave
// Address: 0x2bf1a0 - 0x2bf268
void cSaveLoad_openSave_0x2bf1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSaveLoad_openSave_0x2bf1a0");
#endif

    switch (ctx->pc) {
        case 0x2bf200u: goto label_2bf200;
        case 0x2bf210u: goto label_2bf210;
        default: break;
    }

    ctx->pc = 0x2bf1a0u;

    // 0x2bf1a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2bf1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2bf1a4: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2bf1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2bf1a8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2bf1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2bf1ac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2bf1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2bf1b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2bf1b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf1b4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2bf1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2bf1b8: 0x24517a2c  addiu       $s1, $v0, 0x7A2C
    ctx->pc = 0x2bf1b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 31276));
    // 0x2bf1bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bf1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bf1c0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2bf1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A38u));
    // 0x2bf1c4: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BF1C4u;
    {
        const bool branch_taken_0x2bf1c4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2BF1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF1C4u;
        // 0x2bf1c8: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf1c4) {
            ctx->pc = 0x2BF1DCu;
            goto label_2bf1dc;
        }
    }
    ctx->pc = 0x2BF1CCu;
    // 0x2bf1cc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2bf1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2bf1d0: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x2bf1d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x2bf1d4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BF1D4u;
    {
        const bool branch_taken_0x2bf1d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf1d4) {
            ctx->pc = 0x2BF1F8u;
            goto label_2bf1f8;
        }
    }
    ctx->pc = 0x2BF1DCu;
label_2bf1dc:
    // 0x2bf1dc: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x2bf1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x2bf1e0: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x2bf1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x2bf1e4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2bf1e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2bf1e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bf1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bf1ec: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x2bf1ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2bf1f0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2BF1F0u;
    {
        const bool branch_taken_0x2bf1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF1F0u;
        // 0x2bf1f4: 0xae24005c  sw          $a0, 0x5C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf1f0) {
            ctx->pc = 0x2BF24Cu;
            goto label_2bf24c;
        }
    }
    ctx->pc = 0x2BF1F8u;
label_2bf1f8:
    // 0x2bf1f8: 0xc0afdc0  jal         func_2BF700
    ctx->pc = 0x2BF1F8u;
    SET_GPR_U32(ctx, 31, 0x2BF200u);
    ctx->pc = 0x2BF1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF1F8u;
    // 0x2bf1fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF700u, 0x2BF1F8u, 0x2BF200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF200u;
label_2bf200:
    // 0x2bf200: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2BF200u;
    {
        const bool branch_taken_0x2bf200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF200u;
        // 0x2bf204: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf200) {
            ctx->pc = 0x2BF24Cu;
            goto label_2bf24c;
        }
    }
    ctx->pc = 0x2BF208u;
    // 0x2bf208: 0xc0afc5c  jal         func_2BF170
    ctx->pc = 0x2BF208u;
    SET_GPR_U32(ctx, 31, 0x2BF210u);
    ctx->pc = 0x2BF20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF208u;
    // 0x2bf20c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF170u, 0x2BF208u, 0x2BF210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF210u;
label_2bf210:
    // 0x2bf210: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2bf210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2bf214: 0x12420002  beq         $s2, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2BF214u;
    {
        const bool branch_taken_0x2bf214 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BF218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF214u;
        // 0x2bf218: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf214) {
            ctx->pc = 0x2BF220u;
            goto label_2bf220;
        }
    }
    ctx->pc = 0x2BF21Cu;
    // 0x2bf21c: 0xac526908  sw          $s2, 0x6908($v0)
    ctx->pc = 0x2bf21cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 26888), GPR_U32(ctx, 18));
label_2bf220:
    // 0x2bf220: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x2bf220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x2bf224: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2bf224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2bf228: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2bf228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bf22c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bf22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bf230: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2bf230u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2bf234: 0xae24005c  sw          $a0, 0x5C($s1)
    ctx->pc = 0x2bf234u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 4));
    // 0x2bf238: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2bf238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2bf23c: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x2bf23cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bf240: 0xa2050001  sb          $a1, 0x1($s0)
    ctx->pc = 0x2bf240u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x2bf244: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x2bf244u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bf248: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x2bf248u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_2bf24c:
    // 0x2bf24c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2bf24cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bf250: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2bf250u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bf254: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2bf254u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bf258: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bf258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bf25c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF25Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF25Cu;
        // 0x2bf260: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF25Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF264u;
    // 0x2bf264: 0x0  nop
    ctx->pc = 0x2bf264u;
    // NOP
    ctx->pc = 0x2bf268u;
}
