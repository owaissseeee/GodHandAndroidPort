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

// Function: func_002E0F18
// Address: 0x2e0f18 - 0x2e12d8
void func_002E0F18_0x2e0f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002E0F18_0x2e0f18");
#endif

    switch (ctx->pc) {
        case 0x2e0ff0u: goto label_2e0ff0;
        case 0x2e1040u: goto label_2e1040;
        case 0x2e126cu: goto label_2e126c;
        default: break;
    }

    ctx->pc = 0x2e0f18u;

    // 0x2e0f18: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x2e0f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x2e0f1c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2e0f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2e0f20: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x2e0f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
    // 0x2e0f24: 0x2442b280  addiu       $v0, $v0, -0x4D80
    ctx->pc = 0x2e0f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947456));
    // 0x2e0f28: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x2e0f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
    // 0x2e0f2c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2e0f2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0f30: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x2e0f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
    // 0x2e0f34: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2e0f34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0f38: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x2e0f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
    // 0x2e0f3c: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x2e0f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
    // 0x2e0f40: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x2e0f40u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0f44: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x2e0f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
    // 0x2e0f48: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x2e0f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
    // 0x2e0f4c: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x2e0f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
    // 0x2e0f50: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x2e0f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x2e0f54: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2e0f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2e0f58: 0xe7b60130  swc1        $f22, 0x130($sp)
    ctx->pc = 0x2e0f58u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x2e0f5c: 0xe7b50128  swc1        $f21, 0x128($sp)
    ctx->pc = 0x2e0f5cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x2e0f60: 0xe7b40120  swc1        $f20, 0x120($sp)
    ctx->pc = 0x2e0f60u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x2e0f64: 0x90430009  lbu         $v1, 0x9($v0)
    ctx->pc = 0x2e0f64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x61B289u));
    // 0x2e0f68: 0xafa30074  sw          $v1, 0x74($sp)
    ctx->pc = 0x2e0f68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 3));
    // 0x2e0f6c: 0x90420008  lbu         $v0, 0x8($v0)
    ctx->pc = 0x2e0f6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x61B288u));
    // 0x2e0f70: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x2e0f70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x2e0f74: 0x2ea20010  sltiu       $v0, $s5, 0x10
    ctx->pc = 0x2e0f74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2e0f78: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2E0F78u;
    {
        const bool branch_taken_0x2e0f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0F78u;
        // 0x2e0f7c: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0f78) {
            ctx->pc = 0x2E0FA4u;
            goto label_2e0fa4;
        }
    }
    ctx->pc = 0x2E0F80u;
    // 0x2e0f80: 0x32a20007  andi        $v0, $s5, 0x7
    ctx->pc = 0x2e0f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)7);
    // 0x2e0f84: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2e0f84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2e0f88: 0x24633b60  addiu       $v1, $v1, 0x3B60
    ctx->pc = 0x2e0f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15200));
    // 0x2e0f8c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2e0f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2e0f90: 0x32a40008  andi        $a0, $s5, 0x8
    ctx->pc = 0x2e0f90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)8);
    // 0x2e0f94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e0f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e0f98: 0x2c9e0001  sltiu       $fp, $a0, 0x1
    ctx->pc = 0x2e0f98u;
    SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2e0f9c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E0F9Cu;
    {
        const bool branch_taken_0x2e0f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0F9Cu;
        // 0x2e0fa0: 0x8c550000  lw          $s5, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0f9c) {
            ctx->pc = 0x2E0FA8u;
            goto label_2e0fa8;
        }
    }
    ctx->pc = 0x2E0FA4u;
