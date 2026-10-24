#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: GetNewFile__6cMcSys
// Address: 0x7c8d00 - 0x7c8f10
void GetNewFile__6cMcSys_0x7c8d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetNewFile__6cMcSys_0x7c8d00");
#endif

    switch (ctx->pc) {
        case 0x7c8d40u: goto label_7c8d40;
        case 0x7c8d68u: goto label_7c8d68;
        case 0x7c8e14u: goto label_7c8e14;
        case 0x7c8e24u: goto label_7c8e24;
        case 0x7c8e34u: goto label_7c8e34;
        case 0x7c8e44u: goto label_7c8e44;
        case 0x7c8e54u: goto label_7c8e54;
        case 0x7c8e64u: goto label_7c8e64;
        case 0x7c8eb8u: goto label_7c8eb8;
        default: break;
    }

    ctx->pc = 0x7c8d00u;

    // 0x7c8d00: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x7c8d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x7c8d04: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x7c8d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x7c8d08: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x7c8d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x7c8d0c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x7c8d0cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8d10: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x7c8d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x7c8d14: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x7c8d14u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8d18: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x7c8d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x7c8d1c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x7c8d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x7c8d20: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x7c8d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x7c8d24: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x7c8d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x7c8d28: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x7c8d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x7c8d2c: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x7c8d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x7c8d30: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x7c8d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x7c8d34: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x7c8d34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x7c8d38: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x7c8d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x7c8d3c: 0x0  nop
    ctx->pc = 0x7c8d3cu;
    // NOP
label_7c8d40:
    // 0x7c8d40: 0x2e2001a  div         $zero, $s7, $v0
    ctx->pc = 0x7c8d40u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 23);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x7c8d44: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x7C8D44u;
    {
        const bool branch_taken_0x7c8d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c8d44) {
            ctx->pc = 0x7C8D48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C8D44u;
            // 0x7c8d48: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C8D4Cu;
            goto label_7c8d4c;
        }
    }
    ctx->pc = 0x7C8D4Cu;
label_7c8d4c:
    // 0x7c8d4c: 0x2810  mfhi        $a1
    ctx->pc = 0x7c8d4cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x7c8d50: 0x4a1000f  bgez        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x7C8D50u;
    {
        const bool branch_taken_0x7c8d50 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x7C8D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C8D50u;
        // 0x7c8d54: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c8d50) {
            ctx->pc = 0x7C8D90u;
            goto label_7c8d90;
        }
    }
    ctx->pc = 0x7C8D58u;
    // 0x7c8d58: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x7c8d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8d5c: 0x26fe0001  addiu       $fp, $s7, 0x1
    ctx->pc = 0x7c8d5cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x7c8d60: 0x26c30088  addiu       $v1, $s6, 0x88
    ctx->pc = 0x7c8d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 136));
    // 0x7c8d64: 0x0  nop
    ctx->pc = 0x7c8d64u;
    // NOP
label_7c8d68:
    // 0x7c8d68: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x7c8d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7c8d6c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7C8D6Cu;
    {
        const bool branch_taken_0x7c8d6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C8D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C8D6Cu;
        // 0x7c8d70: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c8d6c) {
            ctx->pc = 0x7C8D88u;
            goto label_7c8d88;
        }
    }
    ctx->pc = 0x7C8D74u;
    // 0x7c8d74: 0x0  nop
    ctx->pc = 0x7c8d74u;
    // NOP
    // 0x7c8d78: 0x1880fffb  blez        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x7C8D78u;
    {
        const bool branch_taken_0x7c8d78 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x7C8D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C8D78u;
        // 0x7c8d7c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c8d78) {
            ctx->pc = 0x7C8D68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c8d68;
        }
    }
    ctx->pc = 0x7C8D80u;
    // 0x7c8d80: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x7C8D80u;
    {
        const bool branch_taken_0x7c8d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C8D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C8D80u;
        // 0x7c8d84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c8d80) {
            ctx->pc = 0x7C8DC0u;
            goto label_7c8dc0;
        }
    }
    ctx->pc = 0x7C8D88u;
label_7c8d88:
    // 0x7c8d88: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x7C8D88u;
    {
        const bool branch_taken_0x7c8d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C8D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C8D88u;
        // 0x7c8d8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c8d88) {
            ctx->pc = 0x7C8DC0u;
            goto label_7c8dc0;
        }
    }
    ctx->pc = 0x7C8D90u;
