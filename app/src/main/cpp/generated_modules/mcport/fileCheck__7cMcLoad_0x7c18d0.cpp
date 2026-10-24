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
// Function: fileCheck__7cMcLoad
// Address: 0x7c18d0 - 0x7c1c40
void fileCheck__7cMcLoad_0x7c18d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fileCheck__7cMcLoad_0x7c18d0");
#endif

    switch (ctx->pc) {
        case 0x7c1928u: goto label_7c1928;
        case 0x7c193cu: goto label_7c193c;
        case 0x7c194cu: goto label_7c194c;
        case 0x7c195cu: goto label_7c195c;
        case 0x7c197cu: goto label_7c197c;
        case 0x7c1998u: goto label_7c1998;
        case 0x7c19c8u: goto label_7c19c8;
        case 0x7c19d8u: goto label_7c19d8;
        case 0x7c1a30u: goto label_7c1a30;
        case 0x7c1ac4u: goto label_7c1ac4;
        case 0x7c1adcu: goto label_7c1adc;
        case 0x7c1b88u: goto label_7c1b88;
        default: break;
    }

    ctx->pc = 0x7c18d0u;

    // 0x7c18d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x7c18d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x7c18d4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x7c18d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x7c18d8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x7c18d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x7c18dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7c18dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c18e0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x7c18e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x7c18e4: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x7c18e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c18e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x7c18e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x7c18ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x7c18ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x7c18f0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x7c18f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x7c18f4: 0x8e3000f4  lw          $s0, 0xF4($s1)
    ctx->pc = 0x7c18f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x7c18f8: 0x1214001b  beq         $s0, $s4, . + 4 + (0x1B << 2)
    ctx->pc = 0x7C18F8u;
    {
        const bool branch_taken_0x7c18f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 20));
        ctx->pc = 0x7C18FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C18F8u;
        // 0x7c18fc: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c18f8) {
            ctx->pc = 0x7C1968u;
            goto label_7c1968;
        }
    }
    ctx->pc = 0x7C1900u;
    // 0x7c1900: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C1900u;
    {
        const bool branch_taken_0x7c1900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c1900) {
            ctx->pc = 0x7C1904u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C1900u;
            // 0x7c1904: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C1918u;
            goto label_7c1918;
        }
    }
    ctx->pc = 0x7C1908u;
    // 0x7c1908: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x7C1908u;
    {
        const bool branch_taken_0x7c1908 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C190Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1908u;
        // 0x7c190c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1908) {
            ctx->pc = 0x7C1928u;
            goto label_7c1928;
        }
    }
    ctx->pc = 0x7C1910u;
    // 0x7c1910: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x7C1910u;
    {
        const bool branch_taken_0x7c1910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C1914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1910u;
        // 0x7c1914: 0x7bb10050  lq          $s1, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1910) {
            ctx->pc = 0x7C1C28u;
            goto label_7c1c28;
        }
    }
    ctx->pc = 0x7C1918u;
label_7c1918:
    // 0x7c1918: 0x12020066  beq         $s0, $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x7C1918u;
    {
        const bool branch_taken_0x7c1918 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C191Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1918u;
        // 0x7c191c: 0x3c02007d  lui         $v0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1918) {
            ctx->pc = 0x7C1AB4u;
            goto label_7c1ab4;
        }
    }
    ctx->pc = 0x7C1920u;
    // 0x7c1920: 0x100000c0  b           . + 4 + (0xC0 << 2)
    ctx->pc = 0x7C1920u;
    {
        const bool branch_taken_0x7c1920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C1924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1920u;
        // 0x7c1924: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1920) {
            ctx->pc = 0x7C1C24u;
            goto label_7c1c24;
        }
    }
    ctx->pc = 0x7C1928u;
