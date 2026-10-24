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

// Function: func_003772D8
// Address: 0x3772d8 - 0x377378
void func_003772D8_0x3772d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003772D8_0x3772d8");
#endif

    switch (ctx->pc) {
        case 0x37734cu: goto label_37734c;
        case 0x37735cu: goto label_37735c;
        default: break;
    }

    ctx->pc = 0x3772d8u;

    // 0x3772d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3772d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3772dc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3772dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3772e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3772e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3772e4: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x3772e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x3772e8: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x3772e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x3772ec: 0x84a3000c  lh          $v1, 0xC($a1)
    ctx->pc = 0x3772ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x3772f0: 0x2442e910  addiu       $v0, $v0, -0x16F0
    ctx->pc = 0x3772f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961424));
    // 0x3772f4: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x3772f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3772f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3772f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3772fc: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x3772fcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x377300: 0x54800003  bnel        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x377300u;
    {
        const bool branch_taken_0x377300 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x377300) {
            ctx->pc = 0x377304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x377300u;
            // 0x377304: 0x84a4000a  lh          $a0, 0xA($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x377310u;
            goto label_377310;
        }
    }
    ctx->pc = 0x377308u;
    // 0x377308: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x377308u;
    {
        const bool branch_taken_0x377308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37730Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377308u;
        // 0x37730c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377308) {
            ctx->pc = 0x377368u;
            goto label_377368;
        }
    }
    ctx->pc = 0x377310u;
label_377310:
    // 0x377310: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x377310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x377314: 0x1086000f  beq         $a0, $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x377314u;
    {
        const bool branch_taken_0x377314 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x377318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377314u;
        // 0x377318: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x377314) {
            ctx->pc = 0x377354u;
            goto label_377354;
        }
    }
    ctx->pc = 0x37731Cu;
    // 0x37731c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37731Cu;
    {
        const bool branch_taken_0x37731c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x377320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37731Cu;
        // 0x377320: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37731c) {
            ctx->pc = 0x377334u;
            goto label_377334;
        }
    }
    ctx->pc = 0x377324u;
    // 0x377324: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x377324u;
    {
        const bool branch_taken_0x377324 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x377328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377324u;
        // 0x377328: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377324) {
            ctx->pc = 0x377344u;
            goto label_377344;
        }
    }
    ctx->pc = 0x37732Cu;
    // 0x37732c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x37732Cu;
    {
        const bool branch_taken_0x37732c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x377330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37732Cu;
        // 0x377330: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37732c) {
            ctx->pc = 0x37736Cu;
            goto label_37736c;
        }
    }
    ctx->pc = 0x377334u;
label_377334:
    // 0x377334: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x377334u;
    {
        const bool branch_taken_0x377334 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x377338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377334u;
        // 0x377338: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377334) {
            ctx->pc = 0x377364u;
            goto label_377364;
        }
    }
    ctx->pc = 0x37733Cu;
    // 0x37733c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x37733Cu;
    {
        const bool branch_taken_0x37733c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x377340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37733Cu;
        // 0x377340: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37733c) {
            ctx->pc = 0x37736Cu;
            goto label_37736c;
        }
    }
    ctx->pc = 0x377344u;
label_377344:
    // 0x377344: 0xc0ddcde  jal         func_377378
    ctx->pc = 0x377344u;
    SET_GPR_U32(ctx, 31, 0x37734Cu);
    ctx->pc = 0x377348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377344u;
    // 0x377348: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377378u, 0x377344u, 0x37734Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37734Cu;
label_37734c:
    // 0x37734c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x37734Cu;
    {
        const bool branch_taken_0x37734c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x377350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37734Cu;
        // 0x377350: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37734c) {
            ctx->pc = 0x377368u;
            goto label_377368;
        }
    }
    ctx->pc = 0x377354u;
label_377354:
    // 0x377354: 0xc0ddd0a  jal         func_377428
    ctx->pc = 0x377354u;
    SET_GPR_U32(ctx, 31, 0x37735Cu);
    ctx->pc = 0x377358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377354u;
    // 0x377358: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377428u, 0x377354u, 0x37735Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37735Cu;
label_37735c:
    // 0x37735c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x37735Cu;
    {
        const bool branch_taken_0x37735c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x377360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37735Cu;
        // 0x377360: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37735c) {
            ctx->pc = 0x377368u;
            goto label_377368;
        }
    }
    ctx->pc = 0x377364u;
label_377364:
    // 0x377364: 0xa4660016  sh          $a2, 0x16($v1)
    ctx->pc = 0x377364u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 22), (uint16_t)GPR_U32(ctx, 6));
label_377368:
    // 0x377368: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x377368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_37736c:
    // 0x37736c: 0x3e00008  jr          $ra
    ctx->pc = 0x37736Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37736Cu;
        // 0x377370: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37736Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x377374u;
    // 0x377374: 0x0  nop
    ctx->pc = 0x377374u;
    // NOP
    ctx->pc = 0x377378u;
}