label_2e0fa4:
    // 0x2e0fa4: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x2e0fa4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e0fa8:
    // 0x2e0fa8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2e0fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2e0fac: 0x82630000  lb          $v1, 0x0($s3)
    ctx->pc = 0x2e0facu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2e0fb0: 0x488023  subu        $s0, $v0, $t0
    ctx->pc = 0x2e0fb0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2e0fb4: 0x106000b6  beqz        $v1, . + 4 + (0xB6 << 2)
    ctx->pc = 0x2E0FB4u;
    {
        const bool branch_taken_0x2e0fb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0FB4u;
        // 0x2e0fb8: 0x92640000  lbu         $a0, 0x0($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0fb4) {
            ctx->pc = 0x2E1290u;
            goto label_2e1290;
        }
    }
    ctx->pc = 0x2E0FBCu;
    // 0x2e0fbc: 0x32170001  andi        $s7, $s0, 0x1
    ctx->pc = 0x2e0fbcu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x2e0fc0: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x2e0fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x2e0fc4: 0x2e0b02d  daddu       $s6, $s7, $zero
    ctx->pc = 0x2e0fc4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0fc8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2e0fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2e0fcc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e0fccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e0fd0: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2e0fd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2e0fd4: 0x2451b280  addiu       $s1, $v0, -0x4D80
    ctx->pc = 0x2e0fd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947456));
    // 0x2e0fd8: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x2e0fd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x2e0fdc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2e0fdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2e0fe0: 0x2c3b025  or          $s6, $s6, $v1
    ctx->pc = 0x2e0fe0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | GPR_U64(ctx, 3));
    // 0x2e0fe4: 0x3c013d00  lui         $at, 0x3D00
    ctx->pc = 0x2e0fe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15616 << 16));
    // 0x2e0fe8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2e0fe8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2e0fec: 0x2e3b825  or          $s7, $s7, $v1
    ctx->pc = 0x2e0fecu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | GPR_U64(ctx, 3));
label_2e0ff0:
    // 0x2e0ff0: 0x96220012  lhu         $v0, 0x12($s1)
    ctx->pc = 0x2e0ff0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x2e0ff4: 0x2c420801  sltiu       $v0, $v0, 0x801
    ctx->pc = 0x2e0ff4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2049) ? 1 : 0);
    // 0x2e0ff8: 0x104000a8  beqz        $v0, . + 4 + (0xA8 << 2)
    ctx->pc = 0x2E0FF8u;
    {
        const bool branch_taken_0x2e0ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0FF8u;
        // 0x2e0ffc: 0x41600  sll         $v0, $a0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0ff8) {
            ctx->pc = 0x2E129Cu;
            goto label_2e129c;
        }
    }
    ctx->pc = 0x2E1000u;
    // 0x2e1000: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2e1000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2e1004: 0x22603  sra         $a0, $v0, 24
    ctx->pc = 0x2e1004u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2e1008: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E1008u;
    {
        const bool branch_taken_0x2e1008 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2E100Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1008u;
        // 0x2e100c: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1008) {
            ctx->pc = 0x2E1030u;
            goto label_2e1030;
        }
    }
    ctx->pc = 0x2E1010u;
    // 0x2e1010: 0x9622000e  lhu         $v0, 0xE($s1)
    ctx->pc = 0x2e1010u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x2e1014: 0x96230010  lhu         $v1, 0x10($s1)
    ctx->pc = 0x2e1014u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2e1018: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2e1018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2e101c: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x2e101cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1020: 0x3054ffff  andi        $s4, $v0, 0xFFFF
    ctx->pc = 0x2e1020u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2e1024: 0xa623000c  sh          $v1, 0xC($s1)
    ctx->pc = 0x2e1024u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e1028: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x2E1028u;
    {
        const bool branch_taken_0x2e1028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E102Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1028u;
        // 0x2e102c: 0xa622000e  sh          $v0, 0xE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1028) {
            ctx->pc = 0x2E1280u;
            goto label_2e1280;
        }
    }
    ctx->pc = 0x2E1030u;
label_2e1030:
    // 0x2e1030: 0x50820092  beql        $a0, $v0, . + 4 + (0x92 << 2)
    ctx->pc = 0x2E1030u;
    {
        const bool branch_taken_0x2e1030 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e1030) {
            ctx->pc = 0x2E1034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1030u;
            // 0x2e1034: 0x92220008  lbu         $v0, 0x8($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E127Cu;
            goto label_2e127c;
        }
    }
    ctx->pc = 0x2E1038u;
    // 0x2e1038: 0xc0b84b6  jal         func_2E12D8
    ctx->pc = 0x2E1038u;
    SET_GPR_U32(ctx, 31, 0x2E1040u);
    ctx->pc = 0x2E12D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E12D8u, 0x2E1038u, 0x2E1040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1040u;