label_7c1928:
    // 0x7c1928: 0x3c10007d  lui         $s0, 0x7D
    ctx->pc = 0x7c1928u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)125 << 16));
    // 0x7c192c: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x7c192cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x7c1930: 0x26101740  addiu       $s0, $s0, 0x1740
    ctx->pc = 0x7c1930u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5952));
    // 0x7c1934: 0xc1f0c7c  jal         func_7C31F0
    ctx->pc = 0x7C1934u;
    SET_GPR_U32(ctx, 31, 0x7C193Cu);
    ctx->pc = 0x7C1938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C1934u;
    // 0x7c1938: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C31F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C31F0u, 0x7C1934u, 0x7C193Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C193Cu;
label_7c193c:
    // 0x7c193c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c193cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c1940: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7c1940u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c1944: 0xc1f0d42  jal         func_7C3508
    ctx->pc = 0x7C1944u;
    SET_GPR_U32(ctx, 31, 0x7C194Cu);
    ctx->pc = 0x7C1948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C1944u;
    // 0x7c1948: 0x24850014  addiu       $a1, $a0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3508u, 0x7C1944u, 0x7C194Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C194Cu;
label_7c194c:
    // 0x7c194c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7c194cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c1950: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x7c1950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x7c1954: 0xc1f0b7a  jal         func_7C2DE8
    ctx->pc = 0x7C1954u;
    SET_GPR_U32(ctx, 31, 0x7C195Cu);
    ctx->pc = 0x7C1958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C1954u;
    // 0x7c1958: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C2DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C2DE8u, 0x7C1954u, 0x7C195Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C195Cu;
label_7c195c:
    // 0x7c195c: 0x104000ac  beqz        $v0, . + 4 + (0xAC << 2)
    ctx->pc = 0x7C195Cu;
    {
        const bool branch_taken_0x7c195c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C1960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C195Cu;
        // 0x7c1960: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c195c) {
            ctx->pc = 0x7C1C10u;
            goto label_7c1c10;
        }
    }
    ctx->pc = 0x7C1964u;
    // 0x7c1964: 0xae2200f4  sw          $v0, 0xF4($s1)
    ctx->pc = 0x7c1964u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
label_7c1968:
    // 0x7c1968: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7c1968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7c196c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x7c196cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c1970: 0x24521740  addiu       $s2, $v0, 0x1740
    ctx->pc = 0x7c1970u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 5952));
    // 0x7c1974: 0xc1f0c92  jal         func_7C3248
    ctx->pc = 0x7C1974u;
    SET_GPR_U32(ctx, 31, 0x7C197Cu);
    ctx->pc = 0x7C1978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C1974u;
    // 0x7c1978: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3248u, 0x7C1974u, 0x7C197Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C197Cu;
label_7c197c:
    // 0x7c197c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7c197cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c1980: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7c1980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c1984: 0x560200a7  bnel        $s0, $v0, . + 4 + (0xA7 << 2)
    ctx->pc = 0x7C1984u;
    {
        const bool branch_taken_0x7c1984 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x7c1984) {
            ctx->pc = 0x7C1988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C1984u;
            // 0x7c1988: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C1C24u;
            goto label_7c1c24;
        }
    }
    ctx->pc = 0x7C198Cu;
    // 0x7c198c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x7c198cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c1990: 0xc1f0ba8  jal         func_7C2EA0
    ctx->pc = 0x7C1990u;
    SET_GPR_U32(ctx, 31, 0x7C1998u);
    ctx->pc = 0x7C1994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C1990u;
    // 0x7c1994: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C2EA0u, 0x7C1990u, 0x7C1998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C1998u;