label_7c8d90:
    // 0x7c8d90: 0x24a3001f  addiu       $v1, $a1, 0x1F
    ctx->pc = 0x7c8d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 31));
    // 0x7c8d94: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x7c8d94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x7c8d98: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x7c8d98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c8d9c: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x7c8d9cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x7c8da0: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x7c8da0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x7c8da4: 0xa62004  sllv        $a0, $a2, $a1
    ctx->pc = 0x7c8da4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
    // 0x7c8da8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x7c8da8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x7c8dac: 0x26fe0001  addiu       $fp, $s7, 0x1
    ctx->pc = 0x7c8dacu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x7c8db0: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x7c8db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x7c8db4: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x7c8db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x7c8db8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x7c8db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x7c8dbc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x7c8dbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_7c8dc0:
    // 0x7c8dc0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x7c8dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x7c8dc4: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x7C8DC4u;
    {
        const bool branch_taken_0x7c8dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C8DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C8DC4u;
        // 0x7c8dc8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c8dc4) {
            ctx->pc = 0x7C8ECCu;
            goto label_7c8ecc;
        }
    }
    ctx->pc = 0x7C8DCCu;
    // 0x7c8dcc: 0x92d000e7  lbu         $s0, 0xE7($s6)
    ctx->pc = 0x7c8dccu;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 231)));
    // 0x7c8dd0: 0x92c200e6  lbu         $v0, 0xE6($s6)
    ctx->pc = 0x7c8dd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 230)));
    // 0x7c8dd4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x7c8dd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8dd8: 0x92c300e5  lbu         $v1, 0xE5($s6)
    ctx->pc = 0x7c8dd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 229)));
    // 0x7c8ddc: 0x10823c  dsll32      $s0, $s0, 8
    ctx->pc = 0x7c8ddcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 8));
    // 0x7c8de0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x7c8de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x7c8de4: 0x92c600e3  lbu         $a2, 0xE3($s6)
    ctx->pc = 0x7c8de4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 227)));
    // 0x7c8de8: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x7c8de8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x7c8dec: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x7c8decu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x7c8df0: 0x92c200e2  lbu         $v0, 0xE2($s6)
    ctx->pc = 0x7c8df0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 226)));
    // 0x7c8df4: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x7c8df4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x7c8df8: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x7c8df8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x7c8dfc: 0x92c300e1  lbu         $v1, 0xE1($s6)
    ctx->pc = 0x7c8dfcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 225)));
    // 0x7c8e00: 0x2068025  or          $s0, $s0, $a2
    ctx->pc = 0x7c8e00u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 6));
    // 0x7c8e04: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x7c8e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x7c8e08: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x7c8e08u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x7c8e0c: 0xc1f23d2  jal         func_7C8F48
    ctx->pc = 0x7C8E0Cu;
    SET_GPR_U32(ctx, 31, 0x7C8E14u);
    ctx->pc = 0x7C8E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C8E0Cu;
    // 0x7c8e10: 0x2038025  or          $s0, $s0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8F48u, 0x7C8E0Cu, 0x7C8E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C8E14u;
label_7c8e14:
    // 0x7c8e14: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x7c8e14u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8e18: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x7c8e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8e1c: 0xc1f23d2  jal         func_7C8F48
    ctx->pc = 0x7C8E1Cu;
    SET_GPR_U32(ctx, 31, 0x7C8E24u);
    ctx->pc = 0x7C8E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C8E1Cu;
    // 0x7c8e20: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8F48u, 0x7C8E1Cu, 0x7C8E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C8E24u;
label_7c8e24:
    // 0x7c8e24: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x7c8e24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8e28: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x7c8e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8e2c: 0xc1f23d2  jal         func_7C8F48
    ctx->pc = 0x7C8E2Cu;
    SET_GPR_U32(ctx, 31, 0x7C8E34u);
    ctx->pc = 0x7C8E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C8E2Cu;
    // 0x7c8e30: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8F48u, 0x7C8E2Cu, 0x7C8E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C8E34u;
label_7c8e34:
    // 0x7c8e34: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x7c8e34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8e38: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x7c8e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8e3c: 0xc1f23d2  jal         func_7C8F48
    ctx->pc = 0x7C8E3Cu;
    SET_GPR_U32(ctx, 31, 0x7C8E44u);
    ctx->pc = 0x7C8E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C8E3Cu;
    // 0x7c8e40: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8F48u, 0x7C8E3Cu, 0x7C8E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C8E44u;
label_7c8e44:
    // 0x7c8e44: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x7c8e44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8e48: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x7c8e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8e4c: 0xc1f23d2  jal         func_7C8F48
    ctx->pc = 0x7C8E4Cu;
    SET_GPR_U32(ctx, 31, 0x7C8E54u);
    ctx->pc = 0x7C8E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C8E4Cu;
    // 0x7c8e50: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8F48u, 0x7C8E4Cu, 0x7C8E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C8E54u;