label_2e1040:
    // 0x2e1040: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x2e1040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x2e1044: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x2e1044u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e1048: 0x0  nop
    ctx->pc = 0x2e1048u;
    // NOP
    // 0x2e104c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2e104cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2e1050: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x2e1050u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1054: 0x0  nop
    ctx->pc = 0x2e1054u;
    // NOP
    // 0x2e1058: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e1058u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e105c: 0x304300e0  andi        $v1, $v0, 0xE0
    ctx->pc = 0x2e105cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)224);
    // 0x2e1060: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2e1060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2e1064: 0x32882  srl         $a1, $v1, 2
    ctx->pc = 0x2e1064u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x2e1068: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x2e1068u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2e106c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2e106cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2e1070: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2e1070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2e1074: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E1074u;
    {
        const bool branch_taken_0x2e1074 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x2E1078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1074u;
        // 0x2e1078: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1074) {
            ctx->pc = 0x2E1090u;
            goto label_2e1090;
        }
    }
    ctx->pc = 0x2E107Cu;
    // 0x2e107c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x2e107cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1080: 0x0  nop
    ctx->pc = 0x2e1080u;
    // NOP
    // 0x2e1084: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e1084u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e1088: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E1088u;
    {
        const bool branch_taken_0x2e1088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E108Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1088u;
        // 0x2e108c: 0x8fa30070  lw          $v1, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1088) {
            ctx->pc = 0x2E10A4u;
            goto label_2e10a4;
        }
    }
    ctx->pc = 0x2E1090u;
label_2e1090:
    // 0x2e1090: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x2e1090u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1094: 0x0  nop
    ctx->pc = 0x2e1094u;
    // NOP
    // 0x2e1098: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e1098u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e109c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2e109cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2e10a0: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2e10a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_2e10a4:
    // 0x2e10a4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2e10a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2e10a8: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x2e10a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2e10ac: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E10ACu;
    {
        const bool branch_taken_0x2e10ac = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2E10B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E10ACu;
        // 0x2e10b0: 0xe7b6000c  swc1        $f22, 0xC($sp) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e10ac) {
            ctx->pc = 0x2E10C8u;
            goto label_2e10c8;
        }
    }
    ctx->pc = 0x2E10B4u;
    // 0x2e10b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e10b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e10b8: 0x0  nop
    ctx->pc = 0x2e10b8u;
    // NOP
    // 0x2e10bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e10bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e10c0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2E10C0u;
    {
        const bool branch_taken_0x2e10c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E10C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E10C0u;
        // 0x2e10c4: 0x8fa30074  lw          $v1, 0x74($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e10c0) {
            ctx->pc = 0x2E10E8u;
            goto label_2e10e8;
        }
    }
    ctx->pc = 0x2E10C8u;
label_2e10c8:
    // 0x2e10c8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2e10c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2e10cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e10ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e10d0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e10d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e10d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e10d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e10d8: 0x0  nop
    ctx->pc = 0x2e10d8u;
    // NOP
    // 0x2e10dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e10dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e10e0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2e10e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2e10e4: 0x8fa30074  lw          $v1, 0x74($sp)
    ctx->pc = 0x2e10e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_2e10e8:
    // 0x2e10e8: 0x2831021  addu        $v0, $s4, $v1
    ctx->pc = 0x2e10e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2e10ec: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E10ECu;
    {
        const bool branch_taken_0x2e10ec = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2E10F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E10ECu;
        // 0x2e10f0: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e10ec) {
            ctx->pc = 0x2E1108u;
            goto label_2e1108;
        }
    }
    ctx->pc = 0x2E10F4u;
    // 0x2e10f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e10f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e10f8: 0x0  nop
    ctx->pc = 0x2e10f8u;
    // NOP
    // 0x2e10fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e10fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e1100: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2E1100u;
    {
        const bool branch_taken_0x2e1100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1100u;
        // 0x2e1104: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1100) {
            ctx->pc = 0x2E1128u;
            goto label_2e1128;
        }
    }
    ctx->pc = 0x2E1108u;
label_2e1108:
    // 0x2e1108: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2e1108u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2e110c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e110cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e1110: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e1110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e1114: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e1114u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1118: 0x0  nop
    ctx->pc = 0x2e1118u;
    // NOP
    // 0x2e111c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e111cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e1120: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2e1120u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2e1124: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2e1124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2e1128:
    // 0x2e1128: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E1128u;
    {
        const bool branch_taken_0x2e1128 = (GPR_S64(ctx, 16) < 0);
        if (branch_taken_0x2e1128) {
            ctx->pc = 0x2E1144u;
            goto label_2e1144;
        }
    }
    ctx->pc = 0x2E1130u;
    // 0x2e1130: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x2e1130u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1134: 0x0  nop
    ctx->pc = 0x2e1134u;
    // NOP
    // 0x2e1138: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e1138u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e113c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E113Cu;
    {
        const bool branch_taken_0x2e113c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E113Cu;
        // 0x2e1140: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e113c) {
            ctx->pc = 0x2E1158u;
            goto label_2e1158;
        }
    }
    ctx->pc = 0x2E1144u;