label_7c1998:
    // 0x7c1998: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7c1998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c199c: 0x10b00005  beq         $a1, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C199Cu;
    {
        const bool branch_taken_0x7c199c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 16));
        ctx->pc = 0x7C19A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C199Cu;
        // 0x7c19a0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c199c) {
            ctx->pc = 0x7C19B4u;
            goto label_7c19b4;
        }
    }
    ctx->pc = 0x7C19A4u;
    // 0x7c19a4: 0x10a20010  beq         $a1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x7C19A4u;
    {
        const bool branch_taken_0x7c19a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C19A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C19A4u;
        // 0x7c19a8: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c19a4) {
            ctx->pc = 0x7C19E8u;
            goto label_7c19e8;
        }
    }
    ctx->pc = 0x7C19ACu;
    // 0x7c19ac: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x7C19ACu;
    {
        const bool branch_taken_0x7c19ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C19B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C19ACu;
        // 0x7c19b0: 0xae2000e8  sw          $zero, 0xE8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c19ac) {
            ctx->pc = 0x7C1C18u;
            goto label_7c1c18;
        }
    }
    ctx->pc = 0x7C19B4u;
label_7c19b4:
    // 0x7c19b4: 0x3c05007d  lui         $a1, 0x7D
    ctx->pc = 0x7c19b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)125 << 16));
    // 0x7c19b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7c19b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c19bc: 0x24a50a40  addiu       $a1, $a1, 0xA40
    ctx->pc = 0x7c19bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2624));
    // 0x7c19c0: 0xc1f0d6a  jal         func_7C35A8
    ctx->pc = 0x7C19C0u;
    SET_GPR_U32(ctx, 31, 0x7C19C8u);
    ctx->pc = 0x7C19C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C19C0u;
    // 0x7c19c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C35A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C35A8u, 0x7C19C0u, 0x7C19C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C19C8u;
label_7c19c8:
    // 0x7c19c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c19c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c19cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7c19ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c19d0: 0xc1f0b7a  jal         func_7C2DE8
    ctx->pc = 0x7C19D0u;
    SET_GPR_U32(ctx, 31, 0x7C19D8u);
    ctx->pc = 0x7C19D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C19D0u;
    // 0x7c19d4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C2DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C2DE8u, 0x7C19D0u, 0x7C19D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C19D8u;
label_7c19d8:
    // 0x7c19d8: 0x1040008d  beqz        $v0, . + 4 + (0x8D << 2)
    ctx->pc = 0x7C19D8u;
    {
        const bool branch_taken_0x7c19d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C19DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C19D8u;
        // 0x7c19dc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c19d8) {
            ctx->pc = 0x7C1C10u;
            goto label_7c1c10;
        }
    }
    ctx->pc = 0x7C19E0u;
    // 0x7c19e0: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x7C19E0u;
    {
        const bool branch_taken_0x7c19e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C19E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C19E0u;
        // 0x7c19e4: 0xae2200f4  sw          $v0, 0xF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c19e0) {
            ctx->pc = 0x7C1C20u;
            goto label_7c1c20;
        }
    }
    ctx->pc = 0x7C19E8u;
label_7c19e8:
    // 0x7c19e8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x7c19e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x7c19ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x7c19ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x7c19f0: 0x28430014  slti        $v1, $v0, 0x14
    ctx->pc = 0x7c19f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x7c19f4: 0x1460ffcc  bnez        $v1, . + 4 + (-0x34 << 2)
    ctx->pc = 0x7C19F4u;
    {
        const bool branch_taken_0x7c19f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C19F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C19F4u;
        // 0x7c19f8: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c19f4) {
            ctx->pc = 0x7C1928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c1928;
        }
    }
    ctx->pc = 0x7C19FCu;
    // 0x7c19fc: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x7c19fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x7c1a00: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x7c1a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c1a04: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x7c1a04u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x7c1a08: 0xae2500f0  sw          $a1, 0xF0($s1)
    ctx->pc = 0x7c1a08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 5));
    // 0x7c1a0c: 0xae2000f4  sw          $zero, 0xF4($s1)
    ctx->pc = 0x7c1a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 0));
    // 0x7c1a10: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x7c1a10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
    // 0x7c1a14: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x7C1A14u;
    {
        const bool branch_taken_0x7c1a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c1a14) {
            ctx->pc = 0x7C1A18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C1A14u;
            // 0x7c1a18: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C1A1Cu;
            goto label_7c1a1c;
        }
    }
    ctx->pc = 0x7C1A1Cu;
