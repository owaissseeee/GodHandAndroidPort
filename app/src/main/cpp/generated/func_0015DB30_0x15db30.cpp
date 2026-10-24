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

// Function: func_0015DB30
// Address: 0x15db30 - 0x15ddf8
void func_0015DB30_0x15db30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0015DB30_0x15db30");
#endif

    switch (ctx->pc) {
        case 0x15db78u: goto label_15db78;
        case 0x15dc00u: goto label_15dc00;
        case 0x15dc0cu: goto label_15dc0c;
        case 0x15ddb0u: goto label_15ddb0;
        default: break;
    }

    ctx->pc = 0x15db30u;

    // 0x15db30: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x15db30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x15db34: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x15db34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x15db38: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x15db38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x15db3c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x15db3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15db40: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x15db40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x15db44: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x15db44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15db48: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x15db48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x15db4c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x15db4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15db50: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x15db50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x15db54: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x15db54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x15db58: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x15db58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x15db5c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x15db5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x15db60: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x15db60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x15db64: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x15db64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x15db68: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x15db68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x15db6c: 0xafa80020  sw          $t0, 0x20($sp)
    ctx->pc = 0x15db6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 8));
    // 0x15db70: 0xc056c3c  jal         func_15B0F0
    ctx->pc = 0x15DB70u;
    SET_GPR_U32(ctx, 31, 0x15DB78u);
    ctx->pc = 0x15DB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DB70u;
    // 0x15db74: 0xafa90024  sw          $t1, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B0F0u, 0x15DB70u, 0x15DB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DB78u;
label_15db78:
    // 0x15db78: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15db78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15db7c: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15DB7Cu;
    {
        const bool branch_taken_0x15db7c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x15DB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DB7Cu;
        // 0x15db80: 0x3c025000  lui         $v0, 0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15db7c) {
            ctx->pc = 0x15DB8Cu;
            goto label_15db8c;
        }
    }
    ctx->pc = 0x15DB84u;
    // 0x15db84: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x15DB84u;
    {
        const bool branch_taken_0x15db84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DB84u;
        // 0x15db88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15db84) {
            ctx->pc = 0x15DDB4u;
            goto label_15ddb4;
        }
    }
    ctx->pc = 0x15DB8Cu;
label_15db8c:
    // 0x15db8c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x15db8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x15db90: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x15db90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x15db94: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x15db94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x15db98: 0x52b7c  dsll32      $a1, $a1, 13
    ctx->pc = 0x15db98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 13));
    // 0x15db9c: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x15db9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x15dba0: 0xfe230000  sd          $v1, 0x0($s1)
    ctx->pc = 0x15dba0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
    // 0x15dba4: 0x101e02  srl         $v1, $s0, 24
    ctx->pc = 0x15dba4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 24));
    // 0x15dba8: 0x3c041100  lui         $a0, 0x1100
    ctx->pc = 0x15dba8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4352 << 16));
    // 0x15dbac: 0xafa3002c  sw          $v1, 0x2C($sp)
    ctx->pc = 0x15dbacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
    // 0x15dbb0: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x15dbb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x15dbb4: 0xfe250010  sd          $a1, 0x10($s1)
    ctx->pc = 0x15dbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 5));
    // 0x15dbb8: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x15dbb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x15dbbc: 0x3c070005  lui         $a3, 0x5
    ctx->pc = 0x15dbbcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)5 << 16));
    // 0x15dbc0: 0x34e7080b  ori         $a3, $a3, 0x80B
    ctx->pc = 0x15dbc0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)2059);
    // 0x15dbc4: 0x24080047  addiu       $t0, $zero, 0x47
    ctx->pc = 0x15dbc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x15dbc8: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x15dbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
    // 0x15dbcc: 0x26250090  addiu       $a1, $s1, 0x90
    ctx->pc = 0x15dbccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x15dbd0: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x15dbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x15dbd4: 0x321e00ff  andi        $fp, $s0, 0xFF
    ctx->pc = 0x15dbd4u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x15dbd8: 0xfe260018  sd          $a2, 0x18($s1)
    ctx->pc = 0x15dbd8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 6));
    // 0x15dbdc: 0x10aa02  srl         $s5, $s0, 8
    ctx->pc = 0x15dbdcu;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
    // 0x15dbe0: 0xfe270020  sd          $a3, 0x20($s1)
    ctx->pc = 0x15dbe0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 7));
    // 0x15dbe4: 0x10b402  srl         $s6, $s0, 16
    ctx->pc = 0x15dbe4u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 16), 16));
    // 0x15dbe8: 0xfe280028  sd          $t0, 0x28($s1)
    ctx->pc = 0x15dbe8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 40), GPR_U64(ctx, 8));
    // 0x15dbec: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x15dbecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x15dbf0: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x15dbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x15dbf4: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x15dbf4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15dbf8: 0x24170800  addiu       $s7, $zero, 0x800
    ctx->pc = 0x15dbf8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x15dbfc: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x15dbfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_15dc00:
    // 0x15dc00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15dc00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dc04: 0xc0c295c  jal         func_30A570
    ctx->pc = 0x15DC04u;
    SET_GPR_U32(ctx, 31, 0x15DC0Cu);
    ctx->pc = 0x15DC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DC04u;
    // 0x15dc08: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A570u, 0x15DC04u, 0x15DC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DC0Cu;
