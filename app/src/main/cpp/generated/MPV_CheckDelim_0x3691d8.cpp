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

// Function: MPV_CheckDelim
// Address: 0x3691d8 - 0x369270
void MPV_CheckDelim_0x3691d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MPV_CheckDelim_0x3691d8");
#endif

    ctx->pc = 0x3691d8u;

    // 0x3691d8: 0x90870000  lbu         $a3, 0x0($a0)
    ctx->pc = 0x3691d8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3691dc: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x3691dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3691e0: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x3691e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x3691e4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x3691e4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x3691e8: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x3691e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3691ec: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x3691ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x3691f0: 0x90850003  lbu         $a1, 0x3($a0)
    ctx->pc = 0x3691f0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x3691f4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x3691f4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x3691f8: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x3691f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x3691fc: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x3691fcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x369200: 0xe53825  or          $a3, $a3, $a1
    ctx->pc = 0x369200u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    // 0x369204: 0x10e60017  beq         $a3, $a2, . + 4 + (0x17 << 2)
    ctx->pc = 0x369204u;
    {
        const bool branch_taken_0x369204 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x369208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369204u;
        // 0x369208: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369204) {
            ctx->pc = 0x369264u;
            goto label_369264;
        }
    }
    ctx->pc = 0x36920Cu;
    // 0x36920c: 0x24020101  addiu       $v0, $zero, 0x101
    ctx->pc = 0x36920cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x369210: 0x10e20014  beq         $a3, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x369210u;
    {
        const bool branch_taken_0x369210 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x369214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369210u;
        // 0x369214: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369210) {
            ctx->pc = 0x369264u;
            goto label_369264;
        }
    }
    ctx->pc = 0x369218u;
    // 0x369218: 0x24e2fefe  addiu       $v0, $a3, -0x102
    ctx->pc = 0x369218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967038));
    // 0x36921c: 0x2c4200ae  sltiu       $v0, $v0, 0xAE
    ctx->pc = 0x36921cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)174) ? 1 : 0);
    // 0x369220: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x369220u;
    {
        const bool branch_taken_0x369220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x369224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369220u;
        // 0x369224: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369220) {
            ctx->pc = 0x369264u;
            goto label_369264;
        }
    }
    ctx->pc = 0x369228u;
    // 0x369228: 0x240201b2  addiu       $v0, $zero, 0x1B2
    ctx->pc = 0x369228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 434));
    // 0x36922c: 0x10e2000d  beq         $a3, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x36922Cu;
    {
        const bool branch_taken_0x36922c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x369230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36922Cu;
        // 0x369230: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36922c) {
            ctx->pc = 0x369264u;
            goto label_369264;
        }
    }
    ctx->pc = 0x369234u;
    // 0x369234: 0x240201b3  addiu       $v0, $zero, 0x1B3
    ctx->pc = 0x369234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 435));
    // 0x369238: 0x10e2000a  beq         $a3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x369238u;
    {
        const bool branch_taken_0x369238 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x36923Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369238u;
        // 0x36923c: 0x24080040  addiu       $t0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369238) {
            ctx->pc = 0x369264u;
            goto label_369264;
        }
    }
    ctx->pc = 0x369240u;
    // 0x369240: 0x240201b5  addiu       $v0, $zero, 0x1B5
    ctx->pc = 0x369240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 437));
    // 0x369244: 0x10e20007  beq         $a3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x369244u;
    {
        const bool branch_taken_0x369244 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x369248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369244u;
        // 0x369248: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369244) {
            ctx->pc = 0x369264u;
            goto label_369264;
        }
    }
    ctx->pc = 0x36924Cu;
    // 0x36924c: 0x240201b7  addiu       $v0, $zero, 0x1B7
    ctx->pc = 0x36924cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 439));
    // 0x369250: 0x10e20004  beq         $a3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x369250u;
    {
        const bool branch_taken_0x369250 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x369254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369250u;
        // 0x369254: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369250) {
            ctx->pc = 0x369264u;
            goto label_369264;
        }
    }
    ctx->pc = 0x369258u;
    // 0x369258: 0x38e201b8  xori        $v0, $a3, 0x1B8
    ctx->pc = 0x369258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)440);
    // 0x36925c: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x36925cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x369260: 0x2400b  movn        $t0, $zero, $v0
    ctx->pc = 0x369260u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
label_369264:
    // 0x369264: 0x3e00008  jr          $ra
    ctx->pc = 0x369264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x369268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369264u;
        // 0x369268: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x369264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36926Cu;
    // 0x36926c: 0x0  nop
    ctx->pc = 0x36926cu;
    // NOP
    ctx->pc = 0x369270u;
}