label_7c1a1c:
    // 0x7c1a1c: 0x2010  mfhi        $a0
    ctx->pc = 0x7c1a1cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x7c1a20: 0x481000d  bgez        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x7C1A20u;
    {
        const bool branch_taken_0x7c1a20 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x7C1A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1A20u;
        // 0x7c1a24: 0x64182a  slt         $v1, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1a20) {
            ctx->pc = 0x7C1A58u;
            goto label_7c1a58;
        }
    }
    ctx->pc = 0x7C1A28u;
    // 0x7c1a28: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x7c1a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c1a2c: 0x26230088  addiu       $v1, $s1, 0x88
    ctx->pc = 0x7c1a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 136));
label_7c1a30:
    // 0x7c1a30: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x7c1a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7c1a34: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7C1A34u;
    {
        const bool branch_taken_0x7c1a34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C1A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1A34u;
        // 0x7c1a38: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1a34) {
            ctx->pc = 0x7C1A50u;
            goto label_7c1a50;
        }
    }
    ctx->pc = 0x7C1A3Cu;
    // 0x7c1a3c: 0x0  nop
    ctx->pc = 0x7c1a3cu;
    // NOP
    // 0x7c1a40: 0x1880fffb  blez        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x7C1A40u;
    {
        const bool branch_taken_0x7c1a40 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x7C1A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1A40u;
        // 0x7c1a44: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1a40) {
            ctx->pc = 0x7C1A30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c1a30;
        }
    }
    ctx->pc = 0x7C1A48u;
    // 0x7c1a48: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x7C1A48u;
    {
        const bool branch_taken_0x7c1a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C1A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1A48u;
        // 0x7c1a4c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1a48) {
            ctx->pc = 0x7C1A7Cu;
            goto label_7c1a7c;
        }
    }
    ctx->pc = 0x7C1A50u;
label_7c1a50:
    // 0x7c1a50: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x7C1A50u;
    {
        const bool branch_taken_0x7c1a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C1A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1A50u;
        // 0x7c1a54: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1a50) {
            ctx->pc = 0x7C1A7Cu;
            goto label_7c1a7c;
        }
    }
    ctx->pc = 0x7C1A58u;
label_7c1a58:
    // 0x7c1a58: 0x2482001f  addiu       $v0, $a0, 0x1F
    ctx->pc = 0x7c1a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
    // 0x7c1a5c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x7c1a5cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x7c1a60: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x7c1a60u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x7c1a64: 0x902004  sllv        $a0, $s0, $a0
    ctx->pc = 0x7c1a64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 4) & 0x1F));
    // 0x7c1a68: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x7c1a68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x7c1a6c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x7c1a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x7c1a70: 0x8c430088  lw          $v1, 0x88($v0)
    ctx->pc = 0x7c1a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x7c1a74: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x7c1a74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x7c1a78: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x7c1a78u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_7c1a7c:
    // 0x7c1a7c: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x7c1a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x7c1a80: 0x14400068  bnez        $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x7C1A80u;
    {
        const bool branch_taken_0x7c1a80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C1A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1A80u;
        // 0x7c1a84: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1a80) {
            ctx->pc = 0x7C1C24u;
            goto label_7c1c24;
        }
    }
    ctx->pc = 0x7C1A88u;
    // 0x7c1a88: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x7c1a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x7c1a8c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x7c1a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x7c1a90: 0xae23007c  sw          $v1, 0x7C($s1)
    ctx->pc = 0x7c1a90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 3));
    // 0x7c1a94: 0x24426900  addiu       $v0, $v0, 0x6900
    ctx->pc = 0x7c1a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26880));
    // 0x7c1a98: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x7c1a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c1a9c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x7c1a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x7c1aa0: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x7c1aa0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5E6910u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5E6910u, _value); } while (0);
    // 0x7c1aa4: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x7c1aa4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5E690Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5E690Cu, _value); } while (0);
    // 0x7c1aa8: 0xae2400f0  sw          $a0, 0xF0($s1)
    ctx->pc = 0x7c1aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 4));
    // 0x7c1aac: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x7C1AACu;
    {
        const bool branch_taken_0x7c1aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C1AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1AACu;
        // 0x7c1ab0: 0xae2000e8  sw          $zero, 0xE8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1aac) {
            ctx->pc = 0x7C1C1Cu;
            goto label_7c1c1c;
        }
    }
    ctx->pc = 0x7C1AB4u;