label_15dc0c:
    // 0x15dc0c: 0x2652fff0  addiu       $s2, $s2, -0x10
    ctx->pc = 0x15dc0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967280));
    // 0x15dc10: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x15dc10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x15dc14: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15dc14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15dc18: 0x8c621180  lw          $v0, 0x1180($v1)
    ctx->pc = 0x15dc18u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C1180u));
    // 0x15dc1c: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x15dc1cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x15dc20: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x15dc20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x15dc24: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x15dc24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15dc28: 0x8c656b80  lw          $a1, 0x6B80($v1)
    ctx->pc = 0x15dc28u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x586B80u));
    // 0x15dc2c: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x15dc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x15dc30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15dc30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15dc34: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x15dc34u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x15dc38: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x15dc38u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x15dc3c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x15dc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x15dc40: 0x2e21023  subu        $v0, $s7, $v0
    ctx->pc = 0x15dc40u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x15dc44: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x15dc44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x15dc48: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15dc48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x15dc4c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x15dc4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x15dc50: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x15dc50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x15dc54: 0x1680ffea  bnez        $s4, . + 4 + (-0x16 << 2)
    ctx->pc = 0x15DC54u;
    {
        const bool branch_taken_0x15dc54 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x15DC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DC54u;
        // 0x15dc58: 0x2610fff0  addiu       $s0, $s0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dc54) {
            ctx->pc = 0x15DC00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15dc00;
        }
    }
    ctx->pc = 0x15DC5Cu;
    // 0x15dc5c: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x15dc5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x15dc60: 0x32a400ff  andi        $a0, $s5, 0xFF
    ctx->pc = 0x15dc60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x15dc64: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15dc64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15dc68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15dc68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15dc6c: 0x32c200ff  andi        $v0, $s6, 0xFF
    ctx->pc = 0x15dc6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x15dc70: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x15dc70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x15dc74: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x15dc74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
    // 0x15dc78: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x15dc78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x15dc7c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x15dc7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x15dc80: 0x3c42025  or          $a0, $fp, $a0
    ctx->pc = 0x15dc80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 30) | GPR_U64(ctx, 4));
    // 0x15dc84: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x15dc84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x15dc88: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x15dc88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x15dc8c: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x15dc8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x15dc90: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x15dc90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dc94: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x15dc94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x15dc98: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x15dc98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x15dc9c: 0x3403805a  ori         $v1, $zero, 0x805A
    ctx->pc = 0x15dc9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32858);
    // 0x15dca0: 0x31b7c  dsll32      $v1, $v1, 13
    ctx->pc = 0x15dca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 13));
    // 0x15dca4: 0x34638005  ori         $v1, $v1, 0x8005
    ctx->pc = 0x15dca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32773);
    // 0x15dca8: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x15dca8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x15dcac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15dcacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15dcb0: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x15dcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x15dcb4: 0xfe250048  sd          $a1, 0x48($s1)
    ctx->pc = 0x15dcb4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 72), GPR_U64(ctx, 5));
    // 0x15dcb8: 0xfe230030  sd          $v1, 0x30($s1)
    ctx->pc = 0x15dcb8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 48), GPR_U64(ctx, 3));
    // 0x15dcbc: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x15dcbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15dcc0: 0xfe220038  sd          $v0, 0x38($s1)
    ctx->pc = 0x15dcc0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 56), GPR_U64(ctx, 2));
    // 0x15dcc4: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x15dcc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x15dcc8: 0xfe240040  sd          $a0, 0x40($s1)
    ctx->pc = 0x15dcc8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 64), GPR_U64(ctx, 4));
    // 0x15dccc: 0x3c097000  lui         $t1, 0x7000
    ctx->pc = 0x15dcccu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)28672 << 16));
    // 0x15dcd0: 0x3c051100  lui         $a1, 0x1100
    ctx->pc = 0x15dcd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
    // 0x15dcd4: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x15dcd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x15dcd8: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x15dcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15dcdc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x15dcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15dce0: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x15dce0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x15dce4: 0x2113b  dsra        $v0, $v0, 4
    ctx->pc = 0x15dce4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 4);
    // 0x15dce8: 0xfe260068  sd          $a2, 0x68($s1)
    ctx->pc = 0x15dce8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 104), GPR_U64(ctx, 6));
    // 0x15dcec: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x15dcecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x15dcf0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x15dcf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x15dcf4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x15dcf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x15dcf8: 0xfe230060  sd          $v1, 0x60($s1)
    ctx->pc = 0x15dcf8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 96), GPR_U64(ctx, 3));
    // 0x15dcfc: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x15dcfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x15dd00: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x15dd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15dd04: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x15dd04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15dd08: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x15dd08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x15dd0c: 0x2113b  dsra        $v0, $v0, 4
    ctx->pc = 0x15dd0cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 4);
    // 0x15dd10: 0xfe270088  sd          $a3, 0x88($s1)
    ctx->pc = 0x15dd10u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 136), GPR_U64(ctx, 7));
    // 0x15dd14: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x15dd14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x15dd18: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x15dd18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x15dd1c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x15dd1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x15dd20: 0xe6200074  swc1        $f0, 0x74($s1)
    ctx->pc = 0x15dd20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
    // 0x15dd24: 0xfe230080  sd          $v1, 0x80($s1)
    ctx->pc = 0x15dd24u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 128), GPR_U64(ctx, 3));
    // 0x15dd28: 0xfe280078  sd          $t0, 0x78($s1)
    ctx->pc = 0x15dd28u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 120), GPR_U64(ctx, 8));
    // 0x15dd2c: 0xfe290090  sd          $t1, 0x90($s1)
    ctx->pc = 0x15dd2cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 144), GPR_U64(ctx, 9));
    // 0x15dd30: 0xae250098  sw          $a1, 0x98($s1)
    ctx->pc = 0x15dd30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 5));
    // 0x15dd34: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x15dd34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
    // 0x15dd38: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x15dd38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
    // 0x15dd3c: 0xfe280058  sd          $t0, 0x58($s1)
    ctx->pc = 0x15dd3cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 88), GPR_U64(ctx, 8));
    // 0x15dd40: 0xe6200070  swc1        $f0, 0x70($s1)
    ctx->pc = 0x15dd40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
    // 0x15dd44: 0x12600013  beqz        $s3, . + 4 + (0x13 << 2)
    ctx->pc = 0x15DD44u;
    {
        const bool branch_taken_0x15dd44 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DD44u;
        // 0x15dd48: 0xae20009c  sw          $zero, 0x9C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dd44) {
            ctx->pc = 0x15DD94u;
            goto label_15dd94;
        }
    }
    ctx->pc = 0x15DD4Cu;
    // 0x15dd4c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x15dd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x15dd50: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x15dd50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x15dd54: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x15DD54u;
    {
        const bool branch_taken_0x15dd54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15dd54) {
            ctx->pc = 0x15DD58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15DD54u;
            // 0x15dd58: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15DD68u;
            goto label_15dd68;
        }
    }
    ctx->pc = 0x15DD5Cu;
    // 0x15dd5c: 0xde620030  ld          $v0, 0x30($s3)
    ctx->pc = 0x15dd5cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x15dd60: 0xfe220020  sd          $v0, 0x20($s1)
    ctx->pc = 0x15dd60u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 2));
    // 0x15dd64: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x15dd64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_15dd68:
    // 0x15dd68: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15dd68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x15dd6c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x15DD6Cu;
    {
        const bool branch_taken_0x15dd6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DD6Cu;
        // 0x15dd70: 0x3c040075  lui         $a0, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dd6c) {
            ctx->pc = 0x15DD98u;
            goto label_15dd98;
        }
    }
    ctx->pc = 0x15DD74u;
    // 0x15dd74: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x15dd74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15dd78: 0xe6200050  swc1        $f0, 0x50($s1)
    ctx->pc = 0x15dd78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
    // 0x15dd7c: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x15dd7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15dd80: 0xe6210054  swc1        $f1, 0x54($s1)
    ctx->pc = 0x15dd80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
    // 0x15dd84: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x15dd84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15dd88: 0xe6200070  swc1        $f0, 0x70($s1)
    ctx->pc = 0x15dd88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
    // 0x15dd8c: 0xc6610010  lwc1        $f1, 0x10($s3)
    ctx->pc = 0x15dd8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15dd90: 0xe6210074  swc1        $f1, 0x74($s1)
    ctx->pc = 0x15dd90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
