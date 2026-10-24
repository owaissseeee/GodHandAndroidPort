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

// Function: func_00330920
// Address: 0x330920 - 0x330a68
void func_00330920_0x330920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00330920_0x330920");
#endif

    switch (ctx->pc) {
        case 0x330960u: goto label_330960;
        case 0x3309b8u: goto label_3309b8;
        case 0x3309c8u: goto label_3309c8;
        case 0x330a08u: goto label_330a08;
        default: break;
    }

    ctx->pc = 0x330920u;

    // 0x330920: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x330920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x330924: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x330924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x330928: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x330928u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33092c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33092cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x330930: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x330930u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330934: 0x10c00046  beqz        $a2, . + 4 + (0x46 << 2)
    ctx->pc = 0x330934u;
    {
        const bool branch_taken_0x330934 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x330938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330934u;
        // 0x330938: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330934) {
            ctx->pc = 0x330A50u;
            goto label_330a50;
        }
    }
    ctx->pc = 0x33093Cu;
    // 0x33093c: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x33093cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x330940: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x330940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x330944: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x330944u;
    {
        const bool branch_taken_0x330944 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x330948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330944u;
        // 0x330948: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330944) {
            ctx->pc = 0x330998u;
            goto label_330998;
        }
    }
    ctx->pc = 0x33094Cu;
    // 0x33094c: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x33094Cu;
    {
        const bool branch_taken_0x33094c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x330950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33094Cu;
        // 0x330950: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33094c) {
            ctx->pc = 0x3309A8u;
            goto label_3309a8;
        }
    }
    ctx->pc = 0x330954u;
    // 0x330954: 0x2407003a  addiu       $a3, $zero, 0x3A
    ctx->pc = 0x330954u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x330958: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x330958u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x33095c: 0x0  nop
    ctx->pc = 0x33095cu;
    // NOP
label_330960:
    // 0x330960: 0x2081821  addu        $v1, $s0, $t0
    ctx->pc = 0x330960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x330964: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x330964u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x330968: 0x29020129  slti        $v0, $t0, 0x129
    ctx->pc = 0x330968u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)297) ? 1 : 0);
    // 0x33096c: 0xc82821  addu        $a1, $a2, $t0
    ctx->pc = 0x33096cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x330970: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x330970u;
    {
        const bool branch_taken_0x330970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x330974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330970u;
        // 0x330974: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330970) {
            ctx->pc = 0x33099Cu;
            goto label_33099c;
        }
    }
    ctx->pc = 0x330978u;
    // 0x330978: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x330978u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x33097c: 0x10470008  beq         $v0, $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x33097Cu;
    {
        const bool branch_taken_0x33097c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x33097c) {
            ctx->pc = 0x3309A0u;
            goto label_3309a0;
        }
    }
    ctx->pc = 0x330984u;
    // 0x330984: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x330984u;
    {
        const bool branch_taken_0x330984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x330984) {
            ctx->pc = 0x330988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x330984u;
            // 0x330988: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x330960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_330960;
        }
    }
    ctx->pc = 0x33098Cu;
    // 0x33098c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x33098Cu;
    {
        const bool branch_taken_0x33098c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33098c) {
            ctx->pc = 0x3309A0u;
            goto label_3309a0;
        }
    }
    ctx->pc = 0x330994u;
    // 0x330994: 0x0  nop
    ctx->pc = 0x330994u;
    // NOP
label_330998:
    // 0x330998: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x330998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_33099c:
    // 0x33099c: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x33099cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3309a0:
    // 0x3309a0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3309A0u;
    {
        const bool branch_taken_0x3309a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3309A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3309A0u;
        // 0x3309a4: 0x2081821  addu        $v1, $s0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3309a0) {
            ctx->pc = 0x3309D0u;
            goto label_3309d0;
        }
    }
    ctx->pc = 0x3309A8u;
label_3309a8:
    // 0x3309a8: 0x2081021  addu        $v0, $s0, $t0
    ctx->pc = 0x3309a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x3309ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3309acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3309b0: 0xc0e9637  jal         func_3A58DC
    ctx->pc = 0x3309B0u;
    SET_GPR_U32(ctx, 31, 0x3309B8u);
    ctx->pc = 0x3309B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3309B0u;
    // 0x3309b4: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A58DCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A58DCu, 0x3309B0u, 0x3309B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3309B8u;