label_7c1ab4:
    // 0x7c1ab4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x7c1ab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c1ab8: 0x24531740  addiu       $s3, $v0, 0x1740
    ctx->pc = 0x7c1ab8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 5952));
    // 0x7c1abc: 0xc1f0c92  jal         func_7C3248
    ctx->pc = 0x7C1ABCu;
    SET_GPR_U32(ctx, 31, 0x7C1AC4u);
    ctx->pc = 0x7C1AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C1ABCu;
    // 0x7c1ac0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3248u, 0x7C1ABCu, 0x7C1AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C1AC4u;
label_7c1ac4:
    // 0x7c1ac4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x7c1ac4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c1ac8: 0x56540056  bnel        $s2, $s4, . + 4 + (0x56 << 2)
    ctx->pc = 0x7C1AC8u;
    {
        const bool branch_taken_0x7c1ac8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 20));
        if (branch_taken_0x7c1ac8) {
            ctx->pc = 0x7C1ACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C1AC8u;
            // 0x7c1acc: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C1C24u;
            goto label_7c1c24;
        }
    }
    ctx->pc = 0x7C1AD0u;
    // 0x7c1ad0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x7c1ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c1ad4: 0xc1f0ba8  jal         func_7C2EA0
    ctx->pc = 0x7C1AD4u;
    SET_GPR_U32(ctx, 31, 0x7C1ADCu);
    ctx->pc = 0x7C1AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C1AD4u;
    // 0x7c1ad8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C2EA0u, 0x7C1AD4u, 0x7C1ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C1ADCu;
label_7c1adc:
    // 0x7c1adc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x7c1adcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c1ae0: 0x50d20005  beql        $a2, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C1AE0u;
    {
        const bool branch_taken_0x7c1ae0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 18));
        if (branch_taken_0x7c1ae0) {
            ctx->pc = 0x7C1AE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C1AE0u;
            // 0x7c1ae4: 0x8e630050  lw          $v1, 0x50($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C1AF8u;
            goto label_7c1af8;
        }
    }
    ctx->pc = 0x7C1AE8u;
    // 0x7c1ae8: 0x10d00013  beq         $a2, $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x7C1AE8u;
    {
        const bool branch_taken_0x7c1ae8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 16));
        ctx->pc = 0x7C1AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1AE8u;
        // 0x7c1aec: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1ae8) {
            ctx->pc = 0x7C1B38u;
            goto label_7c1b38;
        }
    }
    ctx->pc = 0x7C1AF0u;
    // 0x7c1af0: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x7C1AF0u;
    {
        const bool branch_taken_0x7c1af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C1AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1AF0u;
        // 0x7c1af4: 0xae2000e8  sw          $zero, 0xE8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1af0) {
            ctx->pc = 0x7C1C18u;
            goto label_7c1c18;
        }
    }
    ctx->pc = 0x7C1AF8u;