label_7c8e54:
    // 0x7c8e54: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x7c8e54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8e58: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x7c8e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8e5c: 0xc1f23d2  jal         func_7C8F48
    ctx->pc = 0x7C8E5Cu;
    SET_GPR_U32(ctx, 31, 0x7C8E64u);
    ctx->pc = 0x7C8E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C8E5Cu;
    // 0x7c8e60: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8F48u, 0x7C8E5Cu, 0x7C8E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C8E64u;
label_7c8e64:
    // 0x7c8e64: 0x92a30019  lbu         $v1, 0x19($s5)
    ctx->pc = 0x7c8e64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 25)));
    // 0x7c8e68: 0x92840018  lbu         $a0, 0x18($s4)
    ctx->pc = 0x7c8e68u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x7c8e6c: 0x92650017  lbu         $a1, 0x17($s3)
    ctx->pc = 0x7c8e6cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 23)));
    // 0x7c8e70: 0x31a3c  dsll32      $v1, $v1, 8
    ctx->pc = 0x7c8e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 8));
    // 0x7c8e74: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x7c8e74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x7c8e78: 0x92460015  lbu         $a2, 0x15($s2)
    ctx->pc = 0x7c8e78u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 21)));
    // 0x7c8e7c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x7c8e7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x7c8e80: 0x52e38  dsll        $a1, $a1, 24
    ctx->pc = 0x7c8e80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 24);
    // 0x7c8e84: 0x92240014  lbu         $a0, 0x14($s1)
    ctx->pc = 0x7c8e84u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x7c8e88: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x7c8e88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x7c8e8c: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x7c8e8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x7c8e90: 0x90450013  lbu         $a1, 0x13($v0)
    ctx->pc = 0x7c8e90u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 19)));
    // 0x7c8e94: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x7c8e94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x7c8e98: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x7c8e98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
    // 0x7c8e9c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x7c8e9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x7c8ea0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x7c8ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x7c8ea4: 0x203802b  sltu        $s0, $s0, $v1
    ctx->pc = 0x7c8ea4u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x7c8ea8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x7C8EA8u;
    {
        const bool branch_taken_0x7c8ea8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C8EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C8EA8u;
        // 0x7c8eac: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c8ea8) {
            ctx->pc = 0x7C8ECCu;
            goto label_7c8ecc;
        }
    }
    ctx->pc = 0x7C8EB0u;
    // 0x7c8eb0: 0xc1f23d2  jal         func_7C8F48
    ctx->pc = 0x7C8EB0u;
    SET_GPR_U32(ctx, 31, 0x7C8EB8u);
    ctx->pc = 0x7C8EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C8EB0u;
    // 0x7c8eb4: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8F48u, 0x7C8EB0u, 0x7C8EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C8EB8u;
label_7c8eb8:
    // 0x7c8eb8: 0xafb70000  sw          $s7, 0x0($sp)
    ctx->pc = 0x7c8eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 23));
    // 0x7c8ebc: 0x68430019  ldl         $v1, 0x19($v0)
    ctx->pc = 0x7c8ebcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 25); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x7c8ec0: 0x6c430012  ldr         $v1, 0x12($v0)
    ctx->pc = 0x7c8ec0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 18); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x7c8ec4: 0xb2c300e7  sdl         $v1, 0xE7($s6)
    ctx->pc = 0x7c8ec4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 231); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7c8ec8: 0xb6c300e0  sdr         $v1, 0xE0($s6)
    ctx->pc = 0x7c8ec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 224); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_7c8ecc:
    // 0x7c8ecc: 0x3c0b82d  daddu       $s7, $fp, $zero
    ctx->pc = 0x7c8eccu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8ed0: 0x2ae20014  slti        $v0, $s7, 0x14
    ctx->pc = 0x7c8ed0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x7c8ed4: 0x1440ff9a  bnez        $v0, . + 4 + (-0x66 << 2)
    ctx->pc = 0x7C8ED4u;
    {
        const bool branch_taken_0x7c8ed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C8ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C8ED4u;
        // 0x7c8ed8: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c8ed4) {
            ctx->pc = 0x7C8D40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c8d40;
        }
    }
    ctx->pc = 0x7C8EDCu;
    // 0x7c8edc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x7c8edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c8ee0: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x7c8ee0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x7c8ee4: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x7c8ee4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x7c8ee8: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x7c8ee8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x7c8eec: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x7c8eecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x7c8ef0: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x7c8ef0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7c8ef4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x7c8ef4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7c8ef8: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x7c8ef8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7c8efc: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x7c8efcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7c8f00: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x7c8f00u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7c8f04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7c8f04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c8f08: 0x3e00008  jr          $ra
    ctx->pc = 0x7C8F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C8F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C8F08u;
        // 0x7c8f0c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C8F08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C8F10u;
}
} // namespace gh_mcport
