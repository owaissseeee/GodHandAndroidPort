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

// Function: func_0037C930
// Address: 0x37c930 - 0x37ca98
void func_0037C930_0x37c930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037C930_0x37c930");
#endif

    switch (ctx->pc) {
        case 0x37c958u: goto label_37c958;
        case 0x37c9f4u: goto label_37c9f4;
        case 0x37c9fcu: goto label_37c9fc;
        case 0x37ca48u: goto label_37ca48;
        default: break;
    }

    ctx->pc = 0x37c930u;

    // 0x37c930: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x37c930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x37c934: 0x3c030077  lui         $v1, 0x77
    ctx->pc = 0x37c934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)119 << 16));
    // 0x37c938: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x37c938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x37c93c: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x37c93cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x37c940: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x37c940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x37c944: 0x2470cf20  addiu       $s0, $v1, -0x30E0
    ctx->pc = 0x37c944u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954784));
    // 0x37c948: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x37c948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x37c94c: 0x2451b1c0  addiu       $s1, $v0, -0x4E40
    ctx->pc = 0x37c94cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947264));
    // 0x37c950: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37c950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37c954: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x37c954u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37c958:
    // 0x37c958: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x37c958u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x37c95c: 0x5080002c  beql        $a0, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x37C95Cu;
    {
        const bool branch_taken_0x37c95c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x37c95c) {
            ctx->pc = 0x37C960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37C95Cu;
            // 0x37c960: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37CA10u;
            goto label_37ca10;
        }
    }
    ctx->pc = 0x37C964u;
    // 0x37c964: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x37c964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x37c968: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x37c968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x37c96c: 0x54620028  bnel        $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x37C96Cu;
    {
        const bool branch_taken_0x37c96c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x37c96c) {
            ctx->pc = 0x37C970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37C96Cu;
            // 0x37c970: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37CA10u;
            goto label_37ca10;
        }
    }
    ctx->pc = 0x37C974u;
    // 0x37c974: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x37c974u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x37c978: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x37c978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x37c97c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x37C97Cu;
    {
        const bool branch_taken_0x37c97c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C97Cu;
        // 0x37c980: 0x30828000  andi        $v0, $a0, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c97c) {
            ctx->pc = 0x37C998u;
            goto label_37c998;
        }
    }
    ctx->pc = 0x37C984u;
    // 0x37c984: 0x54400022  bnel        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x37C984u;
    {
        const bool branch_taken_0x37c984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37c984) {
            ctx->pc = 0x37C988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37C984u;
            // 0x37c988: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37CA10u;
            goto label_37ca10;
        }
    }
    ctx->pc = 0x37C98Cu;
    // 0x37c98c: 0x34828000  ori         $v0, $a0, 0x8000
    ctx->pc = 0x37c98cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x37c990: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x37C990u;
    {
        const bool branch_taken_0x37c990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C990u;
        // 0x37c994: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c990) {
            ctx->pc = 0x37CA0Cu;
            goto label_37ca0c;
        }
    }
    ctx->pc = 0x37C998u;
label_37c998:
    // 0x37c998: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x37C998u;
    {
        const bool branch_taken_0x37c998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C998u;
        // 0x37c99c: 0x30827fff  andi        $v0, $a0, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c998) {
            ctx->pc = 0x37C9A4u;
            goto label_37c9a4;
        }
    }
    ctx->pc = 0x37C9A0u;
    // 0x37c9a0: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x37c9a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_37c9a4:
    // 0x37c9a4: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x37c9a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x37c9a8: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x37c9a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x37c9ac: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x37C9ACu;
    {
        const bool branch_taken_0x37c9ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37c9ac) {
            ctx->pc = 0x37C9B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37C9ACu;
            // 0x37c9b0: 0x96030000  lhu         $v1, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37C9C8u;
            goto label_37c9c8;
        }
    }
    ctx->pc = 0x37C9B4u;
    // 0x37c9b4: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x37c9b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x37c9b8: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x37C9B8u;
    {
        const bool branch_taken_0x37c9b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37c9b8) {
            ctx->pc = 0x37C9BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37C9B8u;
            // 0x37c9bc: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37CA10u;
            goto label_37ca10;
        }
    }
    ctx->pc = 0x37C9C0u;
    // 0x37c9c0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x37C9C0u;
    {
        const bool branch_taken_0x37c9c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37c9c0) {
            ctx->pc = 0x37C9ECu;
            goto label_37c9ec;
        }
    }
    ctx->pc = 0x37C9C8u;
label_37c9c8:
    // 0x37c9c8: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x37c9c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x37c9cc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x37C9CCu;
    {
        const bool branch_taken_0x37c9cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37c9cc) {
            ctx->pc = 0x37C9D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37C9CCu;
            // 0x37c9d0: 0x96220000  lhu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37C9E0u;
            goto label_37c9e0;
        }
    }
    ctx->pc = 0x37C9D4u;
    // 0x37c9d4: 0x34620002  ori         $v0, $v1, 0x2
    ctx->pc = 0x37c9d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x37c9d8: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x37c9d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x37c9dc: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x37c9dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_37c9e0:
    // 0x37c9e0: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x37c9e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x37c9e4: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x37C9E4u;
    {
        const bool branch_taken_0x37c9e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37c9e4) {
            ctx->pc = 0x37C9E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37C9E4u;
            // 0x37c9e8: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37CA04u;
            goto label_37ca04;
        }
    }
    ctx->pc = 0x37C9ECu;