label_3309b8:
    // 0x3309b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3309b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3309bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3309bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3309c0: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x3309C0u;
    SET_GPR_U32(ctx, 31, 0x3309C8u);
    ctx->pc = 0x3309C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3309C0u;
    // 0x3309c4: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x3309C0u, 0x3309C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3309C8u;
label_3309c8:
    // 0x3309c8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x3309C8u;
    {
        const bool branch_taken_0x3309c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3309CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3309C8u;
        // 0x3309cc: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3309c8) {
            ctx->pc = 0x330A50u;
            goto label_330a50;
        }
    }
    ctx->pc = 0x3309D0u;
label_3309d0:
    // 0x3309d0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3309d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3309d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3309d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3309d8: 0x15020003  bne         $t0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3309D8u;
    {
        const bool branch_taken_0x3309d8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x3309DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3309D8u;
        // 0x3309dc: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3309d8) {
            ctx->pc = 0x3309E8u;
            goto label_3309e8;
        }
    }
    ctx->pc = 0x3309E0u;
    // 0x3309e0: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x3309e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3309e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3309e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3309e8:
    // 0x3309e8: 0x29020129  slti        $v0, $t0, 0x129
    ctx->pc = 0x3309e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)297) ? 1 : 0);
    // 0x3309ec: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3309ECu;
    {
        const bool branch_taken_0x3309ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3309F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3309ECu;
        // 0x3309f0: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3309ec) {
            ctx->pc = 0x330A2Cu;
            goto label_330a2c;
        }
    }
    ctx->pc = 0x3309F4u;
    // 0x3309f4: 0xc81821  addu        $v1, $a2, $t0
    ctx->pc = 0x3309f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x3309f8: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x3309f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3309fc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3309FCu;
    {
        const bool branch_taken_0x3309fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x330A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3309FCu;
        // 0x330a00: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3309fc) {
            ctx->pc = 0x330A2Cu;
            goto label_330a2c;
        }
    }
    ctx->pc = 0x330A04u;
    // 0x330a04: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x330a04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_330a08:
    // 0x330a08: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x330a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x330a0c: 0x28a40129  slti        $a0, $a1, 0x129
    ctx->pc = 0x330a0cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)297) ? 1 : 0);
    // 0x330a10: 0xc51821  addu        $v1, $a2, $a1
    ctx->pc = 0x330a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x330a14: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x330a14u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x330a18: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x330A18u;
    {
        const bool branch_taken_0x330a18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x330A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330A18u;
        // 0x330a1c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330a18) {
            ctx->pc = 0x330A2Cu;
            goto label_330a2c;
        }
    }
    ctx->pc = 0x330A20u;
    // 0x330a20: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x330a20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x330a24: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x330A24u;
    {
        const bool branch_taken_0x330a24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x330a24) {
            ctx->pc = 0x330A28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x330A24u;
            // 0x330a28: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x330A08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_330a08;
        }
    }
    ctx->pc = 0x330A2Cu;
label_330a2c:
    // 0x330a2c: 0xa81023  subu        $v0, $a1, $t0
    ctx->pc = 0x330a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x330a30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x330a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330a34: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x330a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x330a38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x330a38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x330a3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x330a3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x330a40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x330a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x330a44: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x330a44u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x330a48: 0x80cc146  j           func_330518
    ctx->pc = 0x330A48u;
    ctx->pc = 0x330A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330A48u;
    // 0x330a4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330518u, 0x330A48u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x330A50u;
label_330a50:
    // 0x330a50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x330a50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x330a54: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x330a54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x330a58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x330a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x330a5c: 0x3e00008  jr          $ra
    ctx->pc = 0x330A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x330A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330A5Cu;
        // 0x330a60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330A5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x330A64u;
    // 0x330a64: 0x0  nop
    ctx->pc = 0x330a64u;
    // NOP
    ctx->pc = 0x330a68u;
}