label_7c1af8:
    // 0x7c1af8: 0x240203c4  addiu       $v0, $zero, 0x3C4
    ctx->pc = 0x7c1af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 964));
    // 0x7c1afc: 0x5462000f  bnel        $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x7C1AFCu;
    {
        const bool branch_taken_0x7c1afc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x7c1afc) {
            ctx->pc = 0x7C1B00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C1AFCu;
            // 0x7c1b00: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C1B3Cu;
            goto label_7c1b3c;
        }
    }
    ctx->pc = 0x7C1B04u;
    // 0x7c1b04: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x7c1b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x7c1b08: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x7c1b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c1b0c: 0x26250088  addiu       $a1, $s1, 0x88
    ctx->pc = 0x7c1b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 136));
    // 0x7c1b10: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x7c1b10u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x7c1b14: 0x2482001f  addiu       $v0, $a0, 0x1F
    ctx->pc = 0x7c1b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
    // 0x7c1b18: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x7c1b18u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x7c1b1c: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x7c1b1cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x7c1b20: 0x862004  sllv        $a0, $a2, $a0
    ctx->pc = 0x7c1b20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 4) & 0x1F));
    // 0x7c1b24: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x7c1b24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x7c1b28: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x7c1b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x7c1b2c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x7c1b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x7c1b30: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x7c1b30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x7c1b34: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x7c1b34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_7c1b38:
    // 0x7c1b38: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x7c1b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_7c1b3c:
    // 0x7c1b3c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x7c1b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x7c1b40: 0x28430014  slti        $v1, $v0, 0x14
    ctx->pc = 0x7c1b40u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x7c1b44: 0x1460ff78  bnez        $v1, . + 4 + (-0x88 << 2)
    ctx->pc = 0x7C1B44u;
    {
        const bool branch_taken_0x7c1b44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C1B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1B44u;
        // 0x7c1b48: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1b44) {
            ctx->pc = 0x7C1928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c1928;
        }
    }
    ctx->pc = 0x7C1B4Cu;
    // 0x7c1b4c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x7c1b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x7c1b50: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x7c1b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c1b54: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x7c1b54u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x7c1b58: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x7c1b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7c1b5c: 0xae2300f0  sw          $v1, 0xF0($s1)
    ctx->pc = 0x7c1b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 3));
    // 0x7c1b60: 0xae2000f4  sw          $zero, 0xF4($s1)
    ctx->pc = 0x7c1b60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 0));
    // 0x7c1b64: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x7c1b64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
    // 0x7c1b68: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x7C1B68u;
    {
        const bool branch_taken_0x7c1b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c1b68) {
            ctx->pc = 0x7C1B6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C1B68u;
            // 0x7c1b6c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C1B70u;
            goto label_7c1b70;
        }
    }
    ctx->pc = 0x7C1B70u;
label_7c1b70:
    // 0x7c1b70: 0x2810  mfhi        $a1
    ctx->pc = 0x7c1b70u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x7c1b74: 0x4a1000e  bgez        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x7C1B74u;
    {
        const bool branch_taken_0x7c1b74 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x7C1B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1B74u;
        // 0x7c1b78: 0x85102a  slt         $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1b74) {
            ctx->pc = 0x7C1BB0u;
            goto label_7c1bb0;
        }
    }
    ctx->pc = 0x7C1B7Cu;
    // 0x7c1b7c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x7c1b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c1b80: 0x26230088  addiu       $v1, $s1, 0x88
    ctx->pc = 0x7c1b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 136));
    // 0x7c1b84: 0x0  nop
    ctx->pc = 0x7c1b84u;
    // NOP
label_7c1b88:
    // 0x7c1b88: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x7c1b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7c1b8c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7C1B8Cu;
    {
        const bool branch_taken_0x7c1b8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C1B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1B8Cu;
        // 0x7c1b90: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1b8c) {
            ctx->pc = 0x7C1BA8u;
            goto label_7c1ba8;
        }
    }
    ctx->pc = 0x7C1B94u;
    // 0x7c1b94: 0x0  nop
    ctx->pc = 0x7c1b94u;
    // NOP
    // 0x7c1b98: 0x1880fffb  blez        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x7C1B98u;
    {
        const bool branch_taken_0x7c1b98 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x7C1B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1B98u;
        // 0x7c1b9c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1b98) {
            ctx->pc = 0x7C1B88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c1b88;
        }
    }
    ctx->pc = 0x7C1BA0u;
    // 0x7c1ba0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x7C1BA0u;
    {
        const bool branch_taken_0x7c1ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C1BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1BA0u;
        // 0x7c1ba4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1ba0) {
            ctx->pc = 0x7C1BD8u;
            goto label_7c1bd8;
        }
    }
    ctx->pc = 0x7C1BA8u;