label_37c9ec:
    // 0x37c9ec: 0xc0df452  jal         func_37D148
    ctx->pc = 0x37C9ECu;
    SET_GPR_U32(ctx, 31, 0x37C9F4u);
    ctx->pc = 0x37C9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C9ECu;
    // 0x37c9f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D148u, 0x37C9ECu, 0x37C9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C9F4u;
label_37c9f4:
    // 0x37c9f4: 0xc0df4ec  jal         func_37D3B0
    ctx->pc = 0x37C9F4u;
    SET_GPR_U32(ctx, 31, 0x37C9FCu);
    ctx->pc = 0x37C9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C9F4u;
    // 0x37c9f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D3B0u, 0x37C9F4u, 0x37C9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C9FCu;
label_37c9fc:
    // 0x37c9fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x37C9FCu;
    {
        const bool branch_taken_0x37c9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37CA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C9FCu;
        // 0x37ca00: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c9fc) {
            ctx->pc = 0x37CA10u;
            goto label_37ca10;
        }
    }
    ctx->pc = 0x37CA04u;
label_37ca04:
    // 0x37ca04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x37ca04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x37ca08: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x37ca08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_37ca0c:
    // 0x37ca0c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x37ca0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_37ca10:
    // 0x37ca10: 0x26100050  addiu       $s0, $s0, 0x50
    ctx->pc = 0x37ca10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x37ca14: 0x2a420030  slti        $v0, $s2, 0x30
    ctx->pc = 0x37ca14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x37ca18: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x37CA18u;
    {
        const bool branch_taken_0x37ca18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37CA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CA18u;
        // 0x37ca1c: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ca18) {
            ctx->pc = 0x37C958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37c958;
        }
    }
    ctx->pc = 0x37CA20u;
    // 0x37ca20: 0x2a420033  slti        $v0, $s2, 0x33
    ctx->pc = 0x37ca20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)51) ? 1 : 0);
    // 0x37ca24: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x37CA24u;
    {
        const bool branch_taken_0x37ca24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37CA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CA24u;
        // 0x37ca28: 0x3c020077  lui         $v0, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ca24) {
            ctx->pc = 0x37CA7Cu;
            goto label_37ca7c;
        }
    }
    ctx->pc = 0x37CA2Cu;
    // 0x37ca2c: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x37ca2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x37ca30: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x37ca30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x37ca34: 0x2442cf20  addiu       $v0, $v0, -0x30E0
    ctx->pc = 0x37ca34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954784));
    // 0x37ca38: 0x24450ff0  addiu       $a1, $v0, 0xFF0
    ctx->pc = 0x37ca38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4080));
    // 0x37ca3c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x37ca3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x37ca40: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x37ca40u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x37ca44: 0x0  nop
    ctx->pc = 0x37ca44u;
    // NOP
label_37ca48:
    // 0x37ca48: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x37CA48u;
    {
        const bool branch_taken_0x37ca48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x37CA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CA48u;
        // 0x37ca4c: 0x30820002  andi        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ca48) {
            ctx->pc = 0x37CA6Cu;
            goto label_37ca6c;
        }
    }
    ctx->pc = 0x37CA50u;
    // 0x37ca50: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x37CA50u;
    {
        const bool branch_taken_0x37ca50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37ca50) {
            ctx->pc = 0x37CA54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37CA50u;
            // 0x37ca54: 0x8c62000c  lw          $v0, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37CA64u;
            goto label_37ca64;
        }
    }
    ctx->pc = 0x37CA58u;
    // 0x37ca58: 0x34820002  ori         $v0, $a0, 0x2
    ctx->pc = 0x37ca58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x37ca5c: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x37ca5cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x37ca60: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x37ca60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_37ca64:
    // 0x37ca64: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x37ca64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x37ca68: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x37ca68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_37ca6c:
    // 0x37ca6c: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x37ca6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x37ca70: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x37ca70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x37ca74: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x37CA74u;
    {
        const bool branch_taken_0x37ca74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37ca74) {
            ctx->pc = 0x37CA78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37CA74u;
            // 0x37ca78: 0x94640000  lhu         $a0, 0x0($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37CA48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37ca48;
        }
    }
    ctx->pc = 0x37CA7Cu;
label_37ca7c:
    // 0x37ca7c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x37ca7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37ca80: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x37ca80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37ca84: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x37ca84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37ca88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37ca88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37ca8c: 0x3e00008  jr          $ra
    ctx->pc = 0x37CA8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37CA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CA8Cu;
        // 0x37ca90: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37CA8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37CA94u;
    // 0x37ca94: 0x0  nop
    ctx->pc = 0x37ca94u;
    // NOP
    ctx->pc = 0x37ca98u;
}