label_15dd94:
    // 0x15dd94: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x15dd94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
label_15dd98:
    // 0x15dd98: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x15dd98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15dd9c: 0x8fa60024  lw          $a2, 0x24($sp)
    ctx->pc = 0x15dd9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x15dda0: 0x24844c80  addiu       $a0, $a0, 0x4C80
    ctx->pc = 0x15dda0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19584));
    // 0x15dda4: 0x8fa80028  lw          $t0, 0x28($sp)
    ctx->pc = 0x15dda4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15dda8: 0xc0c6994  jal         func_31A650
    ctx->pc = 0x15DDA8u;
    SET_GPR_U32(ctx, 31, 0x15DDB0u);
    ctx->pc = 0x15DDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DDA8u;
    // 0x15ddac: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A650u, 0x15DDA8u, 0x15DDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DDB0u;
label_15ddb0:
    // 0x15ddb0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x15ddb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15ddb4:
    // 0x15ddb4: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x15ddb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x15ddb8: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x15ddb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15ddbc: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x15ddbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x15ddc0: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x15ddc0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x15ddc4: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x15ddc4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15ddc8: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x15ddc8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15ddcc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x15ddccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15ddd0: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x15ddd0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15ddd4: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x15ddd4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15ddd8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x15ddd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15dddc: 0x3e00008  jr          $ra
    ctx->pc = 0x15DDDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15DDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DDDCu;
        // 0x15dde0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15DDDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15DDE4u;
    // 0x15dde4: 0x0  nop
    ctx->pc = 0x15dde4u;
    // NOP
    // 0x15dde8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x15dde8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15ddec: 0x0  nop
    ctx->pc = 0x15ddecu;
    // NOP
    // 0x15ddf0: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x15ddf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x15ddf4: 0x0  nop
    ctx->pc = 0x15ddf4u;
    // NOP
    ctx->pc = 0x15ddf8u;
}