label_2e1144:
    // 0x2e1144: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x2e1144u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1148: 0x0  nop
    ctx->pc = 0x2e1148u;
    // NOP
    // 0x2e114c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e114cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e1150: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2e1150u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2e1154: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2e1154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2e1158:
    // 0x2e1158: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E1158u;
    {
        const bool branch_taken_0x2e1158 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x2E115Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1158u;
        // 0x2e115c: 0xe7b6001c  swc1        $f22, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1158) {
            ctx->pc = 0x2E1174u;
            goto label_2e1174;
        }
    }
    ctx->pc = 0x2E1160u;
    // 0x2e1160: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2e1160u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1164: 0x0  nop
    ctx->pc = 0x2e1164u;
    // NOP
    // 0x2e1168: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e1168u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e116c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E116Cu;
    {
        const bool branch_taken_0x2e116c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E116Cu;
        // 0x2e1170: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e116c) {
            ctx->pc = 0x2E118Cu;
            goto label_2e118c;
        }
    }
    ctx->pc = 0x2E1174u;
label_2e1174:
    // 0x2e1174: 0x41042  srl         $v0, $a0, 1
    ctx->pc = 0x2e1174u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x2e1178: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e1178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e117c: 0x0  nop
    ctx->pc = 0x2e117cu;
    // NOP
    // 0x2e1180: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e1180u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e1184: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2e1184u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2e1188: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2e1188u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_2e118c:
    // 0x2e118c: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E118Cu;
    {
        const bool branch_taken_0x2e118c = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x2E1190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E118Cu;
        // 0x2e1190: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e118c) {
            ctx->pc = 0x2E11A8u;
            goto label_2e11a8;
        }
    }
    ctx->pc = 0x2E1194u;
    // 0x2e1194: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2e1194u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1198: 0x0  nop
    ctx->pc = 0x2e1198u;
    // NOP
    // 0x2e119c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e119cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e11a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E11A0u;
    {
        const bool branch_taken_0x2e11a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E11A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E11A0u;
        // 0x2e11a4: 0x46140002  mul.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e11a0) {
            ctx->pc = 0x2E11C0u;
            goto label_2e11c0;
        }
    }
    ctx->pc = 0x2E11A8u;
label_2e11a8:
    // 0x2e11a8: 0x51042  srl         $v0, $a1, 1
    ctx->pc = 0x2e11a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x2e11ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e11acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e11b0: 0x0  nop
    ctx->pc = 0x2e11b0u;
    // NOP
    // 0x2e11b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e11b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e11b8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2e11b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2e11bc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2e11bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_2e11c0:
    // 0x2e11c0: 0x24820008  addiu       $v0, $a0, 0x8
    ctx->pc = 0x2e11c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2e11c4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E11C4u;
    {
        const bool branch_taken_0x2e11c4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2E11C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E11C4u;
        // 0x2e11c8: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e11c4) {
            ctx->pc = 0x2E11E0u;
            goto label_2e11e0;
        }
    }
    ctx->pc = 0x2E11CCu;
    // 0x2e11cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e11ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e11d0: 0x0  nop
    ctx->pc = 0x2e11d0u;
    // NOP
    // 0x2e11d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e11d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e11d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E11D8u;
    {
        const bool branch_taken_0x2e11d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E11DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E11D8u;
        // 0x2e11dc: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e11d8) {
            ctx->pc = 0x2E11F8u;
            goto label_2e11f8;
        }
    }
    ctx->pc = 0x2E11E0u;