label_7c1ba8:
    // 0x7c1ba8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x7C1BA8u;
    {
        const bool branch_taken_0x7c1ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C1BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1BA8u;
        // 0x7c1bac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1ba8) {
            ctx->pc = 0x7C1BD8u;
            goto label_7c1bd8;
        }
    }
    ctx->pc = 0x7C1BB0u;
label_7c1bb0:
    // 0x7c1bb0: 0x24a3001f  addiu       $v1, $a1, 0x1F
    ctx->pc = 0x7c1bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 31));
    // 0x7c1bb4: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x7c1bb4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x7c1bb8: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x7c1bb8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x7c1bbc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x7c1bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c1bc0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x7c1bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x7c1bc4: 0xa42004  sllv        $a0, $a0, $a1
    ctx->pc = 0x7c1bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x7c1bc8: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x7c1bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x7c1bcc: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x7c1bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x7c1bd0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x7c1bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x7c1bd4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x7c1bd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_7c1bd8:
    // 0x7c1bd8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x7c1bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x7c1bdc: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x7C1BDCu;
    {
        const bool branch_taken_0x7c1bdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C1BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1BDCu;
        // 0x7c1be0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1bdc) {
            ctx->pc = 0x7C1C24u;
            goto label_7c1c24;
        }
    }
    ctx->pc = 0x7C1BE4u;
    // 0x7c1be4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x7c1be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x7c1be8: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x7c1be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x7c1bec: 0xae23007c  sw          $v1, 0x7C($s1)
    ctx->pc = 0x7c1becu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 3));
    // 0x7c1bf0: 0x24426900  addiu       $v0, $v0, 0x6900
    ctx->pc = 0x7c1bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26880));
    // 0x7c1bf4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x7c1bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c1bf8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x7c1bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x7c1bfc: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x7c1bfcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5E6910u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5E6910u, _value); } while (0);
    // 0x7c1c00: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x7c1c00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5E690Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5E690Cu, _value); } while (0);
    // 0x7c1c04: 0xae2400f0  sw          $a0, 0xF0($s1)
    ctx->pc = 0x7c1c04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 4));
    // 0x7c1c08: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7C1C08u;
    {
        const bool branch_taken_0x7c1c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C1C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1C08u;
        // 0x7c1c0c: 0xae2000e8  sw          $zero, 0xE8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1c08) {
            ctx->pc = 0x7C1C1Cu;
            goto label_7c1c1c;
        }
    }
    ctx->pc = 0x7C1C10u;
label_7c1c10:
    // 0x7c1c10: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x7c1c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x7c1c14: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x7c1c14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
label_7c1c18:
    // 0x7c1c18: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x7c1c18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
label_7c1c1c:
    // 0x7c1c1c: 0xae2000f4  sw          $zero, 0xF4($s1)
    ctx->pc = 0x7c1c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 0));
label_7c1c20:
    // 0x7c1c20: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x7c1c20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_7c1c24:
    // 0x7c1c24: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x7c1c24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_7c1c28:
    // 0x7c1c28: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x7c1c28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7c1c2c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x7c1c2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7c1c30: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x7c1c30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7c1c34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7c1c34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c1c38: 0x3e00008  jr          $ra
    ctx->pc = 0x7C1C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C1C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1C38u;
        // 0x7c1c3c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C1C38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C1C40u;
}
} // namespace gh_mcport