label_2e11e0:
    // 0x2e11e0: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x2e11e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2e11e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e11e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e11e8: 0x0  nop
    ctx->pc = 0x2e11e8u;
    // NOP
    // 0x2e11ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e11ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e11f0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2e11f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2e11f4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2e11f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_2e11f8:
    // 0x2e11f8: 0x24a20008  addiu       $v0, $a1, 0x8
    ctx->pc = 0x2e11f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2e11fc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E11FCu;
    {
        const bool branch_taken_0x2e11fc = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2E1200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E11FCu;
        // 0x2e1200: 0xe7a0002c  swc1        $f0, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e11fc) {
            ctx->pc = 0x2E1218u;
            goto label_2e1218;
        }
    }
    ctx->pc = 0x2E1204u;
    // 0x2e1204: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e1204u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1208: 0x0  nop
    ctx->pc = 0x2e1208u;
    // NOP
    // 0x2e120c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e120cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e1210: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E1210u;
    {
        const bool branch_taken_0x2e1210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1210u;
        // 0x2e1214: 0x46140002  mul.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1210) {
            ctx->pc = 0x2E1230u;
            goto label_2e1230;
        }
    }
    ctx->pc = 0x2E1218u;
label_2e1218:
    // 0x2e1218: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x2e1218u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2e121c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e121cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1220: 0x0  nop
    ctx->pc = 0x2e1220u;
    // NOP
    // 0x2e1224: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e1224u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e1228: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2e1228u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2e122c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2e122cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_2e1230:
    // 0x2e1230: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e1230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1234: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2e1234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x2e1238: 0x13c00005  beqz        $fp, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E1238u;
    {
        const bool branch_taken_0x2e1238 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E123Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1238u;
        // 0x2e123c: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1238) {
            ctx->pc = 0x2E1250u;
            goto label_2e1250;
        }
    }
    ctx->pc = 0x2E1240u;
    // 0x2e1240: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x2e1240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2e1244: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x2e1244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x2e1248: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2e1248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x2e124c: 0xffa30050  sd          $v1, 0x50($sp)
    ctx->pc = 0x2e124cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 3));
label_2e1250:
    // 0x2e1250: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e1250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1254: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2e1254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1258: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e1258u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e125c: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x2e125cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e1260: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x2e1260u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2e1264: 0xc0576cc  jal         func_15DB30
    ctx->pc = 0x2E1264u;
    SET_GPR_U32(ctx, 31, 0x2E126Cu);
    ctx->pc = 0x2E1268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1264u;
    // 0x2e1268: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15DB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15DB30u, 0x2E1264u, 0x2E126Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E126Cu;
label_2e126c:
    // 0x2e126c: 0x96230012  lhu         $v1, 0x12($s1)
    ctx->pc = 0x2e126cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x2e1270: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e1270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e1274: 0xa6230012  sh          $v1, 0x12($s1)
    ctx->pc = 0x2e1274u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e1278: 0x92220008  lbu         $v0, 0x8($s1)
    ctx->pc = 0x2e1278u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
label_2e127c:
    // 0x2e127c: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x2e127cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_2e1280:
    // 0x2e1280: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2e1280u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2e1284: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x2e1284u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2e1288: 0x1440ff59  bnez        $v0, . + 4 + (-0xA7 << 2)
    ctx->pc = 0x2E1288u;
    {
        const bool branch_taken_0x2e1288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E128Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1288u;
        // 0x2e128c: 0x92640000  lbu         $a0, 0x0($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1288) {
            ctx->pc = 0x2E0FF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e0ff0;
        }
    }
    ctx->pc = 0x2E1290u;
label_2e1290:
    // 0x2e1290: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x2e1290u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x2e1294: 0x2462b280  addiu       $v0, $v1, -0x4D80
    ctx->pc = 0x2e1294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947456));
    // 0x2e1298: 0xa452000c  sh          $s2, 0xC($v0)
    ctx->pc = 0x2e1298u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x61B28Cu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x61B28Cu, _value); } while (0);
label_2e129c:
    // 0x2e129c: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x2e129cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2e12a0: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x2e12a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2e12a4: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x2e12a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2e12a8: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x2e12a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2e12ac: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x2e12acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2e12b0: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x2e12b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e12b4: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x2e12b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e12b8: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x2e12b8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2e12bc: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x2e12bcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e12c0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2e12c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e12c4: 0xc7b60130  lwc1        $f22, 0x130($sp)
    ctx->pc = 0x2e12c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2e12c8: 0xc7b50128  lwc1        $f21, 0x128($sp)
    ctx->pc = 0x2e12c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2e12cc: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x2e12ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e12d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E12D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E12D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E12D0u;
        // 0x2e12d4: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E12D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E12D8u;
}
